void reco_costheta_0.28_0.47_gaus()
{
//=========Macro generated from canvas: c1_n170/c1_n170
//=========  (Sat Apr  7 18:56:57 2018) by ROOT version6.06/06
   TCanvas *c1_n170 = new TCanvas("c1_n170", "c1_n170",0,0,700,500);
   gStyle->SetOptStat(0);
   c1_n170->Range(-1.3125,-79.93126,1.8125,719.3813);
   c1_n170->SetFillColor(10);
   c1_n170->SetBorderMode(0);
   c1_n170->SetBorderSize(2);
   c1_n170->SetFrameLineWidth(2);
   c1_n170->SetFrameBorderMode(0);
   c1_n170->SetFrameLineWidth(2);
   c1_n170->SetFrameBorderMode(0);
   
   TH1D *h_truth_mom_pre__2 = new TH1D("h_truth_mom_pre__2","",50,-1,1.5);
   h_truth_mom_pre__2->SetBinContent(1,2);
   h_truth_mom_pre__2->SetBinContent(3,5);
   h_truth_mom_pre__2->SetBinContent(4,3);
   h_truth_mom_pre__2->SetBinContent(5,4);
   h_truth_mom_pre__2->SetBinContent(6,3);
   h_truth_mom_pre__2->SetBinContent(7,7);
   h_truth_mom_pre__2->SetBinContent(8,2);
   h_truth_mom_pre__2->SetBinContent(9,10);
   h_truth_mom_pre__2->SetBinContent(10,12);
   h_truth_mom_pre__2->SetBinContent(11,22);
   h_truth_mom_pre__2->SetBinContent(12,25);
   h_truth_mom_pre__2->SetBinContent(13,36);
   h_truth_mom_pre__2->SetBinContent(14,27);
   h_truth_mom_pre__2->SetBinContent(15,25);
   h_truth_mom_pre__2->SetBinContent(16,21);
   h_truth_mom_pre__2->SetBinContent(17,10);
   h_truth_mom_pre__2->SetBinContent(18,7);
   h_truth_mom_pre__2->SetBinContent(19,6);
   h_truth_mom_pre__2->SetBinContent(20,5);
   h_truth_mom_pre__2->SetBinContent(21,6);
   h_truth_mom_pre__2->SetBinContent(22,9);
   h_truth_mom_pre__2->SetBinContent(23,25);
   h_truth_mom_pre__2->SetBinContent(24,50);
   h_truth_mom_pre__2->SetBinContent(25,115);
   h_truth_mom_pre__2->SetBinContent(26,305);
   h_truth_mom_pre__2->SetBinContent(27,456);
   h_truth_mom_pre__2->SetBinContent(28,576);
   h_truth_mom_pre__2->SetBinContent(29,609);
   h_truth_mom_pre__2->SetBinContent(30,434);
   h_truth_mom_pre__2->SetBinContent(31,172);
   h_truth_mom_pre__2->SetBinContent(32,63);
   h_truth_mom_pre__2->SetBinContent(33,32);
   h_truth_mom_pre__2->SetBinContent(34,15);
   h_truth_mom_pre__2->SetBinContent(35,12);
   h_truth_mom_pre__2->SetBinContent(36,18);
   h_truth_mom_pre__2->SetBinContent(37,24);
   h_truth_mom_pre__2->SetBinContent(38,20);
   h_truth_mom_pre__2->SetBinContent(39,16);
   h_truth_mom_pre__2->SetBinContent(40,18);
   h_truth_mom_pre__2->SetEntries(3207);
   h_truth_mom_pre__2->SetStats(0);
   
   TF1 *gaus2 = new TF1("gaus","gaus",-1,1.5);
   gaus2->SetFillColor(10);
   gaus2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gaus2->SetLineColor(ci);
   gaus2->SetLineWidth(2);
   gaus2->SetChisquare(390.0471);
   gaus2->SetNDF(36);
   gaus2->GetXaxis()->SetNdivisions(506);
   gaus2->GetXaxis()->SetLabelFont(42);
   gaus2->GetXaxis()->SetTitleSize(0.055);
   gaus2->GetXaxis()->SetTitleOffset(0.8);
   gaus2->GetXaxis()->SetTitleFont(42);
   gaus2->GetYaxis()->SetNdivisions(506);
   gaus2->GetYaxis()->SetLabelFont(42);
   gaus2->GetYaxis()->SetTitleSize(0.055);
   gaus2->GetYaxis()->SetTitleOffset(0.9);
   gaus2->GetYaxis()->SetTitleFont(42);
   gaus2->SetParameter(0,601.2704);
   gaus2->SetParError(0,14.9331);
   gaus2->SetParLimits(0,0,0);
   gaus2->SetParameter(1,0.3873006);
   gaus2->SetParError(1,0.001769756);
   gaus2->SetParLimits(1,0,0);
   gaus2->SetParameter(2,0.09345253);
   gaus2->SetParError(2,0.001509325);
   gaus2->SetParLimits(2,0,2.458312);
   h_truth_mom_pre__2->GetListOfFunctions()->Add(gaus2);
   h_truth_mom_pre__2->SetLineWidth(2);
   h_truth_mom_pre__2->GetXaxis()->SetTitle("Muon cos(#theta) (Truth) [GeV]");
   h_truth_mom_pre__2->GetXaxis()->SetNdivisions(506);
   h_truth_mom_pre__2->GetXaxis()->SetLabelFont(42);
   h_truth_mom_pre__2->GetXaxis()->SetTitleSize(0.055);
   h_truth_mom_pre__2->GetXaxis()->SetTitleOffset(0.8);
   h_truth_mom_pre__2->GetXaxis()->SetTitleFont(42);
   h_truth_mom_pre__2->GetYaxis()->SetNdivisions(506);
   h_truth_mom_pre__2->GetYaxis()->SetLabelFont(42);
   h_truth_mom_pre__2->GetYaxis()->SetTitleSize(0.055);
   h_truth_mom_pre__2->GetYaxis()->SetTitleOffset(0.9);
   h_truth_mom_pre__2->GetYaxis()->SetTitleFont(42);
   h_truth_mom_pre__2->GetZaxis()->SetNdivisions(506);
   h_truth_mom_pre__2->GetZaxis()->SetLabelFont(42);
   h_truth_mom_pre__2->GetZaxis()->SetTitleSize(0.055);
   h_truth_mom_pre__2->GetZaxis()->SetTitleOffset(0.8);
   h_truth_mom_pre__2->GetZaxis()->SetTitleFont(42);
   h_truth_mom_pre__2->Draw("histo");
   
   TF1 *gaus3 = new TF1("gaus","gaus",-1,1.5);
   gaus3->SetFillColor(10);
   gaus3->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   gaus3->SetLineColor(ci);
   gaus3->SetLineWidth(2);
   gaus3->SetChisquare(390.0471);
   gaus3->SetNDF(36);
   gaus3->GetXaxis()->SetNdivisions(506);
   gaus3->GetXaxis()->SetLabelFont(42);
   gaus3->GetXaxis()->SetTitleSize(0.055);
   gaus3->GetXaxis()->SetTitleOffset(0.8);
   gaus3->GetXaxis()->SetTitleFont(42);
   gaus3->GetYaxis()->SetNdivisions(506);
   gaus3->GetYaxis()->SetLabelFont(42);
   gaus3->GetYaxis()->SetTitleSize(0.055);
   gaus3->GetYaxis()->SetTitleOffset(0.9);
   gaus3->GetYaxis()->SetTitleFont(42);
   gaus3->SetParameter(0,601.2704);
   gaus3->SetParError(0,14.9331);
   gaus3->SetParLimits(0,0,0);
   gaus3->SetParameter(1,0.3873006);
   gaus3->SetParError(1,0.001769756);
   gaus3->SetParLimits(1,0,0);
   gaus3->SetParameter(2,0.09345253);
   gaus3->SetParError(2,0.001509325);
   gaus3->SetParLimits(2,0,2.458312);
   gaus3->Draw("same");
   TLatex *   tex = new TLatex(0.88,0.86,"Reco cos(#theta): 0.28-0.47");
tex->SetNDC();
   tex->SetTextAlign(32);

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
   c1_n170->Modified();
   c1_n170->cd();
   c1_n170->SetSelected(c1_n170);
}
