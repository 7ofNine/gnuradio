/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(dvbt2_cellinterleaver_cc.h)                                */
/* BINDTOOL_HEADER_FILE_HASH(bf73763c0dccee7ec30616bfbd9e56e0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt2_cellinterleaver_cc.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt2_cellinterleaver_cc_pydoc.h>

void bind_dvbt2_cellinterleaver_cc(py::module& m)
{

    using dvbt2_cellinterleaver_cc = ::gr::dtv::dvbt2_cellinterleaver_cc;


    py::class_<dvbt2_cellinterleaver_cc,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<dvbt2_cellinterleaver_cc>>(
        m, "dvbt2_cellinterleaver_cc", D(dvbt2_cellinterleaver_cc))

        .def(py::init(&dvbt2_cellinterleaver_cc::make),
             py::arg("framesize"),
             py::arg("constellation"),
             py::arg("fecblocks"),
             py::arg("tiblocks"),
             D(dvbt2_cellinterleaver_cc, make))


        ;
}
