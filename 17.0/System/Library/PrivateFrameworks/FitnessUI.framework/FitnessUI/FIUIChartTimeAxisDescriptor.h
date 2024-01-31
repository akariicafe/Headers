@class UIFont, NSString, NSArray, NSMutableDictionary, NSDateComponents, NSMutableArray, FIUIChartDateAnchorRule, UIColor;

@interface FIUIChartTimeAxisDescriptor : NSObject <FIUIChartAxisDescriptor> {
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableArray *_cachedAxisLabelColors;
    NSMutableDictionary *_hourMinuteFormatters;
    NSMutableDictionary *_hourFormatters;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_dayFormatters;
    NSMutableDictionary *_monthFormatters;
    NSMutableDictionary *_yearFormatters;
}

@property (nonatomic) unsigned long long textStyle;
@property (retain, nonatomic) NSDateComponents *axisSpacing;
@property (retain, nonatomic) FIUIChartDateAnchorRule *anchorRule;
@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) BOOL forceAMPMOnFirstLabel;
@property (nonatomic) BOOL useMinMaxLabelPlacement;
@property (nonatomic) unsigned long long subTextStyle;
@property (retain, nonatomic) NSDateComponents *subAxisSpacing;
@property (retain, nonatomic) FIUIChartDateAnchorRule *subAnchorRule;
@property (nonatomic) unsigned long long subTimeInterval;
@property (nonatomic) BOOL generateSubAxisDescriptorOnlyForNoonMidnight;
@property (nonatomic) BOOL subAxisCapitalize;
@property (nonatomic) double subAxisVerticalPadding;
@property (retain, nonatomic) UIFont *labelAMPMFont;
@property (retain, nonatomic) id minValue;
@property (retain, nonatomic) id maxValue;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) UIColor *unhighlightedLabelColor;
@property (retain, nonatomic) UIColor *highlightedLabelColor;
@property (nonatomic) double axisDescriptorPadding;
@property (retain, nonatomic) id highlightedValue;
@property (nonatomic) unsigned long long labelAlignment;
@property (nonatomic) unsigned long long subLabelAlignment;
@property (retain, nonatomic) UIFont *subLabelFont;
@property (retain, nonatomic) UIColor *selectedLabelColor;
@property (retain, nonatomic) UIColor *highlightedSubLabelColor;
@property (retain, nonatomic) UIColor *unhighlightedSubLabelColor;
@property (nonatomic) double subAxisDescriptorPadding;
@property (nonatomic) BOOL hideClippedLabels;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x0; double x1; } shadowOffset;
@property (nonatomic) double shadowBlur;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_spacingIntervalFromAxisSpacing:(id)a0;

- (id)init;
- (void)invalidateCaches;
- (void).cxx_destruct;
- (void)_clearCache;
- (BOOL)_validateProperties;
- (void)_generateAxisLabels;
- (id)monthFormatter:(unsigned long long)a0;
- (void)_clearFormatters;
- (void)_generateAxisSubLabels;
- (long long)_hourComponentFromDate:(id)a0;
- (id)_hourMinuteFormatterWithTextStyle:(unsigned long long)a0;
- (id)_labelAtIndex:(unsigned long long)a0;
- (id)_labelsForSpacingInterval:(unsigned long long)a0 withSpacing:(id)a1 textStyle:(unsigned long long)a2;
- (id)_newSubLabelFromDate:(id)a0 withTimeInterval:(unsigned long long)a1 textStyle:(unsigned long long)a2;
- (id)_startDateFromTimeInterval:(unsigned long long)a0;
- (id)_stringFromDate:(id)a0 withTimeInterval:(unsigned long long)a1 textStyle:(unsigned long long)a2 forceAMPM:(BOOL)a3;
- (id)_subLabelAtIndex:(unsigned long long)a0;
- (id)_subLabelsForSpacingInterval:(unsigned long long)a0 withSpacing:(id)a1 textStyle:(unsigned long long)a2;
- (id)axisLabels;
- (id)axisSubLabels;
- (id)dayFormatter:(unsigned long long)a0;
- (Class)expectedDataType;
- (id)hourFormatter:(unsigned long long)a0;
- (unsigned long long)numLabels;
- (unsigned long long)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned long long)a0;
- (id)positionForSubLabelAtIndex:(unsigned long long)a0;
- (void)selectLabel:(BOOL)a0 atIndex:(unsigned long long)a1;
- (id)textForLabelAtIndex:(unsigned long long)a0;
- (id)textForSubLabelAtIndex:(unsigned long long)a0;
- (id)weekdayFormatter:(unsigned long long)a0;
- (id)yearFormatter:(unsigned long long)a0;

@end
