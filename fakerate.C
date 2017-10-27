float fakerate_mu_data(float eta, float conecorrpt, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if (fabs(eta) < 1.2 && (conecorrpt) < 20.0) return 0.18162853637 + isyst * 0.00419139178595;
    if (fabs(eta) < 2.1 && (conecorrpt) < 20.0) return 0.228556342818 + isyst * 0.00643408235926;
    if (fabs(eta) < 2.4 && (conecorrpt) < 20.0) return 0.284501936043 + isyst * 0.0138531422818;
    if (fabs(eta) < 1.2 && (conecorrpt) < 30.0) return 0.0593080016201 + isyst * 0.00429931883058;
    if (fabs(eta) < 2.1 && (conecorrpt) < 30.0) return 0.0812573899031 + isyst * 0.00690133585711;
    if (fabs(eta) < 2.4 && (conecorrpt) < 30.0) return 0.120471940997 + isyst * 0.0154600921933;
    if (fabs(eta) < 1.2 && (conecorrpt) < 50.0) return 0.0502796544514 + isyst * 0.00337692471616;
    if (fabs(eta) < 2.1 && (conecorrpt) < 50.0) return 0.0755524005305 + isyst * 0.00454099610916;
    if (fabs(eta) < 2.4 && (conecorrpt) < 50.0) return 0.102110577821 + isyst * 0.0116371933399;
    if (fabs(eta) < 1.2 && (conecorrpt) < 10000) return 0.0504603068665 + isyst * 0.0223031276198;
    if (fabs(eta) < 2.1 && (conecorrpt) < 10000) return 0.0699800116561 + isyst * 0.0249675245212;
    if (fabs(eta) < 2.4 && (conecorrpt) < 10000) return 0.0699800116561 + isyst * 0.0249675245212;
    return 1;
}

float fakerate_el_data(float eta, float conecorrpt, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if (fabs(eta) < 0.8 && (conecorrpt) < 20.0) return 0.180862610834 + isyst * 0.011780565611;
    if (fabs(eta) < 1.479 && (conecorrpt) < 20.0) return 0.151654211681 + isyst * 0.00866843935974;
    if (fabs(eta) < 2.5 && (conecorrpt) < 20.0) return 0.166856924948 + isyst * 0.0086750832925;
    if (fabs(eta) < 0.8 && (conecorrpt) < 30.0) return 0.133459584075 + isyst * 0.0146960861119;
    if (fabs(eta) < 1.479 && (conecorrpt) < 30.0) return 0.108987284034 + isyst * 0.0112594175795;
    if (fabs(eta) < 2.5 && (conecorrpt) < 30.0) return 0.127048887898 + isyst * 0.0116391553635;
    if (fabs(eta) < 0.8 && (conecorrpt) < 50.0) return 0.115077619378 + isyst * 0.0116121608794;
    if (fabs(eta) < 1.479 && (conecorrpt) < 50.0) return 0.0997162232625 + isyst * 0.0099509146269;
    if (fabs(eta) < 2.5 && (conecorrpt) < 50.0) return 0.106395503788 + isyst * 0.00678263788235;
    if (fabs(eta) < 0.8 && (conecorrpt) < 10000) return 0.0793935587448 + isyst * 0.0340196244843;
    if (fabs(eta) < 1.479 && (conecorrpt) < 10000) return 0.0794240499611 + isyst * 0.0289512048486;
    if (fabs(eta) < 2.5 && (conecorrpt) < 10000) return 0.0995944944707 + isyst * 0.0122391050471;
    return 1;
}

float fakerate_mu_qcd(float eta, float conecorrpt, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if (fabs(eta) < 1.2 && (conecorrpt) < 20.0) return 0.192454320571 + isyst * 0.00435651562103;
    if (fabs(eta) < 2.1 && (conecorrpt) < 20.0) return 0.25212783352 + isyst * 0.00673523309854;
    if (fabs(eta) < 2.4 && (conecorrpt) < 20.0) return 0.299959325364 + isyst * 0.0139496576752;
    if (fabs(eta) < 1.2 && (conecorrpt) < 30.0) return 0.0592032661673 + isyst * 0.00397245526891;
    if (fabs(eta) < 2.1 && (conecorrpt) < 30.0) return 0.109370893274 + isyst * 0.00733365179432;
    if (fabs(eta) < 2.4 && (conecorrpt) < 30.0) return 0.124618041094 + isyst * 0.0126552722177;
    if (fabs(eta) < 1.2 && (conecorrpt) < 50.0) return 0.0455410037998 + isyst * 0.00546544224618;
    if (fabs(eta) < 2.1 && (conecorrpt) < 50.0) return 0.0673590936047 + isyst * 0.00792283130924;
    if (fabs(eta) < 2.4 && (conecorrpt) < 50.0) return 0.067457120855 + isyst * 0.0151418937682;
    if (fabs(eta) < 1.2 && (conecorrpt) < 10000) return 0.0317322626443 + isyst * 0.00831418957152;
    if (fabs(eta) < 2.1 && (conecorrpt) < 10000) return 0.0554220997027 + isyst * 0.0171941451909;
    if (fabs(eta) < 2.4 && (conecorrpt) < 10000) return 0.0583591616584 + isyst * 0.0227115872818;
    return 1;
}

float fakerate_el_qcd(float eta, float conecorrpt, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if (fabs(eta) < 0.8 && (conecorrpt) < 20.0) return 0.230089425906 + isyst * 0.013635548062;
    if (fabs(eta) < 1.479 && (conecorrpt) < 20.0) return 0.187918774855 + isyst * 0.0301966750315;
    if (fabs(eta) < 2.5 && (conecorrpt) < 20.0) return 0.181326427551 + isyst * 0.0229038017929;
    if (fabs(eta) < 0.8 && (conecorrpt) < 30.0) return 0.173060172437 + isyst * 0.0540543730729;
    if (fabs(eta) < 1.479 && (conecorrpt) < 30.0) return 0.127839209154 + isyst * 0.0578526851684;
    if (fabs(eta) < 2.5 && (conecorrpt) < 30.0) return 0.106022264846 + isyst * 0.0311610831766;
    if (fabs(eta) < 0.8 && (conecorrpt) < 50.0) return 0.0515026065715 + isyst * 0.0163129257811;
    if (fabs(eta) < 1.479 && (conecorrpt) < 50.0) return 0.141963824743 + isyst * 0.0705629823265;
    if (fabs(eta) < 2.5 && (conecorrpt) < 50.0) return 0.0987933061792 + isyst * 0.022152759532;
    if (fabs(eta) < 0.8 && (conecorrpt) < 10000) return 0.0854687145457 + isyst * 0.0367682367283;
    if (fabs(eta) < 1.479 && (conecorrpt) < 10000) return 0.101560108062 + isyst * 0.0386388851491;
    if (fabs(eta) < 2.5 && (conecorrpt) < 10000) return 0.0892398734513 + isyst * 0.0199718234062;
    return 1;
}

