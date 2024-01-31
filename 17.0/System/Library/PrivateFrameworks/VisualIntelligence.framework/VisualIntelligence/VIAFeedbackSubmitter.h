@class PARSession;
@protocol VIAnalyticsTestingDelegate;

@interface VIAFeedbackSubmitter : NSObject

@property (readonly, nonatomic) PARSession *parSession;
@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void).cxx_destruct;
- (void)didHitCacheForQueryId:(unsigned long long)a0;
- (id)initWithPARSession:(id)a0;

@end
