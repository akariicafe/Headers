@class HKGraphSeries, NSString, NSDictionary, UIColor, HKInteractiveChartDataFormatter, HKDisplayType;

@interface HKInteractiveChartDisplayType : HKDisplayType

@property (readonly, nonatomic) HKGraphSeries *mainGraphSeries;
@property (readonly, nonatomic) NSString *specifiedDisplayName;
@property (readonly, nonatomic) NSString *specifiedUnitName;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *specifiedValueFormatter;
@property (retain, nonatomic) NSDictionary *seriesForTimeScopeMapping;
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) HKDisplayType *baseDisplayType;

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGraphSeries:(id)a0 baseDisplayType:(id)a1 valueFormatter:(id)a2 dataTypeCode:(long long)a3;
- (id)initWithGraphSeries:(id)a0 displayName:(id)a1 unitName:(id)a2 valueFormatter:(id)a3 dataTypeCode:(long long)a4;
- (id)_initWithDisplayName:(id)a0 unitDisplayNameOverrides:(id)a1 localizationTableOverride:(id)a2 chartingRules:(id)a3 unitName:(id)a4 valueFormatter:(id)a5 dataTypeCode:(long long)a6 baseDisplayType:(id)a7 mainGraphSeries:(id)a8 seriesForTimeScopeMapping:(id)a9;
- (long long)_internalDisplayTypeIdentifier;
- (id)graphSeriesForTimeScope:(long long)a0;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)a0;
- (id)initWithBaseDisplayType:(id)a0 valueFormatter:(id)a1 dataTypeCode:(long long)a2 seriesForTimeScopeMapping:(id)a3;
- (id)initWithGraphSeries:(id)a0 baseDisplayType:(id)a1 dataTypeCode:(long long)a2;
- (id)unitNameForValue:(id)a0 unitPreferenceController:(id)a1;

@end
