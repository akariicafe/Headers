@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ISObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangesQueue_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSObject<OS_dispatch_queue> *_pendingChangesQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

@property (readonly, nonatomic) BOOL hasObservers;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)didPublishChanges;
- (void)didPerformChanges;
- (void)_willChange;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)_didChange;
- (void)_publishChanges;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)signalChange:(unsigned long long)a0;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_applyPendingChanges;
- (void)_setHasObservers:(BOOL)a0;
- (unsigned long long)currentChanges;
- (void)hasObserversDidChange;
- (BOOL)isPerformingChanges;
- (void)willPerformChanges;

@end
