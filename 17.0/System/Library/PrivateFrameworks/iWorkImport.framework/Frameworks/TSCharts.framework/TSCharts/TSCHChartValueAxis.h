@class NSNumber;

@interface TSCHChartValueAxis : TSCHChartAxis

@property (readonly, nonatomic) NSNumber *userMin;
@property (readonly, nonatomic) NSNumber *userMax;

+ (id)axisForInfo:(id)a0;
+ (unsigned char)styleOwnerPathType;

- (id)defaultProperties;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)a0;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (BOOL)editableFormatForValueStrings;
- (id)g_genericToSpecificPropertyMap;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x0; id x1; })labelEnumeratorPair;
- (id)p_GetGenericToValuePropertyMap;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromFixedMinValue:(double)a0 fixedMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromFixedNegativeMinValue:(double)a0 positiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromFixedPositiveMinValue:(double)a0 positiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromMinValue:(double)a0 maxValue:(double)a1 userValues:(long long)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromNegativeMinValue:(double)a0 fixedPositiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromNegativeMinValue:(double)a0 positiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromPositiveMinValue:(double)a0 fixedPositiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_axisDescFromPositiveMinValue:(double)a0 positiveMaxValue:(double)a1 spreadRanges:(const struct { double x0; double x1; } *)a2;
- (double)p_calculateAxisDeltaFromSpread:(double)a0 spreadRanges:(const struct { double x0; double x1; } *)a1;
- (struct { double x0; double x1; double x2; unsigned long long x3; })p_calculateAxisDescFromMinValue:(double)a0 maxValue:(double)a1 userValues:(long long)a2;
- (id)p_computeMajorGridlines:(long long)a0 analysis:(id)a1;
- (id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)a0 forHorizChart:(BOOL)a1;
- (void)p_includeZeroWithMinValue:(double *)a0 maxValue:(double *)a1 userValues:(long long)a2;
- (int)specificPropertyForGeneric:(int)a0;
- (BOOL)supportsAxisValueLabels;
- (BOOL)supportsNegativeStyle;
- (BOOL)supportsReferenceLines;
- (void)updateModelAxisAnalysis:(id)a0;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)a0 axisID:(id)a1 analysis:(id)a2;
- (void)updateModelMinMaxForTrendLineOnSeries:(id)a0 axisID:(id)a1 analysis:(id)a2;
- (double)validateUserMaxForDouble:(double)a0;
- (double)validateUserMinForDouble:(double)a0;

@end
