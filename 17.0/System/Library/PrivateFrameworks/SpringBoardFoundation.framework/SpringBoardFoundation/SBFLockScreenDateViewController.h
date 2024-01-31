@class _UILegibilitySettings, NSString, SBAlwaysOnDefaults, CSProminentDisplayViewController, UIViewController;
@protocol BSDefaultObserver, SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {
    id _timerToken;
    BOOL _isVisible;
    id _minuteHandlerToken;
    BOOL _disablesUpdates;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    id<BSDefaultObserver> _alwaysOnDefaultsObserver;
    CSProminentDisplayViewController *_prominentDisplayViewController;
}

@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) UIViewController *inlineComplicationViewController;
@property (retain, nonatomic) UIViewController *complicationContainerViewController;
@property (nonatomic) BOOL screenOff;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;
@property (nonatomic) BOOL restrictsVibrancy;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDateTimeAlignment:(long long)a0;
- (id)dateView;
- (void)viewWillAppear:(BOOL)a0;
- (id)transientSubtitleText;
- (id)_timelinesForDateInterval:(id)a0;
- (void)dealloc;
- (void)updateTimerWithText:(id)a0;
- (void)setDimmingViewAlpha:(double)a0;
- (void)_updateState;
- (void)setTimeAlpha:(double)a0 subtitleAlpha:(double)a1;
- (void)loadView;
- (BOOL)_supportsCoaching;
- (void)_addObservers;
- (void)_stopUpdateTimer;
- (void)setCustomSubtitle:(id)a0 withTimeout:(double)a1;
- (void)_updateView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateLegibilityStrength;
- (void)_updateWithFrameSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)setCustomSubtitle:(id)a0;
- (void)_startUpdateTimer;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)setCustomSubtitleView:(id)a0;
- (void)_updateAlternateCalendar;
- (void)setTimerWithText:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setView:(id)a0;
- (void)_handleTimeZoneChange;
- (id)dateViewIfExists;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateFormatIfEnabled;
- (void)updateTimeNow;
- (void)_updateFormat;

@end
