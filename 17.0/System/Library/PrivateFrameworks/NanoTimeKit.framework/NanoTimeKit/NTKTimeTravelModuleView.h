@class NSDateComponentsFormatter, NSCalendar, CALayer, UILabel, NSDate, UIView;
@protocol NTKTimeTravelModuleViewTapClient;

@interface NTKTimeTravelModuleView : NTKModuleView {
    UIView *_backgroundView;
    UILabel *_timeScrubDifferenceLabel;
    UILabel *_timeScrubNowLabel;
    NSDate *_date;
    NSDateComponentsFormatter *_offsetDateFormatter;
    BOOL _is24HourMode;
    BOOL _shouldUseNowText;
    NSCalendar *_cal;
    CALayer *_borderLayer;
    double _nowLabelCenterY;
}

@property (weak, nonatomic) id<NTKTimeTravelModuleViewTapClient> tapDelegate;

+ (double)cornerRadius;
+ (id)timeTravelColor;
+ (double)_actualCornerRadiusForDevice:(id)a0;
+ (double)_defaultHeightForDevice:(id)a0;

- (void)_layoutContentView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)prepareToAppear;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)a0 andOverrideDate:(id)a1;
- (void)_setupBorder;
- (id)initWithMaximumWidth:(double)a0;
- (void)scrubToDate:(id)a0;

@end
