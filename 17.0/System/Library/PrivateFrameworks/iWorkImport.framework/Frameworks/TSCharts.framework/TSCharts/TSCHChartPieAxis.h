@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)a0;
- (id)formattedStringForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (BOOL)supportsAxisValueLabels;
- (BOOL)supportsFormattedStringForInvalidValue;
- (double)totalForGroupIndex:(unsigned long long)a0;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;

@end
