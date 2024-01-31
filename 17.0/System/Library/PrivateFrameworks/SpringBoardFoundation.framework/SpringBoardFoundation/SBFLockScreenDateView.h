@class UIFont, NSString, _UILegibilitySettings, NSDate, UIView, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, CSProminentDisplayViewController, SBFLockScreenDateSubtitleDateView, BSUIVibrancyConfiguration, NSTimeZone, UIColor;

@interface SBFLockScreenDateView : UIView {
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    UIView *_activeSubtitleView;
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) CSProminentDisplayViewController *prominentDisplayViewController;
@property (nonatomic) BOOL restrictsVibrancy;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL useLandscapeTimeFontSize;
@property (nonatomic) BOOL useCompactDateFormat;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) double subtitleLegibilityStrength;
@property (nonatomic) double alignmentPercent;
@property (nonatomic) double dateToTimeStretch;
@property (nonatomic) double maximumSubtitleWidth;
@property (copy, nonatomic) UIFont *customTimeFont;
@property (readonly, nonatomic) struct { double ascender; double descender; double bodyLeading; double capHeight; } customTimeMetrics;
@property (nonatomic) BOOL subtitleOnTop;
@property (copy, nonatomic) NSString *customTimeNumberingSystem;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) double timeBaselineOffsetFromOrigin;
@property (readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restingFrame;
@property (readonly, nonatomic) double timeAlpha;
@property (readonly, nonatomic) double subtitleAlpha;
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView;
@property (retain, nonatomic) UIView *inlineComplicationView;

+ (struct { double x0; double x1; double x2; double x3; })metricsForFont:(id)a0;
+ (struct { double x0; double x1; double x2; double x3; })timeFontMetrics;
+ (double)defaultHeight;
+ (id)timeFont;

- (void)_updateLabels;
- (void)_layoutSubtitle;
- (void)_updateActiveSubtitleView;
- (id)_timeLabel;
- (void)_updateUsesCompactDateFormat;
- (void)traitCollectionDidChange:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cachedGlyphInsetsTimeFontForString:(id)a0;
- (void)_setDate:(id)a0 inTimeZone:(id)a1;
- (void)_setSubtitleAlpha:(double)a0;
- (void)_updateForNewFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTimeAlpha:(double)a0 subtitleAlpha:(double)a1;
- (void)_updateLabelAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationExtentForAlignmentPercent:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeLabelFrameForAlignmentPercent:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_timeLabelInsetsForTimeString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chargingVisualInformationTimeSubtitleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_subtitleViewFrameForView:(id)a0 alignmentPercent:(double)a1;
- (void)_cacheCustomTimeMetrics;
- (void).cxx_destruct;
- (void)updateFormat;
- (id)_effectiveTextColor;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
