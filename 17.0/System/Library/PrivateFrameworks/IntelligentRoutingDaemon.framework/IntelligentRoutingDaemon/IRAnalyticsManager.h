@class IRBackgroundActivitiesManager;

@interface IRAnalyticsManager : NSObject

@property (weak, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

+ (void)_AnalyticsSendEventLazyForEventIdentifier:(id)a0 clientIdentifier:(id)a1 analytics:(id)a2;
+ (BOOL)_isClientAllowedCA:(id)a0;
+ (void)logUiEvent:(id)a0 withService:(id)a1 forCandidateIdentifier:(id)a2 systemState:(id)a3 candidatesContainer:(id)a4 miloPrediction:(id)a5 inspections:(id)a6 statisticsManager:(id)a7;

- (void).cxx_destruct;
- (void)_handleCoreAnalyticsXPCActivity;
- (id)initWithBackgroundActivitiesManager:(id)a0;

@end
