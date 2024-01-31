@interface TSCHChartDonutBodyLayoutItem : TSCHChartRadialBodyLayoutItem

- (id)knobsWithRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 startAngle:(double)a2 midAngle:(double)a3 endAngle:(double)a4;
- (BOOL)layoutSpacePointIsInChartBody:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPath { } *)newElementPathWithPercentage:(double)a0 radius:(double)a1 center:(struct CGPoint { double x0; double x1; })a2 startAngle:(double)a3 midAngle:(double)a4 endAngle:(double)a5 withInnerRadius:(id)a6;

@end
