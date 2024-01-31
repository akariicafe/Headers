@class NSObject;
@protocol OS_dispatch_queue, EMFDPReportingDelegate;

@interface EMFDPEventDispatcher : NSObject {
    id<EMFDPReportingDelegate> _reportingDelegate;
    NSObject<OS_dispatch_queue> *_reportingBackgroundQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithReportingDelegate:(id)a0;
- (void)didUseEmoji:(id)a0 usageSource:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)didUseEmoji:(id)a0 usageSource:(unsigned long long)a1 replacementContext:(id)a2 searchQuery:(id)a3 resultPosition:(id)a4 numberSearchQueriesRun:(id)a5 wasPositiveEngagement:(BOOL)a6;
- (void)didUseEmoji:(id)a0 usageSource:(unsigned long long)a1 replacementContext:(id)a2 searchQuery:(id)a3 resultPosition:(id)a4 numberSearchQueriesRun:(id)a5 wasPositiveEngagement:(BOOL)a6 completionHandler:(id /* block */)a7;

@end
