@class UIView, NSString, CLKTimeFormatter, _CLKUIBasicTimeLabelManager, UILabel, CLKClockTimer, CLKClockTimerToken, UIColor;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver> {
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    CLKClockTimer *_blinkTimer;
    CLKClockTimerToken *_blinkTimerToken;
    BOOL _usesIsolatedBlinkerLabel;
    UILabel *_minutesBlinkerLabel;
    UILabel *_secondsBlinkerLabel;
}

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL animationsPaused;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;
@property (nonatomic) BOOL showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (id)effectiveFont;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)a0;
- (void)layoutSubviews;
- (double)_lastLineBaseline;
- (void)updateTimeText;
- (void)setShowsDesignator:(BOOL)a0;
- (void)timeFormatterReportingLiveTimeDidChange:(id)a0;
- (void)_startBlinking;
- (void)_startOrStopBlinking;
- (void)_stopBlinking;
- (void)_updateBlinkerAlphaForSecondFraction:(double)a0;
- (id)effectiveAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)a0;
- (id)initWithForDevice:(id)a0 timeFormatter:(id)a1 options:(unsigned long long)a2 timer:(id)a3 labelFactory:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeThatFits;
- (void)sizeViewToFit;

@end
