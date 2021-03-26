void multigraphpalettecolor()
{
	auto mg = new TMultiGraph();
	auto c1 = new TCanvas("c1", "c1", 700, 700);
	auto legend = new TLegend(0.1, 0.7, 0.48, 0.9);

	mg->SetTitle("Radius and Energy Versus GeV/c;GeV/c;");

	double x[12] = { 0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6 };
	double y1[12] = { 0.8,1.6,2.402,3.201,3.992,4.833,5.602,6.338,7.271,7.923,8.790,9.556 };
	double y2[12] = { 1.23,2.46,3.7,4.93,6.17,7.41,8.64,9.88,11.11,12.34,13.58,14.81 };

	TGraph* gr1 = new TGraph(12, x, y1); gr1->SetLineWidth(3); gr1->SetMarkerColor(kRed);
	TGraph* gr2 = new TGraph(12, x, y2); gr2->SetLineWidth(3); gr2->SetMarkerColor(kBlue);

	legend->AddEntry(gr1, "Energy", "l");
	legend->AddEntry(gr2, "Radius", "l");

	mg->Add(gr1, "PL");
	mg->Add(gr2, "*L");

	mg->Draw("A pmc plc");
	legend->Draw();
}
