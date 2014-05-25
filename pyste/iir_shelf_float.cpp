
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include <spuc/iir_shelf.h>

// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
BOOST_PYTHON_MODULE(iir_shelf_float)
{
    class_< SPUC::iir_shelf<float,float> >("iir_shelf_float", init< const SPUC::iir_shelf<float,float>& >())
        .def(init< float, float, float, optional< long int > >())
        .def(init< float, float >())
        .def("get_a0", &SPUC::iir_shelf<float,float>::get_a0)
        .def("get_a1", &SPUC::iir_shelf<float,float>::get_a1)
        .def("get_b", &SPUC::iir_shelf<float,float>::get_b)
        .def("clock", &SPUC::iir_shelf<float,float>::clock)
        .def("set_round_bits", &SPUC::iir_shelf<float,float>::set_round_bits)
        .def("get_round_bits", &SPUC::iir_shelf<float,float>::get_round_bits)
        .def("reset", &SPUC::iir_shelf<float,float>::reset)
    ;

}

