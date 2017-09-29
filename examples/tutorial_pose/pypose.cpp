#include <gflags/gflags.h> // DEFINE_bool, DEFINE_int32, DEFINE_int64, DEFINE_uint64, DEFINE_double, DEFINE_string
#include <glog/logging.h> // google::InitGoogleLogging
// OpenPose dependencies
#include <openpose/core/headers.hpp>
#include <openpose/filestream/headers.hpp>
#include <openpose/gui/headers.hpp>
#include <openpose/pose/headers.hpp>
#include <openpose/utilities/headers.hpp>

#include <boost/python.hpp>
#include <boost/python/numpy.hpp>

using namespace boost::python;


BOOST_PYTHON_MODULE(pypose)
{
    Py_Initialize();
    numpy::initialize();

    class_<op::PoseExtractorCaffe>("PoseExtractorCaffe", no_init)
        .def(init<const op::Point<int>&, const op::Point<int>&, 
                  const op::PoseModel, const std::vector<op::HeatMapType>&,
                  const op::ScaleMode>)
    ;
}


