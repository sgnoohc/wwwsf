float lepsf_EGammaTightID(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 20.0 && fabs(eta) < -2.0) return 0.806557357311 + isyst * 0.0180196290542;
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
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 500.0 && fabs(eta) < -2.45) return 1.31760430336 + isyst * 0.0182387273858;
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
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.99326056242 + isyst * 0.00299304959529;
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
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 25.0 && fabs(eta) < 0.9) return 1.00160014629 + isyst * 0.00248764356599;
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

float lepsf_EGammaTightPOG_EGammaVVV(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 30.0 && fabs(eta) < 1.0) return 0.980376899242 + isyst * 0.00382222977557;
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
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 30.0 && fabs(eta) < 1.0) return 1.01243853569 + isyst * 0.00415810225751;
    if ((pt) < 40.0 && fabs(eta) < 1.0) return 1.01314127445 + isyst * 0.00220955795264;
    if ((pt) < 50.0 && fabs(eta) < 1.0) return 1.01340222359 + isyst * 0.00153488639642;
    if ((pt) < 2000.0 && fabs(eta) < 1.0) return 1.01799964905 + isyst * 0.0030709442108;
    if ((pt) < 30.0 && fabs(eta) < 1.4442) return 1.01877808571 + isyst * 0.00703133730813;
    if ((pt) < 40.0 && fabs(eta) < 1.4442) return 1.01980721951 + isyst * 0.0037519042278;
    if ((pt) < 50.0 && fabs(eta) < 1.4442) return 1.01803350449 + isyst * 0.00256296687759;
    if ((pt) < 2000.0 && fabs(eta) < 1.4442) return 1.01880669594 + isyst * 0.00514886459673;
    if ((pt) < 30.0 && fabs(eta) < 1.56) return 1.01981687546 + isyst * 0.0211114197957;
    if ((pt) < 40.0 && fabs(eta) < 1.56) return 1.01999163628 + isyst * 0.011510622811;
    if ((pt) < 50.0 && fabs(eta) < 1.56) return 1.01699542999 + isyst * 0.0101067497456;
    if ((pt) < 2000.0 && fabs(eta) < 1.56) return 1.01749408245 + isyst * 0.0163650603465;
    if ((pt) < 30.0 && fabs(eta) < 2.0) return 1.02057921886 + isyst * 0.00800799186292;
    if ((pt) < 40.0 && fabs(eta) < 2.0) return 1.02028226852 + isyst * 0.00417999303835;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 1.01790201664 + isyst * 0.00399646248143;
    if ((pt) < 2000.0 && fabs(eta) < 2.0) return 1.02002465725 + isyst * 0.00574978642275;
    if ((pt) < 30.0 && fabs(eta) < 2.5) return 0.978350162506 + isyst * 0.00889438557043;
    if ((pt) < 40.0 && fabs(eta) < 2.5) return 1.00657308102 + isyst * 0.00531540398448;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 1.00991177559 + isyst * 0.00538696732705;
    if ((pt) < 2000.0 && fabs(eta) < 2.5) return 1.01343548298 + isyst * 0.00990127934385;
    return 1;
}

float lepsf_EGammaVVV_EGammaVVVEleLead(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 30.0 && fabs(eta) < 1.0) return 0.973178207874 + isyst * 0.0040103121406;
    if ((pt) < 40.0 && fabs(eta) < 1.0) return 1.01313531399 + isyst * 0.00222550242336;
    if ((pt) < 50.0 && fabs(eta) < 1.0) return 1.01339864731 + isyst * 0.00175534598448;
    if ((pt) < 2000.0 && fabs(eta) < 1.0) return 1.01799964905 + isyst * 0.0030709442108;
    if ((pt) < 30.0 && fabs(eta) < 1.4442) return 0.969570457935 + isyst * 0.00671661037656;
    if ((pt) < 40.0 && fabs(eta) < 1.4442) return 1.01976215839 + isyst * 0.00374993719158;
    if ((pt) < 50.0 && fabs(eta) < 1.4442) return 1.01803350449 + isyst * 0.00256296687759;
    if ((pt) < 2000.0 && fabs(eta) < 1.4442) return 1.01880669594 + isyst * 0.00514886459673;
    if ((pt) < 30.0 && fabs(eta) < 1.56) return 0.974450111389 + isyst * 0.0203688830732;
    if ((pt) < 40.0 && fabs(eta) < 1.56) return 1.01983559132 + isyst * 0.0115502494729;
    if ((pt) < 50.0 && fabs(eta) < 1.56) return 1.01696801186 + isyst * 0.0101253321368;
    if ((pt) < 2000.0 && fabs(eta) < 1.56) return 1.01749408245 + isyst * 0.0163650603465;
    if ((pt) < 30.0 && fabs(eta) < 2.0) return 0.980933725834 + isyst * 0.00771928797329;
    if ((pt) < 40.0 && fabs(eta) < 2.0) return 1.02049899101 + isyst * 0.00450020303167;
    if ((pt) < 50.0 && fabs(eta) < 2.0) return 1.01789569855 + isyst * 0.00400843010965;
    if ((pt) < 2000.0 && fabs(eta) < 2.0) return 1.01624071598 + isyst * 0.00572845563252;
    if ((pt) < 30.0 && fabs(eta) < 2.5) return 0.932764172554 + isyst * 0.00851596308569;
    if ((pt) < 40.0 && fabs(eta) < 2.5) return 1.00653338432 + isyst * 0.00532100465026;
    if ((pt) < 50.0 && fabs(eta) < 2.5) return 1.00987935066 + isyst * 0.0049538140478;
    if ((pt) < 2000.0 && fabs(eta) < 2.5) return 1.01343548298 + isyst * 0.00990127934385;
    return 1;
}

float lepsf_MuMediumPOG_MuTightVVV(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.972987830639 + isyst * 0.0038003901295;
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
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.999541461468 + isyst * 0.00431553026237;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.997860491276 + isyst * 0.0028927840418;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.997504532337 + isyst * 0.00120918728177;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.996784865856 + isyst * 0.00126254361911;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.996682703495 + isyst * 0.00265837582487;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 0.994662582874 + isyst * 0.00344272367229;
    if ((pt) < 200.0 && fabs(eta) < 0.9) return 0.995876908302 + isyst * 0.0152094641941;
    if ((pt) < 1200.0 && fabs(eta) < 0.9) return 1.00186300278 + isyst * 0.034564004248;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 1.00136160851 + isyst * 0.00764691674305;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 1.00054740906 + isyst * 0.00462958245752;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 1.00397896767 + isyst * 0.00277219834328;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 1.00303781033 + isyst * 0.00237030069092;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 1.00098395348 + isyst * 0.00474342472387;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 1.00059711933 + isyst * 0.0061635578464;
    if ((pt) < 200.0 && fabs(eta) < 1.2) return 0.994088232517 + isyst * 0.027560198074;
    if ((pt) < 1200.0 && fabs(eta) < 1.2) return 0.998805344105 + isyst * 0.0573733280054;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 1.01416134834 + isyst * 0.00357451807376;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 1.01810801029 + isyst * 0.00342957072222;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 1.01771843433 + isyst * 0.00153400246277;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 1.01809024811 + isyst * 0.00156235027236;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 1.01902592182 + isyst * 0.00309096972942;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 1.01623928547 + isyst * 0.00346157064905;
    if ((pt) < 200.0 && fabs(eta) < 2.1) return 0.983312547207 + isyst * 0.0176575075046;
    if ((pt) < 1200.0 && fabs(eta) < 2.1) return 0.948991417885 + isyst * 0.0444214225361;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 1.00432026386 + isyst * 0.00878741411123;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 1.00704360008 + isyst * 0.0165327153848;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 1.00508832932 + isyst * 0.00364856554481;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 1.00839221478 + isyst * 0.00345417641563;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 1.00767874718 + isyst * 0.00678964294352;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 1.00606381893 + isyst * 0.0093887399362;
    if ((pt) < 200.0 && fabs(eta) < 2.4) return 0.988984107971 + isyst * 0.0433369591145;
    if ((pt) < 1200.0 && fabs(eta) < 2.4) return 0.922808051109 + isyst * 0.578778636643;
    return 1;
}

float lepsf_MuTightVVV_MuTightVVVMu17(float pt, float eta, int isyst=0)
{
    if (isyst != 1 && isyst != -1 && isyst != 0)        printf(Form("WARNING - in function=%s, isyst=%d is not recommended!
", __FUNCTION__, isyst));    if ((pt) < 25.0 && fabs(eta) < 0.9) return 0.990568935871 + isyst * 0.00428578853702;
    if ((pt) < 30.0 && fabs(eta) < 0.9) return 0.989429354668 + isyst * 0.00240011944288;
    if ((pt) < 40.0 && fabs(eta) < 0.9) return 0.989176571369 + isyst * 0.00143115699909;
    if ((pt) < 50.0 && fabs(eta) < 0.9) return 0.988689124584 + isyst * 0.00138855122597;
    if ((pt) < 60.0 && fabs(eta) < 0.9) return 0.988338470459 + isyst * 0.00237986913776;
    if ((pt) < 120.0 && fabs(eta) < 0.9) return 0.986210823059 + isyst * 0.00349298818646;
    if ((pt) < 200.0 && fabs(eta) < 0.9) return 0.986462116241 + isyst * 0.0151003314152;
    if ((pt) < 1200.0 && fabs(eta) < 0.9) return 0.992106556892 + isyst * 0.0343044397198;
    if ((pt) < 25.0 && fabs(eta) < 1.2) return 0.979321241379 + isyst * 0.00752118826671;
    if ((pt) < 30.0 && fabs(eta) < 1.2) return 0.979366958141 + isyst * 0.00577754804023;
    if ((pt) < 40.0 && fabs(eta) < 1.2) return 0.984407544136 + isyst * 0.00270720685526;
    if ((pt) < 50.0 && fabs(eta) < 1.2) return 0.98391777277 + isyst * 0.00208542109032;
    if ((pt) < 60.0 && fabs(eta) < 1.2) return 0.982034981251 + isyst * 0.00461454880707;
    if ((pt) < 120.0 && fabs(eta) < 1.2) return 0.981674432755 + isyst * 0.00605804465441;
    if ((pt) < 200.0 && fabs(eta) < 1.2) return 0.967723488808 + isyst * 0.0268672399087;
    if ((pt) < 1200.0 && fabs(eta) < 1.2) return 0.97421169281 + isyst * 0.0566903375968;
    if ((pt) < 25.0 && fabs(eta) < 2.1) return 0.988342583179 + isyst * 0.00426988556524;
    if ((pt) < 30.0 && fabs(eta) < 2.1) return 0.997145831585 + isyst * 0.0033662174878;
    if ((pt) < 40.0 && fabs(eta) < 2.1) return 0.997771382332 + isyst * 0.00150532405478;
    if ((pt) < 50.0 && fabs(eta) < 2.1) return 0.999460279942 + isyst * 0.00131179158031;
    if ((pt) < 60.0 && fabs(eta) < 2.1) return 0.996708571911 + isyst * 0.00308752379284;
    if ((pt) < 120.0 && fabs(eta) < 2.1) return 0.980419993401 + isyst * 0.00400979371536;
    if ((pt) < 200.0 && fabs(eta) < 2.1) return 0.921213328838 + isyst * 0.0174511326533;
    if ((pt) < 1200.0 && fabs(eta) < 2.1) return 0.875039458275 + isyst * 0.0413410183062;
    if ((pt) < 25.0 && fabs(eta) < 2.4) return 0.902593195438 + isyst * 0.0077581711431;
    if ((pt) < 30.0 && fabs(eta) < 2.4) return 0.927266776562 + isyst * 0.00586203706794;
    if ((pt) < 40.0 && fabs(eta) < 2.4) return 0.943869292736 + isyst * 0.00344757297066;
    if ((pt) < 50.0 && fabs(eta) < 2.4) return 0.958442807198 + isyst * 0.00330206264661;
    if ((pt) < 60.0 && fabs(eta) < 2.4) return 0.96275305748 + isyst * 0.00650398673032;
    if ((pt) < 120.0 && fabs(eta) < 2.4) return 0.966543674469 + isyst * 0.00906450612074;
    if ((pt) < 200.0 && fabs(eta) < 2.4) return 0.951920926571 + isyst * 0.0415598878787;
    if ((pt) < 1200.0 && fabs(eta) < 2.4) return 0.870018422604 + isyst * 0.146053352153;
    return 1;
}

