# WWW lepton SFs

This repository contains the lepton SFs for the WWW analysis.  
The following commands print out all the SFs to stdout.  
One can pipe them into a file.  

    git clone --recursive git@github.com:sgnoohc/wwwsf
    source scripts/setup.sh
    python sf.py > lepsf.C

For fake rates,

    python fakerate.py > fakerate.C

However, after conecorrpt reaches 120.0 GeV the function cuts off, so please modify them by hand.
