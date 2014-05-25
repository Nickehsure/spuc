
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include <spuc/loop_filter.h>

// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
BOOST_PYTHON_MODULE(loop_filter_double)
{
    class_< SPUC::loop_filter<double,double> >("loop_filter_double", init<  >())
        .def(init< const SPUC::loop_filter<double,double>& >())
        .def_readwrite("k0_en", &SPUC::loop_filter<double,double>::k0_en)
        .def_readwrite("k1_en", &SPUC::loop_filter<double,double>::k1_en)
        .def_readwrite("k0", &SPUC::loop_filter<double,double>::k0)
        .def_readwrite("k1", &SPUC::loop_filter<double,double>::k1)
        .def_readwrite("k1_acc", &SPUC::loop_filter<double,double>::k1_acc)
        .def("reset", &SPUC::loop_filter<double,double>::reset)
        .def("update", &SPUC::loop_filter<double,double>::update)
    ;

}

