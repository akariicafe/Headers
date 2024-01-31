@class UILabel, CLKClockTimerToken, NTKDigitalTimeLabel, CLKClockTimer, NTKSchoolTimeDialView, NSDateFormatter, CLKUICurvedColoringLabel, NTKAnalogHandsView;

@interface NTKSchoolTimeFaceView : NTKFaceView {
    NTKSchoolTimeDialView *_dialView;
    NTKAnalogHandsView *_handsView;
    NTKDigitalTimeLabel *_digitalTimeLabel;
    UILabel *_dateLabel;
    UILabel *_nameLabel;
    CLKUICurvedColoringLabel *_curvedNameLabel;
    CLKClockTimer *_clockTimer;
    CLKClockTimerToken *_clockTimerToken;
    NSDateFormatter *_formatter;
}

+ (id)schoolTimeColor;
+ (id)secondHandColor;

- (void)_startObserving;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_stopObserving;
- (void)setupUI;
- (void)_setDate:(id)a0;
- (void)_setupNameLabel;
- (void)_timeDidUpdate:(id)a0;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_handleChangeNotification;
- (void)_layoutCurvedNameLabel;
- (void)_loadSnapshotContentViews;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_tearDownUI;
- (void)_unloadSnapshotContentViews;
- (void)_updateTimeAndDate:(id)a0 animated:(BOOL)a1;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;

@end
