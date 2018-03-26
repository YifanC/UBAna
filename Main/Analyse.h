/**
 * \file Analyse.h
 *
 * \ingroup Main
 * 
 * \brief Class def header for a class Analyse
 *
 * @author deltutto
 */

/** \addtogroup Main

    @{*/
#ifndef __MAIN_ANALYSE_H__
#define __MAIN_ANALYSE_H__

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <fstream>
#include <math.h>

#include <TRandom1.h>
#include <TSystem.h>
#include <TBrowser.h>
#include <TApplication.h>
#include <TChain.h>
#include "TThread.h"
#include "THStack.h"
#include "TLegend.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TGraph.h"
#include <TString.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TLatex.h>
#include <TCanvas.h>

#include "UBXSecEvent.h"
#include "litefmwk/Base/BootstrapTH1D.h"
#include "litefmwk/Base/PlottingTools.h"
#include "litefmwk/Base/CrossSectionCalculator1D.h"
#include "litefmwk/Base/MigrationMatrix2D.h"
#include "litefmwk/Base/MigrationMatrix4D.h"
#include "litefmwk/Base/CrossSectionCalculator2D.h"
#include "litefmwk/Base/ReweightingPlotter.h"
#include "litefmwk/Base/CovarianceCalculator2D.h"

using namespace Base;

namespace Main {

  /**
     \class Analyse
     User defined class Analyse ... these comments are used to generate
     doxygen documentation!
  */
  class Analyse{
    
  public:
    
    /// Default constructor
    Analyse(){}
    
    /// Default destructor
    ~Analyse(){}

    ///
    void SetBNBCosmicFile(std::string f);
   
    ///
    void SetInTimeCosmicFile(std::string f);

    ///
    void SetBNBONFile(std::string f);

    ///
    void SetEXTBNBFile(std::string f);
 
    ///
    void SetBNBPOT(double v);

    ///
    void SetBNBONTriggers(double v);

    ///
    void SetEXTBNBTriggers(double v);

    ///
    void DoAnalise();

  private:

    bool _calculate_xsec = true;
    bool _do_pm1sigma_plots = false;
    bool _do_reweighting_plots = true;

    std::string mc_bnbcosmic_file_name     = "ubxsecana_output.root";
    std::string mc_intimecosmic_file_name  = "ubxsecana_output.root";
    std::string bnbon_file_name            = "ubxsecana_output.root";
    std::string extbnb_file_name           = "ubxsecana_output.root";
    double bnbon_pot_meas        = -1;
    double bnbon_triggers        = -1;
    double extbnb_triggers       = -1;
    
  };
}

#endif
/** @} */ // end of doxygen group 

