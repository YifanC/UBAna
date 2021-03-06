import sys, os, math

from ROOT import gROOT
gROOT.ProcessLine(".x " + os.environ['MYSW_DIR'] + "/Utils/rootlogon.C")

from ROOT import Main

analyser = Main.Analyse()

analyser.SetInTimeCosmicFile  ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_bnbcosmic_mcc8.7_test6.root") # Just a placeholder


# v2
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v2.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v2.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v2.root") # After Neutrino
analyser.SetBNBPOT(4.221e+19)    
analyser.SetBNBONTriggers(9356198)
analyser.SetEXTBNBTriggers(60523225)

# v3
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v3.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v3.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v3.root") # After Neutrino
analyser.SetBNBPOT(4.195e+19)    
analyser.SetBNBONTriggers(9296107)
analyser.SetEXTBNBTriggers(60306830)

# v4
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v4.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v4.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v4.root") # After Neutrino
analyser.SetBNBPOT(4.178e+19)    
analyser.SetBNBONTriggers(9258619)
analyser.SetEXTBNBTriggers(58071044)

# v5
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v5.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v5.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v5.root") # After Neutrino
analyser.SetBNBPOT(4.246e+19)    
analyser.SetBNBONTriggers(9413078)
analyser.SetEXTBNBTriggers(58284673)

# v11
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v11.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v11.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v11.root") # After Neutrino
analyser.SetBNBPOT(4.238e+19)    
analyser.SetBNBONTriggers(9394515)
analyser.SetEXTBNBTriggers(60329062)

# v12 and 11
analyser.SetBNBCosmicFile     ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_mc_bnbcosmic_ubcodev06_26_01_18__v12.root") # After Neutrino
analyser.SetBNBONFile         ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_bnbon_ubcodev06_26_01_18__v11.root") # After Neutrino    
analyser.SetEXTBNBFile        ("/Users/deltutto/CCInclusiveFiles/Output/ubxsecana_output_data_extbnb_ubcodev06_26_01_18__v12.root") # After Neutrino
analyser.SetBNBPOT(4.238e+19)    
analyser.SetBNBONTriggers(9394515)
analyser.SetEXTBNBTriggers(60777191)

analyser.SetPrefix("cv")
analyser.SetFluxCorrectionWeight(1.028)

extra_unc = math.sqrt(0.02*0.02 + 0.06*0.06) # POT counting, beam window, cosmics (overlay)
analyser.SetExtraUncertainty(extra_unc)

analyser.DoGenieSystematics(False)
analyser.ImportGenieSystematics(False)

analyser.DoFluxSystematics(False)
analyser.ImportFluxSystematics(False)
analyser.SetExtraFluxUncertainty(0.)
#analyser.SetTargetFluxSystematic("FluxUnisim");
#analyser.SetTargetFluxSystematic("kminus_PrimaryHadronNormalizat");
#analyser.SetTargetFluxSystematic("kplus_PrimaryHadronFeynmanScal");
#analyser.SetTargetFluxSystematic("kzero_PrimaryHadronSanfordWang");
#analyser.SetTargetFluxSystematic("piminus_PrimaryHadronSWCentral");
#analyser.SetTargetFluxSystematic("piplus_PrimaryHadronSWCentralS");
analyser.SetTargetFluxSystematic("total");

analyser.DoAnalise();

raw_input("Please press enter to exit.")