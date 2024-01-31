@class VIAFeedbackSubmitter, NSArray, NSDictionary, NSObject, VIAEventCache;
@protocol OS_dispatch_queue, VIAnalyticsTestingDelegate;

@interface VIAnalytics : NSObject {
    NSArray *_loggers;
    NSDictionary *_feedbackNameToLoggerMap;
    VIAEventCache *_eventCache;
}

@property (class, readonly, nonatomic) VIAnalytics *sharedAnalytics;

@property (readonly, nonatomic) VIAFeedbackSubmitter *feedbackSubmitter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

+ (void)logEvent:(id)a0;

- (void).cxx_destruct;
- (void)_logEvent:(id)a0;
- (void)_performLogEvent:(id)a0;
- (id)initWithFeedbackSubmitter:(id)a0;

@end
