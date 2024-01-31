@interface SiriPrivateLearningAnalytics.SiriUserFeedbackLearningPluginBase : NSObject <MLROnDemandTaskPerforming> {
    void /* unknown type, empty encoding */ usageLogger;
    void /* unknown type, empty encoding */ timeout;
}

- (id)init;
- (void).cxx_destruct;
- (id)performTask:(id)a0 error:(id *)a1;

@end
