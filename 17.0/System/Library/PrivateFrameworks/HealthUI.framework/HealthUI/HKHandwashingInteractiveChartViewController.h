@class HKDisplayType;

@interface HKHandwashingInteractiveChartViewController : HKInteractiveChartViewController <HKHealthChartFactoryViewControllerProviderClass>

@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (retain, nonatomic) HKDisplayType *goalDisplayType;

+ (id)_generateHandwashingGoalDataSource;
+ (id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)a0 unitPreferencesController:(id)a1 selectedTimeScopeController:(id)a2;
+ (id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)a0 unitPreferenceController:(id)a1 color:(id)a2;
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)a0 chartFactory:(id)a1 applicationItems:(id)a2 displayDate:(id)a3 preferredOverlay:(long long)a4 restorationUserActivity:(id)a5 trendModel:(id)a6 additionalChartOptions:(unsigned long long)a7;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)a0 timeScope:(long long)a1 stackOffset:(long long)a2;

@end
