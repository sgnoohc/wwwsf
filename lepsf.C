float lepsf_EGammaTightID(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 20.0 && fabs(eta) < -2.0) return 0.806557357311 + isyst * 0.0180196290542;
    if ((pt) < 35.0 && fabs(eta) < -2.0) return 0.88245934248 + isyst * 0.0101198259436;
    if ((pt) < 50.0 && fabs(eta) < -2.0) return 0.918840587139 + isyst * 0.00903908258991;
    if ((pt) < 90.0 && fabs(eta) < -2.0) return 0.940397322178 + isyst * 0.00700136278822;
    if ((pt) < 150.0 && fabs(eta) < -2.0) return 1.05108559132 + isyst * 0.0222742310261;
    if ((pt) < 500.0 && fabs(eta) < -2.0) return 1.05108559132 + isyst * 0.0224317920679;
    if ((pt) < 20.0 && fabs(eta) < -1.566) return 0.828571438789 + isyst * 0.0182790616195;
    if ((pt) < 35.0 && fabs(eta) < -1.566) return 0.927487373352 + isyst * 0.0176260918721;
    if ((pt) < 50.0 && fabs(eta) < -1.566) return 0.966987609863 + isyst * 0.00730306309988;
    if ((pt) < 90.0 && fabs(eta) < -1.566) return 0.980964481831 + isyst * 0.00561477853273;
    if ((pt) < 150.0 && fabs(eta) < -1.566) return 1.00592422485 + isyst * 0.0215595581354;
    if ((pt) < 500.0 && fabs(eta) < -1.566) return 1.00592422485 + isyst * 0.0217223036202;
    if ((pt) < 20.0 && fabs(eta) < -1.444) return 1.03286385536 + isyst * 0.106278969347;
    if ((pt) < 35.0 && fabs(eta) < -1.444) return 1.00759494305 + isyst * 0.109912699864;
    if ((pt) < 50.0 && fabs(eta) < -1.444) return 0.988195598125 + isyst * 0.0166870602707;
    if ((pt) < 90.0 && fabs(eta) < -1.444) return 0.995391726494 + isyst * 0.0240068358257;
    if ((pt) < 150.0 && fabs(eta) < -1.444) return 1.10410559177 + isyst * 0.0495688722273;
    if ((pt) < 500.0 && fabs(eta) < -1.444) return 1.10410559177 + isyst * 0.0496398733023;
    if ((pt) < 20.0 && fabs(eta) < -0.8) return 1.00775194168 + isyst * 0.0272663283234;
    if ((pt) < 35.0 && fabs(eta) < -0.8) return 0.972039461136 + isyst * 0.013293087796;
    if ((pt) < 50.0 && fabs(eta) < -0.8) return 0.974666655064 + isyst * 0.00686833231553;
    if ((pt) < 90.0 && fabs(eta) < -0.8) return 0.971674859524 + isyst * 0.0186735224927;
    if ((pt) < 150.0 && fabs(eta) < -0.8) return 0.98948597908 + isyst * 0.00867577650139;
    if ((pt) < 500.0 && fabs(eta) < -0.8) return 0.98948597908 + isyst * 0.00907265261538;
    if ((pt) < 20.0 && fabs(eta) < 0.0) return 0.94072163105 + isyst * 0.0257409592209;
    if ((pt) < 35.0 && fabs(eta) < 0.0) return 0.952998399734 + isyst * 0.0150816442813;
    if ((pt) < 50.0 && fabs(eta) < 0.0) return 0.953457474709 + isyst * 0.00472981124539;
    if ((pt) < 90.0 && fabs(eta) < 0.0) return 0.953086435795 + isyst * 0.0168857486142;
    if ((pt) < 150.0 && fabs(eta) < 0.0) return 0.975495934486 + isyst * 0.0126070521959;
    if ((pt) < 500.0 && fabs(eta) < 0.0) return 0.975495934486 + isyst * 0.0128833882441;
    if ((pt) < 20.0 && fabs(eta) < 0.8) return 0.945876300335 + isyst * 0.0257409592209;
    if ((pt) < 35.0 && fabs(eta) < 0.8) return 0.981996715069 + isyst * 0.0150816442813;
    if ((pt) < 50.0 && fabs(eta) < 0.8) return 0.979811549187 + isyst * 0.00472981124539;
    if ((pt) < 90.0 && fabs(eta) < 0.8) return 0.977528095245 + isyst * 0.0168857486142;
    if ((pt) < 150.0 && fabs(eta) < 0.8) return 1.0118906498 + isyst * 0.0127268449853;
    if ((pt) < 500.0 && fabs(eta) < 0.8) return 1.0118906498 + isyst * 0.0130006350174;
    if ((pt) < 20.0 && fabs(eta) < 1.444) return 0.989769816399 + isyst * 0.0272663283234;
    if ((pt) < 35.0 && fabs(eta) < 1.444) return 0.975206613541 + isyst * 0.013293087796;
    if ((pt) < 50.0 && fabs(eta) < 1.444) return 0.97463285923 + isyst * 0.00686833231553;
    if ((pt) < 90.0 && fabs(eta) < 1.444) return 0.97893434763 + isyst * 0.0186735224927;
    if ((pt) < 150.0 && fabs(eta) < 1.444) return 1.01072704792 + isyst * 0.00888880187216;
    if ((pt) < 500.0 && fabs(eta) < 1.444) return 1.01072704792 + isyst * 0.00927656867057;
    if ((pt) < 20.0 && fabs(eta) < 1.566) return 1.03398060799 + isyst * 0.106278969347;
    if ((pt) < 35.0 && fabs(eta) < 1.566) return 0.974874377251 + isyst * 0.109912699864;
    if ((pt) < 50.0 && fabs(eta) < 1.566) return 0.966386556625 + isyst * 0.0166870602707;
    if ((pt) < 90.0 && fabs(eta) < 1.566) return 0.979907274246 + isyst * 0.0240068358257;
    if ((pt) < 150.0 && fabs(eta) < 1.566) return 1.00716328621 + isyst * 0.0494349504371;
    if ((pt) < 500.0 && fabs(eta) < 1.566) return 1.00716328621 + isyst * 0.0495061435814;
    if ((pt) < 20.0 && fabs(eta) < 2.0) return 0.827485382557 + isyst * 0.0182790616195;
    if ((pt) < 35.0 && fabs(eta) < 2.0) return 0.908937633038 + isyst * 0.0176260918721;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 0.95782315731 + isyst * 0.00730306309988;
    if ((pt) < 90.0 && fabs(eta) < 2.0) return 0.968553483486 + isyst * 0.00561477853273;
    if ((pt) < 150.0 && fabs(eta) < 2.0) return 0.988262891769 + isyst * 0.0215595581354;
    if ((pt) < 500.0 && fabs(eta) < 2.0) return 0.988262891769 + isyst * 0.0217223036202;
    if ((pt) < 20.0 && fabs(eta) < 2.5) return 0.797014951706 + isyst * 0.0180196290542;
    if ((pt) < 35.0 && fabs(eta) < 2.5) return 0.863321781158 + isyst * 0.0101198259436;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 0.907801389694 + isyst * 0.00903908258991;
    if ((pt) < 90.0 && fabs(eta) < 2.5) return 0.937662363052 + isyst * 0.00700136278822;
    if ((pt) < 150.0 && fabs(eta) < 2.5) return 1.02135682106 + isyst * 0.0222742310261;
    if ((pt) < 500.0 && fabs(eta) < 2.5) return 1.02135682106 + isyst * 0.0224317920679;
    return 1;
}

float lepsf_EGammaReco(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 500.0 && fabs(eta) < -2.45) return 1.31760430336 + isyst * 0.0182387273858;
    if ((pt) < 500.0 && fabs(eta) < -2.4) return 1.11378002167 + isyst * 0.0110667218714;
    if ((pt) < 500.0 && fabs(eta) < -2.3) return 1.02462530136 + isyst * 0.00815834887034;
    if ((pt) < 500.0 && fabs(eta) < -2.2) return 1.013641119 + isyst * 0.00713343470588;
    if ((pt) < 500.0 && fabs(eta) < -2.0) return 1.00727653503 + isyst * 0.00420281345299;
    if ((pt) < 500.0 && fabs(eta) < -1.8) return 0.994818627834 + isyst * 0.00649266791838;
    if ((pt) < 500.0 && fabs(eta) < -1.63) return 0.994786262512 + isyst * 0.00516608222797;
    if ((pt) < 500.0 && fabs(eta) < -1.566) return 0.991631805897 + isyst * 0.00551198189805;
    if ((pt) < 500.0 && fabs(eta) < -1.444) return 0.963128507137 + isyst * 0.026030162586;
    if ((pt) < 500.0 && fabs(eta) < -1.2) return 0.989701330662 + isyst * 0.00359897172237;
    if ((pt) < 500.0 && fabs(eta) < -1.0) return 0.985655725002 + isyst * 0.00506368027448;
    if ((pt) < 500.0 && fabs(eta) < -0.6) return 0.981595098972 + isyst * 0.00331156908452;
    if ((pt) < 500.0 && fabs(eta) < -0.4) return 0.984678268433 + isyst * 0.00612870275792;
    if ((pt) < 500.0 && fabs(eta) < -0.2) return 0.981613874435 + isyst * 0.0063584778335;
    if ((pt) < 500.0 && fabs(eta) < 0.0) return 0.980432569981 + isyst * 0.00530156031977;
    if ((pt) < 500.0 && fabs(eta) < 0.2) return 0.984552025795 + isyst * 0.00530156031977;
    if ((pt) < 500.0 && fabs(eta) < 0.4) return 0.988764047623 + isyst * 0.0063584778335;
    if ((pt) < 500.0 && fabs(eta) < 0.6) return 0.987742602825 + isyst * 0.00612870275792;
    if ((pt) < 500.0 && fabs(eta) < 1.0) return 0.987742602825 + isyst * 0.00331156908452;
    if ((pt) < 500.0 && fabs(eta) < 1.2) return 0.987742602825 + isyst * 0.00506368027448;
    if ((pt) < 500.0 && fabs(eta) < 1.444) return 0.98767966032 + isyst * 0.00359897172237;
    if ((pt) < 500.0 && fabs(eta) < 1.566) return 0.967597782612 + isyst * 0.026030162586;
    if ((pt) < 500.0 && fabs(eta) < 1.63) return 0.989626526833 + isyst * 0.00551198189805;
    if ((pt) < 500.0 && fabs(eta) < 1.8) return 0.992761135101 + isyst * 0.00516608222797;
    if ((pt) < 500.0 && fabs(eta) < 2.0) return 0.991761088371 + isyst * 0.00649266791838;
    if ((pt) < 500.0 && fabs(eta) < 2.2) return 0.99794024229 + isyst * 0.00420281345299;
    if ((pt) < 500.0 && fabs(eta) < 2.3) return 1.00103735924 + isyst * 0.00713343470588;
    if ((pt) < 500.0 && fabs(eta) < 2.4) return 0.989506840706 + isyst * 0.00815834887034;
    if ((pt) < 500.0 && fabs(eta) < 2.45) return 0.970518887043 + isyst * 0.0110667218714;
    if ((pt) < 500.0 && fabs(eta) < 2.5) return 0.906666696072 + isyst * 0.0182387273858;
    return 1;
}

float lepsf_MuonMediumID_PeriodBCDEF(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.99326056242 + isyst * 0.00299304959529;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.993243694305 + isyst * 0.013774752384;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.999212145805 + isyst * 0.0122670982741;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.996031761169 + isyst * 0.000219301615914;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.992393016815 + isyst * 0.000816908857979;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 1.00521028042 + isyst * 0.00191670688622;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 0.987515449524 + isyst * 0.00328181231155;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.984555661678 + isyst * 0.00144660689391;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.989506840706 + isyst * 0.000443537527689;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.991288483143 + isyst * 0.000320477322702;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.990756630898 + isyst * 0.00107803144403;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.990235745907 + isyst * 0.00256092158742;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.992924451828 + isyst * 0.00168451232249;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.991163611412 + isyst * 0.000747527518378;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.993620336056 + isyst * 0.000263569134308;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.995641350746 + isyst * 0.00898828893907;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 0.99265640974 + isyst * 0.000791923382812;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 0.996506989002 + isyst * 0.00192651638706;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.972319483757 + isyst * 0.00281784438243;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.970559298992 + isyst * 0.00149029293773;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.969556510448 + isyst * 0.00063092914525;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.971171498299 + isyst * 0.0417734207699;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.970107495785 + isyst * 0.00226507269067;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.970472455025 + isyst * 0.00527212542888;
    return 1;
}

float lepsf_MuonMediumID_PeriodGH(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 25.0 && fabs(eta) < 0.9) return 1.00160014629 + isyst * 0.00248764356599;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.996136546135 + isyst * 0.0110811851285;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 1.00226068497 + isyst * 0.000461913558683;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.999405801296 + isyst * 0.000193286700103;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.994069099426 + isyst * 0.000606628841237;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 1.00124228001 + isyst * 0.00145716626641;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 1.00103020668 + isyst * 0.00673470115716;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.99916267395 + isyst * 0.0085269708973;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.99788492918 + isyst * 0.000437773546648;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.998400390148 + isyst * 0.000315730882773;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.994010567665 + isyst * 0.00112190091898;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.999541401863 + isyst * 0.0027155142224;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.997374892235 + isyst * 0.0017970830944;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.996894299984 + isyst * 0.000833129881249;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.99773812294 + isyst * 0.000286574846273;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.996386408806 + isyst * 0.000210286445003;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 0.991427123547 + isyst * 0.000915349227664;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 0.995427966118 + isyst * 0.00230696408947;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.983996212482 + isyst * 0.00273030602568;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.97872120142 + isyst * 0.0014648021749;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.973877429962 + isyst * 0.000728211424762;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.974616527557 + isyst * 0.000733926213164;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.970205843449 + isyst * 0.00236731018144;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.971422970295 + isyst * 0.0105361766494;
    return 1;
}

float lepsf_MuonReco(float eta, float nothing, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if (fabs(eta) < 0.2 && fabs(nothing) < 1000000) return 0.996996496582 + isyst * 7.27173381037e-05;
    if (fabs(eta) < 0.4 && fabs(nothing) < 1000000) return 0.99771175854 + isyst * 8.20493871853e-05;
    if (fabs(eta) < 0.6 && fabs(nothing) < 1000000) return 0.99807762769 + isyst * 7.15881829855e-05;
    if (fabs(eta) < 0.8 && fabs(nothing) < 1000000) return 0.997803871488 + isyst * 7.4350908861e-05;
    if (fabs(eta) < 1.0 && fabs(nothing) < 1000000) return 0.99797080488 + isyst * 0.000106158649569;
    if (fabs(eta) < 1.2 && fabs(nothing) < 1000000) return 0.997147740951 + isyst * 0.000186466741555;
    if (fabs(eta) < 1.4 && fabs(nothing) < 1000000) return 0.996227437404 + isyst * 0.000181630468798;
    if (fabs(eta) < 1.6 && fabs(nothing) < 1000000) return 0.995478609224 + isyst * 0.00017062499716;
    if (fabs(eta) < 1.8 && fabs(nothing) < 1000000) return 0.995780818567 + isyst * 0.000176732421664;
    if (fabs(eta) < 2.0 && fabs(nothing) < 1000000) return 0.99389185437 + isyst * 0.000234784307893;
    if (fabs(eta) < 2.2 && fabs(nothing) < 1000000) return 0.992942696013 + isyst * 0.000330644022311;
    if (fabs(eta) < 2.4 && fabs(nothing) < 1000000) return 0.987313312455 + isyst * 0.000859346400986;
    return 1;
}

float lepsf_EGammaTightPOG_EGammaVVV(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 30.0 && fabs(eta) < 1.0) return 0.980376899242 + isyst * 0.00382222977557;
    if ((pt) < 40.0 && fabs(eta) < 1.0) return 0.981454670429 + isyst * 0.00193882357048;
    if ((pt) < 50.0 && fabs(eta) < 1.0) return 0.980952382088 + isyst * 0.00163532483243;
    if ((pt) < 2000.0 && fabs(eta) < 1.0) return 0.976341068745 + isyst * 0.00282505650216;
    if ((pt) < 30.0 && fabs(eta) < 1.4442) return 0.945449829102 + isyst * 0.00616297079806;
    if ((pt) < 40.0 && fabs(eta) < 1.4442) return 0.94911891222 + isyst * 0.00332032789849;
    if ((pt) < 50.0 && fabs(eta) < 1.4442) return 0.95356208086 + isyst * 0.00292671435923;
    if ((pt) < 2000.0 && fabs(eta) < 1.4442) return 0.949157774448 + isyst * 0.00457991622718;
    if ((pt) < 30.0 && fabs(eta) < 1.56) return 0.938438951969 + isyst * 0.0179865730823;
    if ((pt) < 40.0 && fabs(eta) < 1.56) return 0.941834270954 + isyst * 0.00994399032801;
    if ((pt) < 50.0 && fabs(eta) < 1.56) return 0.947787821293 + isyst * 0.00809667245743;
    if ((pt) < 2000.0 && fabs(eta) < 1.56) return 0.952665507793 + isyst * 0.0144871613152;
    if ((pt) < 30.0 && fabs(eta) < 2.0) return 0.963943779469 + isyst * 0.00702015595817;
    if ((pt) < 40.0 && fabs(eta) < 2.0) return 0.971829116344 + isyst * 0.00401011091053;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 0.975824117661 + isyst * 0.00357086745336;
    if ((pt) < 2000.0 && fabs(eta) < 2.0) return 0.980078279972 + isyst * 0.0062819436647;
    if ((pt) < 30.0 && fabs(eta) < 2.5) return 0.984203636646 + isyst * 0.0080419549299;
    if ((pt) < 40.0 && fabs(eta) < 2.5) return 0.998542606831 + isyst * 0.00478520093589;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 1.00013875961 + isyst * 0.0048532423643;
    if ((pt) < 2000.0 && fabs(eta) < 2.5) return 1.00487089157 + isyst * 0.00900235705955;
    return 1;
}

float lepsf_EGammaVVV_EGammaVVVEle12(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 30.0 && fabs(eta) < 1.0) return 0.938784837723 + isyst * 0.00219590521361;
    if ((pt) < 40.0 && fabs(eta) < 1.0) return 0.956399559975 + isyst * 0.00127861103515;
    if ((pt) < 50.0 && fabs(eta) < 1.0) return 0.962966561317 + isyst * 0.000316125299188;
    if ((pt) < 2000.0 && fabs(eta) < 1.0) return 0.967466413975 + isyst * 0.00155382971572;
    if ((pt) < 30.0 && fabs(eta) < 1.4442) return 0.94966250658 + isyst * 0.00368355725231;
    if ((pt) < 40.0 && fabs(eta) < 1.4442) return 0.96033769846 + isyst * 0.00197332068038;
    if ((pt) < 50.0 && fabs(eta) < 1.4442) return 0.965217530727 + isyst * 0.000220183866521;
    if ((pt) < 2000.0 && fabs(eta) < 1.4442) return 0.969266951084 + isyst * 0.00265256114334;
    if ((pt) < 30.0 && fabs(eta) < 1.56) return 0.957857549191 + isyst * 0.0115744391104;
    if ((pt) < 40.0 && fabs(eta) < 1.56) return 0.962614357471 + isyst * 0.0059518655469;
    if ((pt) < 50.0 && fabs(eta) < 1.56) return 0.964548945427 + isyst * 0.0055577892749;
    if ((pt) < 2000.0 && fabs(eta) < 1.56) return 0.962951600552 + isyst * 0.00883849432663;
    if ((pt) < 30.0 && fabs(eta) < 2.0) return 0.958219587803 + isyst * 0.00428889366748;
    if ((pt) < 40.0 && fabs(eta) < 2.0) return 0.96611481905 + isyst * 0.00169359181774;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 0.971387922764 + isyst * 0.00208029227053;
    if ((pt) < 2000.0 && fabs(eta) < 2.0) return 0.974559724331 + isyst * 1.84578668625e-05;
    if ((pt) < 30.0 && fabs(eta) < 2.5) return 0.910284698009 + isyst * 0.00477846357209;
    if ((pt) < 40.0 && fabs(eta) < 2.5) return 0.947666943073 + isyst * 0.00277335535449;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 0.955771327019 + isyst * 0.00289434846743;
    if ((pt) < 2000.0 && fabs(eta) < 2.5) return 0.962957322598 + isyst * 0.00532928187002;
    return 1;
}

float lepsf_EGammaVVV_EGammaVVVEleLead(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 30.0 && fabs(eta) < 1.0) return 0.902300655842 + isyst * 0.00213228896962;
    if ((pt) < 40.0 && fabs(eta) < 1.0) return 0.956393837929 + isyst * 0.00130303273575;
    if ((pt) < 50.0 && fabs(eta) < 1.0) return 0.962963223457 + isyst * 0.000868854723185;
    if ((pt) < 2000.0 && fabs(eta) < 1.0) return 0.967466413975 + isyst * 0.00155382971572;
    if ((pt) < 30.0 && fabs(eta) < 1.4442) return 0.903473079205 + isyst * 0.0035448160487;
    if ((pt) < 40.0 && fabs(eta) < 1.4442) return 0.960295259953 + isyst * 0.00197019492648;
    if ((pt) < 50.0 && fabs(eta) < 1.4442) return 0.965217530727 + isyst * 0.000220183866521;
    if ((pt) < 2000.0 && fabs(eta) < 1.4442) return 0.969266951084 + isyst * 0.00265256114334;
    if ((pt) < 30.0 && fabs(eta) < 1.56) return 0.914313673973 + isyst * 0.0113559311569;
    if ((pt) < 40.0 && fabs(eta) < 1.56) return 0.962467074394 + isyst * 0.00602194977727;
    if ((pt) < 50.0 && fabs(eta) < 1.56) return 0.964522898197 + isyst * 0.00558842549423;
    if ((pt) < 2000.0 && fabs(eta) < 1.56) return 0.962951600552 + isyst * 0.00883849432663;
    if ((pt) < 30.0 && fabs(eta) < 2.0) return 0.920680880547 + isyst * 0.00415683064104;
    if ((pt) < 40.0 && fabs(eta) < 2.0) return 0.966320037842 + isyst * 0.00231408855426;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 0.971381902695 + isyst * 0.00210118701395;
    if ((pt) < 2000.0 && fabs(eta) < 2.0) return 0.970944464207 + isyst * 1.80491030395e-05;
    if ((pt) < 30.0 && fabs(eta) < 2.5) return 0.867845416069 + isyst * 0.00461339431639;
    if ((pt) < 40.0 && fabs(eta) < 2.5) return 0.947629570961 + isyst * 0.00278310457802;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 0.955740690231 + isyst * 0.00208964389036;
    if ((pt) < 2000.0 && fabs(eta) < 2.5) return 0.962957322598 + isyst * 0.00532928187002;
    return 1;
}

float lepsf_MuMediumPOG_MuTightVVV(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.972987830639 + isyst * 0.0038003901295;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.980633199215 + isyst * 0.00260697870217;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.986259222031 + isyst * 0.00133423658569;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.989767193794 + isyst * 0.00124355006164;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.990144252777 + isyst * 0.00253156629733;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 0.992544472218 + isyst * 0.00331781595267;
    if ((pt) < 200.0 && fabs(eta) < 0.9) return 1.00607073307 + isyst * 0.0149094139022;
    if ((pt) < 1200.0 && fabs(eta) < 0.9) return 1.00708353519 + isyst * 0.0335569509038;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 0.982158899307 + isyst * 0.00740547808971;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.99262791872 + isyst * 0.00511323464457;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.994507312775 + isyst * 0.00258035645753;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.994486868382 + isyst * 0.00198296279702;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.995231330395 + isyst * 0.00452383601426;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.996162414551 + isyst * 0.00598093468074;
    if ((pt) < 200.0 && fabs(eta) < 1.2) return 0.998247504234 + isyst * 0.0277592866625;
    if ((pt) < 1200.0 && fabs(eta) < 1.2) return 1.00434410572 + isyst * 0.0576382502384;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.992021918297 + isyst * 0.00412251574796;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.999400854111 + isyst * 0.00313541238303;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.999857544899 + isyst * 0.00174861771899;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.999814629555 + isyst * 0.00147727821042;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 1.00330460072 + isyst * 0.00294343817454;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 1.00755393505 + isyst * 0.00406308933367;
    if ((pt) < 200.0 && fabs(eta) < 2.1) return 1.01337754726 + isyst * 0.0191509926106;
    if ((pt) < 1200.0 && fabs(eta) < 2.1) return 1.02070629597 + isyst * 0.0465072322835;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.969161331654 + isyst * 0.00705886719455;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.975010037422 + isyst * 0.00640140774693;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.990625023842 + isyst * 0.00328420129413;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.994753956795 + isyst * 0.00324093861002;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.992071866989 + isyst * 0.00636933685301;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.994121670723 + isyst * 0.0088715023098;
    if ((pt) < 200.0 && fabs(eta) < 2.4) return 0.994795560837 + isyst * 0.0453345991072;
    if ((pt) < 1200.0 && fabs(eta) < 2.4) return 1.01750481129 + isyst * 0.499230818045;
    return 1;
}

float lepsf_MuTightVVV_MuTightVVVMu8(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.933527767658 + isyst * 0.00252632647732;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.933456897736 + isyst * 0.00152941158904;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.934123814106 + isyst * 5.7151570156e-05;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.933176159859 + isyst * 0.000533302705251;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.931691288948 + isyst * 0.00134394291184;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 0.929507613182 + isyst * 0.00175162047452;
    if ((pt) < 200.0 && fabs(eta) < 0.9) return 0.924368977547 + isyst * 0.00746803644143;
    if ((pt) < 1200.0 && fabs(eta) < 0.9) return 0.910157442093 + isyst * 0.0167671085273;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 0.96690428257 + isyst * 0.00463995182995;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.968839883804 + isyst * 0.000296189435009;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.968176484108 + isyst * 0.00147301227187;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.967356085777 + isyst * 0.0012252910266;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.966672122478 + isyst * 0.00253712385559;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.965913832188 + isyst * 0.00324173670128;
    if ((pt) < 200.0 && fabs(eta) < 1.2) return 0.962421000004 + isyst * 0.0145629366561;
    if ((pt) < 1200.0 && fabs(eta) < 1.2) return 0.961861371994 + isyst * 0.0236944487724;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.961845993996 + isyst * 0.00034315722064;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.962982833385 + isyst * 0.00180503994187;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.962533831596 + isyst * 0.000139178337978;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.963077664375 + isyst * 0.0008053328847;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 0.963417887688 + isyst * 0.00160263939342;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 0.962129116058 + isyst * 0.000363735247895;
    if ((pt) < 200.0 && fabs(eta) < 2.1) return 0.935746133327 + isyst * 0.0082700842047;
    if ((pt) < 1200.0 && fabs(eta) < 2.1) return 0.89957177639 + isyst * 0.0245530433342;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.944805383682 + isyst * 0.00573946175886;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.948861658573 + isyst * 0.0148002473209;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.949180960655 + isyst * 0.00205940031199;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.949977576733 + isyst * 0.00186501847954;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.947516798973 + isyst * 0.00371860765466;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.948109149933 + isyst * 0.00521480251546;
    if ((pt) < 200.0 && fabs(eta) < 2.4) return 0.926202654839 + isyst * 0.0195444637705;
    if ((pt) < 1200.0 && fabs(eta) < 2.4) return 0.865132570267 + isyst * 0.532614728793;
    return 1;
}

float lepsf_MuTightVVV_MuTightVVVMu17(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)
        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!\n", __FUNCTION__, isyst));
    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.922722399235 + isyst * 0.00250782468408;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.923307836056 + isyst * 0.000366351007182;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.924030900002 + isyst * 0.000730909831923;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.923241138458 + isyst * 0.000768592171557;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.921180009842 + isyst * 0.00080159636303;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 0.918352901936 + isyst * 0.00185961188485;
    if ((pt) < 200.0 && fabs(eta) < 0.9) return 0.910844266415 + isyst * 0.00739344058835;
    if ((pt) < 1200.0 && fabs(eta) < 0.9) return 0.894463002682 + isyst * 0.016525458852;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 0.942260980606 + isyst * 0.00458041035964;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.945485949516 + isyst * 0.00346783935787;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.946832001209 + isyst * 0.00141910674422;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.946245908737 + isyst * 0.000673513472744;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.945586264133 + isyst * 0.00240884834276;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.945138394833 + isyst * 0.00318644606928;
    if ((pt) < 200.0 && fabs(eta) < 1.2) return 0.933813333511 + isyst * 0.014169270918;
    if ((pt) < 1200.0 && fabs(eta) < 1.2) return 0.931742787361 + isyst * 0.0243677246898;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.934685409069 + isyst * 0.00235550744943;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.940949559212 + isyst * 0.0017736671693;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.941943407059 + isyst * 0.000142803887399;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.943855106831 + isyst * 0.000241549432239;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 0.94069480896 + isyst * 0.00167134522243;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 0.926266431808 + isyst * 0.00212335629489;
    if ((pt) < 200.0 && fabs(eta) < 2.1) return 0.873467862606 + isyst * 0.00932832611851;
    if ((pt) < 1200.0 && fabs(eta) < 2.1) return 0.823928773403 + isyst * 0.0230251207295;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.837569534779 + isyst * 0.00488000441924;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.866438448429 + isyst * 0.00319838676876;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.885224223137 + isyst * 0.00194770815806;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.898686885834 + isyst * 0.00179089574024;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.901396632195 + isyst * 0.00355735499739;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.906494557858 + isyst * 0.00504503993108;
    if ((pt) < 200.0 && fabs(eta) < 2.4) return 0.884702563286 + isyst * 0.0182467487213;
    if ((pt) < 1200.0 && fabs(eta) < 2.4) return 0.80960047245 + isyst * 0.0950186278378;
    return 1;
}

