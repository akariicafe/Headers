@class PUViewModelChange, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PUViewModel : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
}

@property (nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) BOOL _publishingChanges;
@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (readonly, nonatomic) PUViewModelChange *currentChange;
@property (readonly, nonatomic) PUViewModelChange *currentChangeIfExists;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)didPublishChanges;
- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void)didPerformChanges;
- (void)_willChange;
- (void).cxx_destruct;
- (id)newViewModelChange;
- (void)_didChange;
- (id)debugDetailedDescription;
- (void)_publishChanges;
- (void)_applyPendingChanges;
- (void)assertInsideChangesBlock;
- (void)willPublishChanges;

@end
