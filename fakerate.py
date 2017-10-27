#!/bin/env python

import os
import sys
import ROOT as r
import printsf

f = r.TFile("fakerate_pt_v_eta.root")

muon_fr_data = f.Get("muon_fakerate_conecorrpt_v_eta")
elec_fr_data = f.Get("elec_fakerate_conecorrpt_v_eta")
muon_fr_qcd  = f.Get("muon_fakerate_conecorrpt_v_eta_qcd")
elec_fr_qcd  = f.Get("elec_fakerate_conecorrpt_v_eta_qcd")

printsf.printsf_th2("fakerate_mu_data", muon_fr_data, xvar="conecorrpt", yvar="eta", yvarabs=True)
printsf.printsf_th2("fakerate_el_data", elec_fr_data, xvar="conecorrpt", yvar="eta", yvarabs=True)
printsf.printsf_th2("fakerate_mu_qcd", muon_fr_qcd, xvar="conecorrpt", yvar="eta", yvarabs=True)
printsf.printsf_th2("fakerate_el_qcd", elec_fr_qcd, xvar="conecorrpt", yvar="eta", yvarabs=True)
