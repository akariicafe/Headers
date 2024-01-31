@class NSString, _CDPersistedCoalescingTimer, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeEventStreamDeleting;

@interface _CDSpotlightCoalescedDeletionManager : NSObject {
    NSObject<OS_dispatch_queue> *_deletionCoalescingQueue;
    NSString *_persistencePath;
    double _delay;
    _CDPersistedCoalescingTimer *_deletionCoalescingTimer;
    id<_DKKnowledgeEventStreamDeleting> _knowledgeStore;
}

- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithKnowledgeStore:(id)a0 persistencePath:(id)a1 delay:(double)a2;
- (void)processDeletionForOperation:(id)a0;
- (void)setupCoalescingTimer;

@end
