@class WATodayPadView, NSString, NSTimer, WATodayModel, NSDate, WAForecastModel;
@protocol WAWidgetDelegate;

@interface WALockscreenWidgetViewController : UIViewController <WATodayModelObserver>

@property (retain, nonatomic) WATodayModel *todayModel;
@property (retain, nonatomic) WATodayPadView *todayView;
@property (copy, nonatomic) WAForecastModel *currentForecastModel;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (copy, nonatomic) NSDate *updateLastCompletionDate;
@property (nonatomic) BOOL locationServicesActive;
@property (nonatomic) double updateInterval;
@property (weak, nonatomic) id<WAWidgetDelegate> delegate;
@property (readonly, nonatomic) BOOL todayViewIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceIfExists;

- (void)_updateTimerFired:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)updateForChangedSettings:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_locationName;
- (id)_temperature;
- (id)_conditionsLine;
- (id)_conditionsImage;
- (void)_delegateDidUpdate;
- (BOOL)_delegateShouldUpdateForecast;
- (void)_delegateUpdateDidFailWithError:(id)a0;
- (void)_delegateWillUpdate;
- (void)_scheduleNewTimer;
- (void)_setTodayViewHidden:(BOOL)a0;
- (void)_setupWeatherModel;
- (void)_teardownTimer;
- (void)_teardownWeatherModel;
- (void)_updateTodayView;
- (void)_updateWithReason:(id)a0;
- (void)getLocationServicesAuthorizationStatus:(id /* block */)a0;
- (BOOL)shouldFakeWeather;
- (void)todayModel:(id)a0 forecastWasUpdated:(id)a1;
- (void)todayModelWantsUpdate:(id)a0;
- (void)updateWeather;

@end
