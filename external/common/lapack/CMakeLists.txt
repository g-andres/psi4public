project(TargetLAPACK)
set(PN ${PROJECT_NAME})

# <<<  "Build"  >>>

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/math)

set(MKL_COMPILER_BINDINGS "${CMAKE_CXX_COMPILER_ID}")
set(BLAS_LANG "CXX")
set(LAPACK_LANG "CXX")
include(ConfigMath)

add_library(blas INTERFACE)
add_library(lapk INTERFACE)
add_library(lapack INTERFACE)
set_property(TARGET blas PROPERTY INTERFACE_LINK_LIBRARIES ${BLAS_LIBRARIES})
set_property(TARGET lapk PROPERTY INTERFACE_LINK_LIBRARIES ${LAPACK_LIBRARIES})
set_property(TARGET lapack PROPERTY INTERFACE_LINK_LIBRARIES lapk blas)
get_property(_ill TARGET lapk PROPERTY INTERFACE_LINK_LIBRARIES)
list(GET _ill 0 _ill0)
message(STATUS "${Cyan}Found LAPACK${ColourReset}: ${_ill0};...")

unset(BLAS_LIBRARIES)
unset(LAPACK_LIBRARIES)

install(TARGETS blas lapk lapack
        EXPORT "${PN}Targets")

# <<<  Export Config  >>>

include(CMakePackageConfigHelpers)

set(CMAKECONFIG_INSTALL_DIR "share/cmake/${PN}")
configure_package_config_file(${PN}Config.cmake.in
                              "${CMAKE_CURRENT_BINARY_DIR}/${PN}Config.cmake"
                              INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PN}Config.cmake
        DESTINATION ${CMAKECONFIG_INSTALL_DIR})
install(EXPORT "${PN}Targets"
        NAMESPACE "tgt::"
        DESTINATION ${CMAKECONFIG_INSTALL_DIR})

add_custom_target(lapack_external
    ${CMAKE_COMMAND} "-DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/stage${CMAKE_INSTALL_PREFIX}" -P "${PROJECT_BINARY_DIR}/cmake_install.cmake"
    COMMENT "Installing Psi4-detected BLAS/LAPACK")

set(${PN}_DIR ${STAGED_INSTALL_PREFIX}/share/cmake/${PN} CACHE PATH "path to externally detected ${PN}Config.cmake" FORCE)