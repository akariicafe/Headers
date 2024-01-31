@class NSString, NSSet, TRIClient;

@interface CPAnalyticsTrialLoggingDestination : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) int trialProjectId;
@property (readonly, nonatomic) NSString *trialNamespace;
@property (readonly, nonatomic) NSSet *metricEvents;
@property (readonly, nonatomic) BOOL forceEnabledForTesting;
@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *trialExperimentId;
@property (retain, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)logTrialCounterMetricWithCPAnalyticsEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;

@end
