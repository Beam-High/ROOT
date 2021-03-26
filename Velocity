void multigraphpalettecolor()
{
	auto mg = new TMultiGraph();
	auto c1 = new TCanvas("c1", "c1", 700, 700);

	mg->SetTitle("Change of velocity dependent on momentum;GeV/c;");

	double x[12] = { 0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6 };
	double y1[12] = { 299792301.4,299792418.8,299792440.6,299792448.2,299792451.7,299792453.7,299792454.8,299792455.5,299792456.1,299792456.4,299792456.7,299792456.9 };

	TGraph* gr1 = new TGraph(12, x, y1); gr1->SetLineWidth(3); gr1->SetMarkerColor(kRed);

	mg->Add(gr1, "PL");

	mg->Draw("A pmc plc");
}
