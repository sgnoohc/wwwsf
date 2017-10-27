#!/bin/env python

import os
import sys
import ROOT as r
import printsf

id_file_1 = r.TFile("EfficienciesAndSF_BCDEF.root")
id_file_2 = r.TFile("EfficienciesAndSF_GH.root")
reco_file = r.TFile("Tracking_EfficienciesAndSF_BCDEFGH.root")

id_hist_1 = id_file_1.Get("MC_NUM_MediumID2016_DEN_genTracks_PAR_pt_eta").Get("abseta_pt_ratio")
id_hist_2 = id_file_2.Get("MC_NUM_MediumID2016_DEN_genTracks_PAR_pt_eta").Get("abseta_pt_ratio")
reco_hist = reco_file.Get("ratio_eff_aeta_dr030e030_corr")

printsf.printsf_th2("lepsf_MuonMediumID_PeriodBCDEF", id_hist_1, xvarabs=True)
printsf.printsf_th2("lepsf_MuonMediumID_PeriodGH", id_hist_2, xvarabs=True)

#eof
