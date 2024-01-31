@class NSString, NSDate;

@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate *_endDate;
}

@property (readonly, nonatomic) NSString *timerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)interItemSpacing;
- (id)init;
- (void)dealloc;
- (void)setLegibilitySettings:(id)a0;
- (id)accessoryView;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateLegibilityStrength;
- (void).cxx_destruct;
- (void)setEndDate:(id)a0;
- (void)setFont:(id)a0;
- (id)_newTimerDialForSettings:(id)a0 withFont:(id)a1;
- (id)_timerFont;
- (void)updateTimerLabel;

@end
