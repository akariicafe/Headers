@class UIImageView, CLKUIColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKAlarmRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    UIImageView *_idleImageView;
    CLKUIColoringLabel *_timeLabel;
    CLKUIColoringLabel *_designatorLabel;
    UIImageView *_snoozeImageView;
    NTKRichComplicationRingProgressView *_snoozeProgressView;
    struct { double timeLabel12HourLayoutFontSize; double timeLabel12HourLayoutMaxWidth; double timeLabel12HourTimeLeadingLayoutBottom; double timeLabel12HourDesignatorLeadingLayoutBottom; double timeLabel24HourLayoutFontSize; double timeLabel24HourLayoutMaxWidth; double timeLabel24HourLayoutBottom; double timeLabelSnoozeLayoutFontSize; double timeLabelSnoozeLayoutMaxWidth; double timeLabelSnoozeLayoutBottom; double designatorLabelFontSize; double designatorLabelMaxWidth; double designatorLabel12HourTimeLeadingLayoutBottom; double designatorLabel12HourDesignatorLeadingLayoutBottom; double snoozeIconTop; double snoozeRingStrokeWidth; double alarmSymbolPointSize; double snoozeSymbolPointSize; } _layoutConstants;
    unsigned long long _layout;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (long long)_backgroundFilterStyle;
- (long long)_foregroundFilterStyle;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (BOOL)_pairedDeviceSupportsComplicationSymbols;
- (void)makeBackgroundTransparent;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
