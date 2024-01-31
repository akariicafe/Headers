@class NSHashTable, NTKSnapshotLoadState;

@interface NTKSnapshotRequest : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_tokens;
    NTKSnapshotLoadState *_lock_loadState;
    unsigned long long _lock_priority;
}

@property (readonly, nonatomic) unsigned long long priority;
@property (retain, nonatomic) NTKSnapshotLoadState *loadState;

- (id)init;
- (void).cxx_destruct;
- (id)observeChangesToLoadStateWithPriority:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)observeChangesToLoadStateWithToken:(id)a0;
- (void)stopObservingChanges:(id)a0;
- (void)updatePriority;

@end
