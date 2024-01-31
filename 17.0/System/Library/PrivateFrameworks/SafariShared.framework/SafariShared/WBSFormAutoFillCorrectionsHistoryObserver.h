@class WBSCrowdsourcedFeedbackDomainNormalizer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {
    NSMutableArray *_pendingRemovedHistoryItemsToProcess;
    NSMutableArray *_pendingRemovedHistoryVisitsToProcess;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
}

- (void)dealloc;
- (void)_historyWasCleared:(id)a0;
- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)a0;
- (void)_historyVisitsWereRemoved:(id)a0;
- (void)_invalidateUpdateCoalescingTimer;
- (id)_normalizeURL:(id)a0;
- (void)_updateCorrectionsStoreNow;
- (void)_updateCorrectionsStoreSoon;
- (void)flushPendingChangesAndDisconnectFromStoreAndHistory;
- (id)initWithCorrectionsStore:(id)a0;

@end
