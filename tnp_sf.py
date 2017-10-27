#!/bin/env python

import os
import sys
import ROOT as r
import printsf

tnpdirs=["/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/ElectronID_WWW/electron/EGammaTightPOG_EGammaVVV/",
"/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/ElectronID_WWW/electron/EGammaVVV_EGammaVVVEle12/",
"/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/ElectronID_WWW/electron/EGammaVVV_EGammaVVVEleLead/",
"/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/MuonID_WWW/muon/MuMediumPOG_MuTightVVV/",
"/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/MuonID_WWW/muon/MuTightVVV_MuTightVVVMu8/",
"/home/users/phchang/public_html/phys/tnp/CMSSW_7_4_2/src/TagAndProbe/Analysis/plots/MuonID_WWW/muon/MuTightVVV_MuTightVVVMu17/",
]

def tnp_sf(tnpdir, usedataeff=False):

    tnpdir = os.path.normpath(tnpdir)
    idtype = os.path.basename(tnpdir)

    lepflav = "mu"
    if tnpdir.find("electron") != -1:
        lepflav = "el"

    funcname = "lepsf_{}".format(idtype)
    filename = "{}.C".format(funcname)

    data_fname = os.path.join(tnpdir, "data_single_{}_eff.root".format(lepflav))
    dy_fname = os.path.join(tnpdir, "dy_full_eff.root")

    data_root = r.TFile(data_fname)
    dy_root = r.TFile(dy_fname)

    data_den = data_root.Get("h_den_pt_vs_eta")
    data_num = data_root.Get("h_num_pt_vs_eta")
    dy_den = dy_root.Get("h_den_pt_vs_eta")
    dy_num = dy_root.Get("h_num_pt_vs_eta")

    data_eff = data_den.Clone("ratio_data")
    dy_eff = dy_den.Clone("ratio_dy")

    data_eff.Divide(data_num, data_den)
    dy_eff.Divide(dy_num, dy_den)

    sf = data_eff.Clone("sf")
    sf.Divide(data_eff, dy_eff)

    if usedataeff:
        printsf.printsf_th2(funcname, data_eff, xvarabs=True)
    else:
        printsf.printsf_th2(funcname, sf, xvarabs=True)

for tnpdir in tnpdirs:
    if tnpdir.find("Mu8") != -1 or tnpdir.find("Mu17") != -1 or tnpdir.find("Ele12") != -1 or tnpdir.find("EleLead") != -1:
        tnp_sf(tnpdir, True)
    else:
        tnp_sf(tnpdir)

#eof
