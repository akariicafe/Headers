@class NSString, GKReporter;

@interface GKOnboardingMetricsHandler : NSObject

@property (nonatomic) double analyticsStartTime;
@property (retain, nonatomic) GKReporter *reporter;
@property (copy, nonatomic) NSString *refApp;

- (void).cxx_destruct;
- (id)initWithReporter:(id)a0 refApp:(id)a1;
- (void)onboardingDidBegin;
- (void)onboardingDidEnd;
- (void)reportEventForOnboardingFlowAction:(unsigned long long)a0;

@end
