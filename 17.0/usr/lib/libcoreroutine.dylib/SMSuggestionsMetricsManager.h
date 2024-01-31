@class RTDefaultsManager, RTDeviceLocationPredictor, SMSessionStore, SMSuggestionsStore;

@interface SMSuggestionsMetricsManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) SMSuggestionsStore *suggestionsStore;

+ (id)stringFromSuggestionsMetricsEvent:(unsigned long long)a0;

- (void)_setup;
- (void).cxx_destruct;
- (void)setup;
- (BOOL)_collectAndSubmitMetricsUponNotification:(id)a0;
- (id)_computeDetailsMetricsWithError:(id *)a0;
- (id)_computeMetricsForEvent:(unsigned long long)a0 error:(id *)a1;
- (id)_computeUsageMetricsWithError:(id *)a0;
- (id)_getNPLOIsWithOnlyHighConfidence:(BOOL)a0 location:(id)a1 date:(id)a2 error:(id *)a3;
- (id)_getSelectedSessionForSuggestion:(id)a0 error:(id *)a1;
- (id)_getSessionConfigurationsForSuggestion:(id)a0 timeWindow:(double)a1 error:(id *)a2;
- (id)_getSuggestionsConsideredMetricsWithError:(id *)a0;
- (long long)_getSuggestionsCountConsideredForPastDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (long long)_getSuggestionsCountPresentedForPastDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (long long)_getSuggestionsCountSelectedForPastDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)_getSuggestionsPresentedMetricsWithError:(id *)a0;
- (id)_getSuggestionsSelectedMetricsWithError:(id *)a0;
- (BOOL)_submitMetrics:(id)a0 event:(unsigned long long)a1 error:(id *)a2;
- (void)collectAndSubmitMetricsUponNotification:(id)a0;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 sessionStore:(id)a2 suggestionsStore:(id)a3;

@end
