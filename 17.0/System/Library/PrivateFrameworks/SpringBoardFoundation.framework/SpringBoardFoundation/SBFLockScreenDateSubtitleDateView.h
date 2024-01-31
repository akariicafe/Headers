@class NSDate, NSTimeZone, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel;
@property (nonatomic) double alignmentPercent;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL useCompactDateFormat;

+ (id)dateTimeLunarDateFont;
+ (struct { double x0; double x1; double x2; double x3; })dateTimeLunarDateFontMetrics;
+ (double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
+ (double)scaledFontSize:(double)a0 withMaximumFontSizeCategory:(id)a1;

- (void)setStrength:(double)a0;
- (void)dealloc;
- (void)setLegibilitySettings:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setDate:(id)a0 inTimeZone:(id)a1;
- (void)_updateDateLabelForCompact;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleLabelFrame;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (void)_overlayCalendarDidChange;
- (void)layoutSubviews;
- (void)_setupAlternateDateLabel;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alternateDateLabelFrame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
