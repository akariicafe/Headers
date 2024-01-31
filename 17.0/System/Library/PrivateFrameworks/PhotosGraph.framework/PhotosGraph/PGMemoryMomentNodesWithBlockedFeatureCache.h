@class PGGraphMomentNodeCollection, PHUserFeedbackCalculator, NSObject;
@protocol OS_os_log;

@interface PGMemoryMomentNodesWithBlockedFeatureCache : NSObject {
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithBlockedFeature;

- (void).cxx_destruct;
- (id)initWithUserFeedbackCalculator:(id)a0;
- (id)initWithUserFeedbackCalculator:(id)a0 loggingConnection:(id)a1;
- (id)momentNodesWithBlockedFeatureInGraph:(id)a0 progressReporter:(id)a1;
- (void)prefetchMomentNodesWithBlockedFeatureIfNeededInGraph:(id)a0 progressReporter:(id)a1;

@end
