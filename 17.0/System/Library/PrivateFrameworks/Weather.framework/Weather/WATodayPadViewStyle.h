@class UIFont;

@interface WATodayPadViewStyle : NSObject <NSCopying>

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long format;
@property (copy, nonatomic) UIFont *locationFont;
@property (copy, nonatomic) UIFont *temperatureFont;
@property (copy, nonatomic) UIFont *conditionsFont;
@property (nonatomic) double labelLeadingMargin;
@property (nonatomic) double conditionsImageLeadingMargin;
@property (nonatomic) double temperatureLabelBaselineToConditionsImageViewBottom;
@property (nonatomic) double locationLabelBaselineToTemperatureLabelBaseline;
@property (nonatomic) double conditionsLabelBaselineToLocationLabelBaseline;
@property (nonatomic) double conditionsLabelBaselineToBottom;

+ (id)styleForScreenWithSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setupForDefaultWithOrientation:(long long)a0;
- (void)_setupForGigantorWithOrientation:(long long)a0;
- (id)initWithFormat:(unsigned long long)a0 orientation:(long long)a1;

@end
