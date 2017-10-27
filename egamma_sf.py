#!/bin/env python

import os
import sys
import ROOT as r
import printsf

id_file = r.TFile("egamma_TightIDSF.root")
reco_file = r.TFile("egamma_RecoSF.root")

printsf.printsf_th2("lepsf_EGammaTightID", id_file.Get("EGamma_SF2D"), xvarabs=True)
printsf.printsf_th2("lepsf_EGammaReco", reco_file.Get("EGamma_SF2D"), xvarabs=True)

#eof
