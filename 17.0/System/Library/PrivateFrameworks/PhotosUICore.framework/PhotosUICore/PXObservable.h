@class NSMapTable, NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PXObservable : NSObject {
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    BOOL _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
}

@property (readonly, nonatomic) BOOL hasObservers;
@property (readonly, nonatomic) unsigned long long currentChanges;
@property (readonly, nonatomic) BOOL shouldNotifyObserversAfterApplyingChangeBlocks;
@property (readonly, nonatomic) BOOL isPerformingChanges;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;

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
- (id)_pxStoryPPT_observeChangesUsingChangeHandler:(id /* block */)a0;
- (void)_setHasObservers:(BOOL)a0;
- (void)copyLogConfigurationFrom:(id)a0;
- (void)didEndChangeHandling;
- (void)hasObserversDidChange;
- (id)pxStory_enumerateStatesByWatchingChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)pxStory_enumerateStatesWithTimeout:(double)a0 watchingChanges:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)willPerformChanges;

@end
