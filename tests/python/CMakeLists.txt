add_subdirectory(energy)
add_subdirectory(curve)
add_subdirectory(pubchem)
if(_isMKL)
    add_subdirectory(threading)
endif()
