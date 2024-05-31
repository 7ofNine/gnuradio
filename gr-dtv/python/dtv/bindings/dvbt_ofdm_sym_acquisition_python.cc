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
/* BINDTOOL_HEADER_FILE(dvbt_ofdm_sym_acquisition.h)                               */
/* BINDTOOL_HEADER_FILE_HASH(5ca4962bf06014c90cf79fb2e80ee9ae)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt_ofdm_sym_acquisition.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt_ofdm_sym_acquisition_pydoc.h>

void bind_dvbt_ofdm_sym_acquisition(py::module& m)
{

    using dvbt_ofdm_sym_acquisition = ::gr::dtv::dvbt_ofdm_sym_acquisition;


    py::class_<dvbt_ofdm_sym_acquisition,
               gr::block,
               gr::basic_block,
               std::shared_ptr<dvbt_ofdm_sym_acquisition>>(
        m, "dvbt_ofdm_sym_acquisition", D(dvbt_ofdm_sym_acquisition))

        .def(py::init(&dvbt_ofdm_sym_acquisition::make),
             py::arg("blocks"),
             py::arg("fft_length"),
             py::arg("occupied_tones"),
             py::arg("cp_length"),
             py::arg("snr"),
             D(dvbt_ofdm_sym_acquisition, make))


        ;
}
