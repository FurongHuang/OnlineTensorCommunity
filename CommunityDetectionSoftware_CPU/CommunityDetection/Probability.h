//
//  Probability.h
//  CommunityDetection
/*******************************************************
* Copyright (C) 2014 {Furong Huang} <{furongh@uci.edu}>
*
* This file is part of {community detection project}.
*
* All rights reserved.
*******************************************************/
#ifndef __CommunityDetection__Probability__
#define __CommunityDetection__Probability__
#include "stdafx.h"
////////////////////////////////////////////////////////////
//This is for Parameter estimation
// set of basic functions
Eigen::MatrixXd normc(Eigen::MatrixXd phi);
Eigen::SparseMatrix<double> normc(Eigen::SparseMatrix<double> phi);
Eigen::VectorXd normProbVector(Eigen::VectorXd P);
Eigen::SparseVector<double> normProbVector(Eigen::SparseVector<double> P);
Eigen::MatrixXd normProbMatrix(Eigen::MatrixXd P);
Eigen::SparseMatrix<double> normProbMatrix(Eigen::SparseMatrix<double> P);
#endif