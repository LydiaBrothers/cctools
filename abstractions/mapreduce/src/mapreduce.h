/*
Copyright (C) 2009- The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file COPYING for details.
*/

#ifndef MAPREDUCE_H
#define MAPREDUCE_H

#include "batch_job.h"

/* Default values */
#define MR_DEFAULT_NMAPPERS	32
#define MR_DEFAULT_NREDUCERS	16
#define MR_DEFAULT_BQTYPE	BATCH_QUEUE_TYPE_CONDOR
#define MR_DEFAULT_BIN_DIR	INSTALL_PATH "/bin"
#define MR_DEFAULT_SCRATCH_DIR  "."

/* Constants */
#define MR_MAX_STRLEN		1024
#define MR_MAX_ATTEMPTS		4
#define MR_MAPPER		"mapper"
#define MR_REDUCER		"reducer"
#define MR_INPUTLIST		"inputlist"

#endif

// vim: sw=8 sts=8 ts=8 ft=cpp
