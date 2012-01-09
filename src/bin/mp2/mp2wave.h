#ifndef MP2WAVE_H
#define MP2WAVE_H

// Forward declarations
namespace boost {
template<class T> class shared_ptr;
}

namespace psi {
class Wavefunction;
class Options;
}

namespace psi { namespace mp2 {

class MP2Wavefunction : public Wavefunction
{
public:
    MP2Wavefunction(boost::shared_ptr<Wavefunction> reference_wavefunction, Options &options);
    virtual ~MP2Wavefunction();
    virtual bool same_a_b_orbs() const { return reference_wavefunction_->same_a_b_orbs(); }
    virtual bool same_a_b_dens() const { return reference_wavefunction_->same_a_b_dens(); }


    double compute_energy();

private:
    void init();
};

}}

#endif // MP2WAVE_H

