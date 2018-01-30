/*
 * @file DefaultWhistle.h
 *
 * Default data for the whistle recognition (in case no configuration file is found).
 * This is based on the whistle used for the German Open ..., 2013, 2014.
 *
 * @author Dennis Schuethe
 * @author <a href="mailto:tlaue@uni-bremen.de">Tim Laue</a>
 */

#pragma once

fftw_complex fftCmpData[] = {{-7.194061,-0.000000},
  {-0.824490,-4.600194}, {0.146753,0.337949}, {-1.282048,-0.904744}, {-1.696935,0.165430}, {-1.611053,-4.190703}, {4.928722,-0.357986}, {-1.302292,5.301855}, {-5.132373,0.025904}, {-2.750231,-2.112395},
  {-2.892888,-3.277677}, {2.396484,-4.747830}, {1.107123,3.121502}, {-4.375111,-3.246518}, {2.679925,-2.769456}, {-0.746023,-1.751641}, {4.852569,-2.008437}, {0.584489,4.539177}, {-2.279778,-0.265758},
  {0.013250,1.024752}, {-4.576643,1.188803}, {-3.389735,-5.277552}, {1.371580,-3.281126}, {1.168762,-3.040494}, {2.849634,1.146062}, {-3.389824,-0.124379}, {0.329328,-2.841318}, {-2.147304,-1.763953},
  {0.746762,-6.088717}, {4.481145,-3.153100}, {3.301904,0.180968}, {1.879433,-1.746649}, {4.469921,1.420542}, {-0.611144,-0.085515}, {6.377732,0.176230}, {-0.529978,6.749938}, {-1.773292,1.578416},
  {-5.465738,2.734822}, {-4.107535,-6.323843}, {2.494778,-3.376365}, {1.504449,-0.561748}, {-1.406392,-0.320751}, {-0.119272,-4.138419}, {2.149170,-2.797498}, {4.378304,-1.434008}, {0.138711,3.228950},
  {-1.849933,-4.455740}, {5.572976,-1.928216}, {1.598610,3.227911}, {-3.653092,0.403946}, {-1.687029,-7.393581}, {7.989884,-6.432225}, {9.978284,3.557755}, {0.147654,8.897382}, {-5.924294,0.506809},
  {-2.114649,-3.919028}, {0.844863,-6.466567}, {7.254751,-4.120318}, {5.651724,1.440041}, {3.743303,0.154398}, {6.563879,1.700418}, {3.118461,6.780024}, {-1.949475,3.274809}, {-0.156754,0.776479},
  {0.655240,0.580959}, {0.396804,3.096673}, {-5.308863,-0.760754}, {2.052089,-7.634994}, {7.694864,-0.519995}, {3.573082,3.938075}, {-0.514382,0.881733}, {5.317690,-1.212177}, {2.216393,7.865781},
  {-7.425598,-0.873033}, {3.192673,-10.465485}, {15.595607,-1.846755}, {8.865936,14.324193}, {-6.366097,6.900967}, {2.159944,-1.485850}, {3.217390,5.262027}, {0.942461,3.366747}, {2.533620,5.160525},
  {-0.816634,6.631134}, {-2.479638,3.599822}, {0.320163,3.729129}, {-3.961709,7.901773}, {-11.445720,-0.807615}, {0.357205,-12.441723}, {14.732834,1.392841}, {-1.077265,15.007087}, {-10.208707,-3.084772},
  {9.609860,-6.454796}, {9.701788,12.944989}, {-6.669374,13.926727}, {-9.834107,1.469407}, {-0.556973,-0.174805}, {-5.276809,5.330349}, {-4.025375,-5.916026}, {8.825761,3.806299}, {-6.024978,13.314756},
  {-10.325016,0.151753}, {-3.998267,1.740798}, {-12.471972,0.990470}, {-9.093372,-13.459484}, {7.253272,-13.909226}, {14.871316,0.082841}, {5.050702,10.413320}, {1.754349,5.695304}, {-0.071311,14.592055},
  {-15.675937,6.649258}, {-5.339063,-5.404015}, {-1.946669,3.765941}, {-9.526068,0.277554}, {-2.763691,-5.923159}, {0.311718,0.945291}, {-2.888376,0.257449}, {-1.851685,2.975691}, {-7.633172,1.275490},
  {-6.076803,-2.333143}, {-5.304573,-6.492213}, {4.535109,-3.919620}, {-3.199780,4.934257}, {-4.733215,-6.438026}, {7.329443,0.797598}, {-6.627545,12.033661}, {-14.625666,-4.450429}, {-2.030743,-4.502864},
  {-12.788887,-0.996230}, {-8.518140,-19.280946}, {9.556014,-13.885820}, {7.541598,-2.595272}, {4.377080,-2.362508}, {4.264596,-1.678617}, {6.277263,-1.905455}, {6.740919,5.614190}, {-1.767795,3.002816},
  {7.666572,1.192722}, {0.534407,15.722455}, {-11.138446,5.913909}, {-7.511160,5.217721}, {-18.957097,-1.462702}, {-3.873952,-17.748195}, {7.534758,0.996133}, {-9.694156,3.815286}, {-8.420312,-6.797126},
  {-8.505110,-8.081556}, {-2.184312,-19.635042}, {16.523772,-9.462117}, {3.646888,8.434681}, {-6.775497,-6.015816}, {6.154293,-7.866855}, {2.705061,0.329521}, {-1.160725,-5.370058}, {5.037848,-8.282965},
  {9.452424,-4.629127}, {11.272578,1.663185}, {3.560438,5.817856}, {5.573987,-1.238276}, {7.431029,9.579360}, {-2.225242,3.097794}, {9.569162,6.873576}, {-7.249487,16.928092}, {-11.133846,-0.839118},
  {-2.054756,1.288391}, {-8.386034,1.324325}, {-2.232193,-6.137100}, {0.365409,4.608055}, {-10.789603,-2.740240}, {3.679952,-6.541144}, {-3.542012,5.778632}, {-8.455357,-7.179697}, {2.354102,-8.664946},
  {6.586728,-2.474752}, {3.170167,4.674165}, {-2.651586,2.901834}, {-1.594917,0.654546}, {-1.820306,4.631441}, {-12.270146,3.511644}, {-11.534535,-11.314324}, {0.672063,-12.967005}, {6.306910,-8.541325},
  {9.066754,0.316232}, {-0.872355,6.159431}, {-5.587621,-3.531789}, {2.637255,-3.793142}, {-3.218720,-0.300346}, {1.936516,-10.218105}, {9.999035,3.326124}, {-5.415199,4.195805}, {0.168650,-4.741176},
  {-0.785202,0.658233}, {-0.613722,-6.999175}, {8.943622,-3.831942}, {11.289869,6.388231}, {-1.109489,19.289817}, {-19.616426,4.936873}, {-6.514997,-7.605266}, {-8.580011,1.044519}, {-11.465760,-14.302659},
  {6.369275,-11.256156}, {-0.997705,-3.369164}, {4.711116,-10.102639}, {5.991412,0.148502}, {4.179988,-1.777515}, {0.721898,8.039652}, {-11.724861,-5.067070}, {4.627418,-11.060043}, {5.445838,-0.766256},
  {2.866194,2.543389}, {-6.968179,2.906457}, {-6.751694,-11.938551}, {10.226863,-9.299752}, {1.014738,5.561881}, {-3.996086,-12.625547}, {15.559962,-1.945462}, {-5.633049,5.312864}, {3.533841,-11.726319},
  {5.905017,2.238616}, {1.368214,-6.659780}, {9.464941,-0.366921}, {2.001064,-1.272945}, {10.443184,-3.422676}, {11.124647,6.067865}, {4.105278,12.185563}, {-7.168874,5.243542}, {3.668087,-3.476569},
  {3.385992,10.847698}, {-9.591496,2.479345}, {1.485165,-5.323973}, {4.223493,4.338777}, {-1.511987,3.477417}, {2.083278,4.735540}, {-6.889928,9.096458}, {-9.277483,-1.726604}, {-4.247673,-2.602358},
  {-1.655947,-2.914416}, {-3.138977,0.849219}, {-2.809322,-3.223400}, {-5.460185,2.110232}, {-7.936749,-12.927923}, {11.248572,-5.889984}, {-1.231290,5.205834}, {-2.127248,-4.510665}, {3.973511,-0.416025},
  {-3.365388,5.973516}, {-8.378859,-5.054429}, {1.284260,-2.499590}, {-9.680090,-0.818431}, {-5.100324,-14.382136}, {5.737314,-10.845054}, {5.611510,-5.859034}, {9.731415,-4.260950}, {4.035202,7.807060},
  {-6.243690,-4.897377}, {7.668434,-5.103727}, {2.676705,1.789988}, {-0.247853,0.599009}, {1.256615,-6.289075}, {6.071799,6.063517}, {-11.342764,-5.954910}, {13.874955,-9.088502}, {-0.242222,4.912255},
  {8.704243,-5.129887}, {0.535820,8.125102}, {3.336076,-4.242506}, {2.810255,7.325245}, {0.242456,3.055102}, {-10.579249,5.311254}, {-0.111721,-14.443000}, {4.188837,5.761433}, {-3.159159,-9.981025},
  {11.143908,1.815833}, {0.450761,1.865124}, {1.697138,6.229946}, {-4.988756,-3.164033}, {3.844892,1.676969}, {-0.793129,-3.487638}, {7.086551,10.758852}, {-18.249016,0.416452}, {6.783836,-9.718062},
  {-5.037328,4.927644}, {0.886462,-7.886228}, {-0.929065,1.116335}, {2.732126,-4.499490}, {-3.231885,2.059853}, {4.285233,-8.650914}, {2.356788,7.752834}, {-1.834053,-4.503436}, {-1.150387,9.018462},
  {-14.098395,-12.270241}, {12.990536,-9.075088}, {1.690641,3.753998}, {0.927338,2.126341}, {-8.930333,-3.907065}, {7.799929,-10.678075}, {3.068494,2.813279}, {5.833992,-3.921720}, {1.279085,9.525345},
  {-6.666138,-4.796300}, {2.839851,-0.799982}, {-4.064178,-5.717713}, {9.576917,-4.634574}, {1.087099,5.767950}, {-2.904068,-1.129893}, {-2.060021,-6.014831}, {9.184930,-6.371614}, {5.351014,6.285421},
  {-0.254165,1.199883}, {-1.232128,2.540081}, {-0.977663,-5.242813}, {5.667539,1.699706}, {-2.999815,0.192060}, {4.849788,-2.249629}, {-0.037137,4.903309}, {-3.121727,-1.551005}, {-0.149705,-3.970716},
  {7.154190,-3.747846}, {4.818661,9.543916}, {-8.592830,1.878282}, {0.992013,-3.702623}, {-1.901949,-0.485305}, {4.770209,-2.447092}, {-2.796069,6.185579}, {-2.195358,-6.401757}, {2.870840,2.970014},
  {-3.428159,-2.286971}, {0.831972,0.213013}, {-0.952467,-4.913826}, {6.027123,4.436007}, {-9.110059,1.316281}, {2.057312,-5.251722}, {-3.173129,0.838112}, {0.951355,-4.744156}, {-2.374028,0.504097},
  {0.572484,-7.156595}, {2.569832,1.552262}, {-3.456026,-3.755342}, {1.936395,-4.969779}, {4.273793,-4.998812}, {6.915980,3.510385}, {-4.750026,2.296825}, {1.149780,-4.341319}, {-0.971288,-0.842024},
  {4.412093,-5.816844}, {3.369697,5.218222}, {-3.704937,-2.443670}, {2.351639,-1.895443}, {0.123770,-3.096483}, {5.022002,-1.856195}, {3.737726,1.413298}, {0.913010,5.079996}, {-5.038266,-0.657563},
  {1.186100,-2.745745}, {-0.418066,-1.192176}, {2.253528,-1.181645}, {-0.959994,0.870304}, {-1.050375,-2.205126}, {-0.036362,-3.134121}, {2.588184,-3.133981}, {3.502835,-0.813103}, {1.926678,1.781253},
  {-0.748526,-0.186621}, {0.844207,-1.039111}, {1.895440,-0.789373}, {0.235884,3.235610}, {-4.134100,-2.749998}, {2.730270,-2.366687}, {-1.682103,-1.212435}, {3.109540,-3.859281}, {1.785208,0.518688},
  {1.479135,-1.659495}, {2.850612,-0.441187}, {2.712355,1.793927}, {0.311575,2.014058}, {-0.264407,3.502919}, {-6.310836,0.213659}, {0.003087,-5.398516}, {1.350346,0.862642}, {-3.254147,0.033769},
  {-4.269417,-4.835875}, {1.947314,-8.761109}, {7.633157,-3.501202}, {5.616883,2.666641}, {0.553423,3.407332}, {-1.375507,0.664099}, {0.051598,-1.324768}, {0.790847,0.590870}, {-0.738305,-0.500972},
  {0.281547,1.171373}, {-5.285458,-0.110480}, {-2.972346,-7.716060}, {5.295223,-7.820419}, {8.796321,0.482155}, {2.140845,5.716798}, {-4.067278,1.793812}, {-0.715014,-5.565087}, {6.216071,-0.241994},
  {0.761212,4.069769}, {-1.333840,2.736237}, {-4.966492,1.350870}, {-5.169001,-4.698576}, {1.780415,-7.795187}, {5.575173,-0.582120}, {1.078987,0.998816}, {-0.348359,2.186273}, {-4.829006,-4.028053},
  {6.636310,-5.998364}, {4.245531,5.996305}, {-4.517708,2.517434}, {-2.585153,-2.707118}, {-0.570307,-1.838863}, {-1.013523,-2.612556}, {0.140285,-2.339340}, {-0.328200,-3.301812}, {1.961369,-3.395322},
  {2.614174,-1.692551}, {0.571321,-0.814373}, {3.413365,-4.494740}, {5.919574,4.607165}, {-5.035563,2.086331}, {1.442831,-3.790234}, {1.078526,2.797179}, {-5.191793,-0.111694}, {-1.564184,-7.606222},
  {5.079161,-3.279846}, {2.777993,-0.850903}, {2.514826,1.812628}, {-2.301106,-1.725599}, {5.325060,-3.147541}, {3.310122,4.568576}, {-2.383206,3.706027}, {-3.845359,-0.580474}, {-2.113843,-1.271877},
  {-3.398263,-3.734820}, {0.557166,-5.843796}, {4.768469,-4.392144}, {4.029178,4.192493}, {-6.690140,-0.831111}, {1.974080,-9.521525}, {9.837510,-2.901428}, {7.130566,8.469931}, {-6.268064,6.412999},
  {-3.649276,-2.120181}, {-2.982941,-1.349630}, {-1.413069,-5.302975}, {4.119395,-3.357041}, {1.518559,3.015946}, {-3.645346,-1.403008}, {-0.935277,-3.644131}, {2.175522,-8.127702}, {12.968776,1.619667},
  {-2.336488,12.173512}, {-8.949318,-1.852683}, {0.371557,-5.327352}, {0.734534,0.588592}, {-1.284754,-2.411848}, {0.903822,1.520121}, {-6.086071,-1.990389}, {0.546306,-5.677019}, {-0.714265,-3.157366},
  {2.458610,-6.400256}, {7.315318,-1.785455}, {2.463164,6.114403}, {-4.637979,-1.580058}, {4.947034,-1.227434}, {-2.665724,6.121895}, {-7.862752,-2.513346}, {-0.354651,-8.480364}, {4.061181,0.853569},
  {-6.618016,-1.389056}, {-0.367013,-9.154809}, {4.839023,-8.019741}, {11.743668,-0.897299}, {3.568155,8.067516}, {-3.041083,4.662395}, {-4.307706,-0.766415}, {-0.615519,0.223171}, {-5.537916,-1.754338},
  {1.271297,-3.161834}, {-5.957268,1.691840}, {-6.419604,-9.149718}, {-0.225950,-11.947007}, {12.505351,-12.878622}, {17.071681,10.035511}, {-9.733132,12.569548}, {-5.829662,-9.399866}, {4.163323,-0.785982},
  {-0.017043,-2.519530}, {4.487191,5.552874}, {-12.962170,4.664705}, {-8.357347,-12.254128}, {1.499114,-10.289119}, {2.947380,-8.700863}, {9.527761,-7.407135}, {8.962940,5.261802}, {-5.055101,3.736959},
  {-2.101103,-10.384538}, {15.777876,-3.162056}, {-0.881416,16.167983}, {-9.649267,-5.497422}, {-0.387656,1.560448}, {-10.202792,-12.098801}, {14.049428,-9.560609}, {1.808146,5.712519}, {-1.328004,-4.238052},
  {3.770980,-3.937408}, {1.808601,-0.914472}, {6.093671,-7.910112}, {13.949531,8.771076}, {-6.029621,11.922595}, {-9.425900,0.283271}, {-2.076878,-7.638337}, {-0.516235,3.684357}, {-7.849411,-10.712614},
  {8.319971,-2.833611}, {-3.894982,-5.736164}, {12.079639,-2.167230}, {-3.304938,2.330885}, {8.905426,-2.458918}, {-1.460703,8.056176}, {0.632449,-0.187164}, {-0.825525,8.178747}, {-11.847633,7.814097},
  {-17.889052,-8.059348}, {-6.253248,-14.308177}, {2.243677,-20.455559}, {18.289930,-0.072435}, {-8.215826,3.677609}, {2.016751,-11.938385}, {8.497225,-7.334965}, {14.322994,8.689173}, {-10.331506,6.868952},
  {6.844820,0.865200}, {-21.875533,16.630832}, {-20.546464,-30.580581}, {17.877492,-14.021139}, {-5.116472,-1.623291}, {13.517418,-17.694170}, {-0.114339,16.116468}, {-9.574427,-34.919723}, {44.328806,3.677204},
  {-9.531689,17.163358}, {9.744016,1.420890}, {-11.853900,9.250503}, {-0.989014,-0.055689}, {-21.138662,-9.473468}, {21.693707,-20.683960}, {0.208118,15.946641}, {-2.452646,-8.631425}, {-3.786381,-1.740834},
  {6.201304,-15.158597}, {14.772353,-2.618771}, {16.197133,15.962790}, {-21.065591,11.616047}, {10.507241,-15.275857}, {1.622119,29.482994}, {-34.995173,1.432530}, {-13.727367,-29.435185}, {13.408498,-14.774512},
  {2.711440,-5.912270}, {6.837015,-0.301303}, {-6.184763,-18.503960}, {40.822102,0.390604}, {-18.097137,27.797765}, {8.836053,-22.165472}, {16.336260,29.281150}, {-20.223623,25.974539}, {-37.922822,-4.384086},
  {1.389385,-14.387662}, {-24.782735,7.418733}, {-12.287107,-9.794996}, {-68.104027,-13.334572}, {12.183219,-128.860349}, {115.625788,12.697196}, {-16.737108,62.184720}, {-19.382764,-13.319565}, {-9.969818,9.136652},
  {-25.037173,-34.810604}, {24.289648,-11.435729}, {-10.492660,-12.161590}, {11.799323,12.253856}, {-60.411430,-41.535000}, {61.026360,-44.641641}, {-35.783255,-27.150095}, {148.176718,-54.152493}, {-43.674076,157.393327},
  {-47.041447,-124.848251}, {70.781504,35.635627}, {-1.021398,-24.863090}, {12.802120,63.705609}, {-46.545970,-54.103956}, {11.193907,19.713566}, {-33.704818,-123.224566}, {155.796441,2.439016}, {-3.607315,25.070263},
  {102.250191,42.712859}, {-62.839754,92.807321}, {-25.965179,-35.125274}, {26.110351,-27.305255}, {71.128161,65.286002}, {-87.704097,61.232112}, {-3.703238,-45.764891}, {-9.949241,21.253768}, {0.945549,-18.087692},
  {0.066453,15.502364}, {-3.363545,1.635309}, {-6.728592,-0.153396}, {19.808240,14.847427}, {-29.016296,29.838603}, {-9.141066,5.880556}, {-44.863285,16.772734}, {-13.152484,-15.299596}, {-54.188105,14.183271},
  {-22.972420,-65.875400}, {6.097263,9.419847}, {-45.403990,-39.038258}, {28.116861,-29.812519}, {-23.528735,14.518301}, {-26.994697,-36.132327}, {-16.965558,-14.738456}, {-38.406405,-54.026269}, {9.024187,-56.399970},
  {3.022817,-53.674416}, {35.269263,-30.416059}, {-30.871879,-35.202381}, {48.006952,-100.686182}, {57.086053,-4.423125}, {21.749208,-49.546132}, {60.431027,-26.606091}, {54.668297,-43.031652}, {106.836089,19.994846},
  {3.176275,38.645283}, {64.887966,-31.841007}, {47.507992,77.040379}, {-13.610421,-27.455299}, {123.114327,26.002920}, {-8.715183,115.672919}, {8.084712,18.804368}, {-16.906439,147.090281}, {-200.497643,10.977481},
  {-37.723742,-133.607972}, {-13.991289,-26.110829}, {-43.405226,-134.362489}, {124.846924,-129.588842}, {158.769379,8.529537}, {76.753318,122.317019}, {-90.800597,53.564770}, {4.696363,-100.361438}, {92.926257,8.620992},
  {14.270972,18.674244}, {69.554877,1.214002}, {17.639797,92.417726}, {-60.157382,-20.871239}, {86.242943,-36.780232}, {32.158142,99.870642}, {-67.029803,12.189762}, {15.705454,-55.554776}, {72.677555,14.850758},
  {0.263682,70.487498}, {-54.276678,-18.101449}, {58.075825,-76.140197}, {124.817130,56.172120}, {-2.870202,126.036472}, {-62.492140,38.114821}, {-29.348205,-1.302651}, {-13.070840,-5.731357}, {1.749517,-9.655489},
  {17.466220,1.452702}, {11.519319,20.205308}, {-7.671884,15.714809}, {2.285731,-2.168140}, {8.309053,15.063768}, {-2.079488,-1.582970}, {28.907066,13.403164}, {-7.965880,34.559102}, {-6.608275,1.760805},
  {4.096610,14.163834}, {-1.397550,9.459053}, {4.060252,17.209973}, {-13.838259,17.635037}, {-7.644253,-3.903394}, {6.324263,9.949966}, {-6.797489,6.318770}, {10.095728,7.979758}, {-4.269901,23.358463},
  {-13.726397,18.070028}, {-31.947764,4.961450}, {-12.708098,-26.738755}, {15.493497,-14.692002}, {19.749872,5.462960}, {6.988549,16.771136}, {1.218281,15.880411}, {-9.450958,15.423710}, {-9.343201,5.789462},
  {-10.379359,4.212685}, {-7.505597,-2.283424}, {-0.988581,-7.364489}, {16.780111,7.436182}, {-13.299085,26.989706}, {-22.550607,-5.714889}, {-6.667257,-9.096054}, {3.480507,-11.190952}, {8.342564,7.710489},
  {-11.542136,5.582272}, {-4.477135,-10.847804}, {7.512746,-1.412664}, {-5.064971,1.047926}, {5.817938,-12.611541}, {17.082327,3.442174}, {9.840184,14.551410}, {-5.316233,19.114752}, {-11.761642,3.984721},
  {-6.707485,3.959607}, {-10.860788,-4.244438}, {3.057595,-5.387603}, {-2.641173,4.548911}, {-3.649555,-5.903989}, {4.686353,1.985033}, {-6.930852,0.821382}, {4.528028,-4.638617}, {-4.030818,9.017187},
  {-10.162749,-11.464129}, {11.455285,-6.997319}, {0.079162,5.197015}, {0.781209,-6.867408}, {7.236016,1.610234}, {2.070288,-0.566471}, {7.822598,6.835776}, {-10.431503,5.402355}, {3.643899,-11.710423},
  {9.714177,9.190861}, {-7.913963,5.852347}, {-4.473426,-2.957607}, {-5.258667,-7.471928}, {10.448970,-16.129682}, {20.945534,8.378944}, {-2.971238,11.577501}, {4.745190,0.299246}, {-0.397769,12.316976},
  {-7.458624,-0.504835}, {1.224577,-0.114099}, {-3.033732,0.108268}, {2.572047,-4.201565}, {4.881063,3.249946}, {-0.375263,3.847222}, {-4.166754,4.199404}, {-8.495559,-9.715589}, {15.348124,-10.923351},
  {9.314907,12.453013}, {-3.175639,4.316370}, {-1.513078,2.607015}, {-2.551288,-4.488579}, {8.060735,-1.911055}, {0.984868,4.893576}, {3.245849,-3.909860}, {8.748338,7.973247}, {-6.355802,5.283127},
  {4.232342,-2.901024}, {0.705908,9.083560}, {-6.461527,-1.246740}, {2.286273,-3.133187}, {1.835753,-0.211876}, {4.520232,-0.784665}, {3.490548,5.366991}, {-2.027140,1.221329}, {3.652269,0.922213},
  {-1.217636,3.770436}, {-0.057635,-0.605448}, {-0.899242,0.200327}, {2.470445,-4.972602}, {8.923078,1.013211}, {3.517848,7.545250}, {-2.091134,2.905132}, {2.514897,0.252153}, {2.708235,3.482794},
  {1.764077,5.222815}, {-3.309721,4.681321}, {-1.660213,-0.054559}, {-0.959747,1.394231}, {-1.592359,-0.491121}, {-0.504151,-2.910964}, {5.247289,-3.103644}, {5.850980,2.630355}, {4.688704,4.371540},
  {1.534847,8.545616}, {-6.290400,6.241763}, {-6.393614,-4.375280}, {5.755535,-4.971835}, {4.826865,5.268269}, {-0.808050,4.189781}, {-1.653659,2.079164}, {-0.553301,0.185548}, {0.377416,0.820634},
  {0.510838,0.743444}, {0.990278,0.502442}, {2.965419,2.332418}, {-1.156149,5.756964}, {-5.158071,0.348277}, {-0.032615,-3.849272}, {3.240413,0.172465}, {1.622508,0.574133}, {4.441057,2.988008},
  {-1.121597,7.214254}, {-5.183700,2.067955}, {-2.886776,-1.159658}, {-1.775971,-1.433517}, {0.465622,-3.055098}, {1.975916,0.626360}, {-0.382824,-1.670928}, {4.458995,0.615175}, {-1.291711,2.912528},
  {0.446654,-1.415670}, {1.573897,0.683319}, {1.596419,1.615493}, {-1.236321,2.496950}, {-2.602582,-1.314243}, {2.607867,-4.774286}, {6.604173,3.750067}, {-2.624562,3.703353}, {1.322169,0.371237},
  {-2.281671,2.036984}, {1.175514,-1.241609}, {-1.165273,2.414138}, {-0.634717,-1.998550}, {0.626745,0.307611}, {-0.390542,-0.796097}, {0.367018,-2.676552}, {5.072229,-1.321869}, {2.506661,2.647336},
  {2.506630,2.553788}, {-1.785293,3.440827}, {0.083829,-0.164416}, {-2.096203,1.807095}, {-0.298224,-3.473442}, {2.747788,-0.166469}, {2.054903,1.051784}, {-0.196930,1.615367}, {0.935991,0.154897},
  {-1.093853,0.344807}, {3.351093,-1.414357}, {-0.553737,3.773660}, {0.706447,-2.961396}, {2.500959,4.027943}, {-2.693236,0.058676}, {0.357857,-0.323420}, {-0.263470,-1.634461}, {2.249978,-1.238479},
  {3.445780,0.254168}, {1.307655,3.538099}, {-0.291649,1.204727}, {-1.991485,2.726210}, {-3.151663,-4.102248}, {3.999893,-2.657072}, {2.260043,0.782231}, {1.233263,0.664891}, {1.460064,-0.388001},
  {2.199368,1.320195}, {0.800822,1.385623}, {-0.545353,1.599468}, {-0.576351,-2.004688}, {2.975022,-0.369172}, {1.158670,1.005131}, {0.909059,0.471547}, {1.374935,-0.341984}, {2.234557,1.438298},
  {0.221262,1.343842}, {0.502156,0.784599}, {-0.278943,0.055452}, {1.347691,-1.091112}, {2.367197,0.924106}, {0.082023,1.106936}, {1.544531,-0.619262}, {1.269770,1.544327}, {0.712880,-0.766574},
  {3.731396,0.877631}, {1.513419,4.355533}, {-3.159693,2.343622}, {-0.426165,-2.289086}, {1.205037,0.901969}, {-0.401502,-0.869486}, {1.589629,-0.690163}, {2.324511,-0.596654}, {2.523350,2.328223},
  {-0.100056,1.172232}, {0.994819,0.903405}, {0.903308,0.589733}, {0.507010,2.642768}, {-1.956977,-0.938178}, {2.958247,-0.178608}, {-0.853625,1.870424}, {0.697647,-1.190067}, {0.924639,0.607911},
  {1.404906,-0.405932}, {1.800690,1.487719}, {0.134976,1.454025}, {0.203998,-0.024802}, {2.077350,1.139855}, {-1.148594,2.834142}, {-1.616809,-1.534707}, {1.994035,-0.697115}, {0.745513,1.217280},
  {0.024102,0.547877}, {-0.283306,-0.175355}, {1.421035,-0.821233}, {1.082338,1.757641}, {-1.073764,0.095130}, {0.171800,-0.688660}, {0.561891,-1.888178}, {3.665187,-0.037359}, {0.323459,2.193068},
  {0.562880,-0.473287}, {0.802660,1.005205}, {0.005517,-0.822889}, {2.627992,-0.518837}, {1.691646,1.934442}, {0.695649,0.696879}, {1.223507,2.623627}, {-2.884444,0.564844}, {2.019850,-2.043115},
  {0.170508,2.759750}, {-1.221968,-2.268232}, {3.407059,-0.298793}, {0.576727,2.419264}, {-0.967039,0.053987}, {1.088393,-0.212219}, {-0.874453,0.638841}, {0.924136,-2.303582}, {1.808622,0.699906},
  {1.585279,-0.783758}, {1.989239,3.072043}, {-2.346184,0.344177}, {0.715080,-0.792428}, {-0.359432,-1.056739}, {2.467386,-0.929628}, {0.378929,0.715841}, {1.347405,-1.210067}, {1.741489,0.558973},
  {0.517436,-0.057345}, {1.811914,-1.633165}, {4.604284,0.924702}, {0.929642,3.850030}, {-0.252636,0.554720}, {1.341547,1.799859}, {-1.386203,1.708331}, {-0.495608,-0.772269}, {0.426489,0.056379},
  {-0.041395,-0.625815}, {1.451841,-1.096121}, {2.124255,0.815600}, {-0.212344,0.692674}, {1.971409,-1.243255}, {2.184791,2.185767}, {0.251859,0.991898}, {0.823070,1.893728}, {-1.345485,1.040112},
  {-0.622718,-0.712278}, {1.114279,-1.056228}, {0.964150,1.012524}, {0.301960,-0.728101}, {1.585407,1.257946}, {-0.902806,-0.259524}, {2.131374,-0.216126}, {-0.095659,1.114182}, {0.977864,-0.472703},
  {0.843485,1.138258}, {-0.279425,0.540960}, {0.034981,-0.515168}, {0.798576,-0.020134}, {0.098621,-0.295886}, {0.865925,-0.958780}, {2.182911,-0.764635}, {2.206488,1.382370}, {1.255281,1.162705},
  {0.129768,2.938439}, {-1.969404,-0.872093}, {2.096197,0.321576}, {-1.658453,0.925949}, {0.619569,-1.283141}, {0.126408,-0.167430}, {1.333014,-0.369245}, {-0.419466,0.215462}, {0.924393,-1.540588},
  {1.501498,-1.041525}, {3.755934,0.329380}, {0.495018,3.030335}, {0.005853,0.389323}, {-0.274567,1.268431}, {-0.630996,-0.430835}, {-0.111559,-0.701683}, {1.142111,-1.296209}, {1.488229,0.037326},
  {1.210904,0.226571}, {0.801123,0.115138}, {1.657184,0.620984}, {-0.380379,0.851847}, {1.323163,-0.788768}, {0.799903,1.222980}, {0.771001,0.114132}, {-0.207658,1.302150}, {-0.180674,-1.404412},
  {1.747540,-0.040250}, {0.927056,0.389353}, {0.719194,0.556882}, {0.723647,0.173609}, {0.719038,0.320506}, {1.590245,0.781602}, {-0.966407,2.104733}, {-0.588332,-1.735431}, {1.558233,0.549107},
  {-0.139222,0.007405}, {0.723722,0.371326}, {0.022149,-0.530937}, {1.776931,0.564858}, {-0.576664,1.412602}, {-0.766684,-0.145771}, {-0.763571,-0.981403}, {0.684079,-1.912255}, {2.210280,-0.868490},
  {1.643005,1.271086}, {-0.394684,0.422638}, {0.630286,-0.433770}, {0.322318,-0.332727}, {1.689784,-0.638201}, {1.069901,1.566458}, {-1.080353,-0.000000}};
