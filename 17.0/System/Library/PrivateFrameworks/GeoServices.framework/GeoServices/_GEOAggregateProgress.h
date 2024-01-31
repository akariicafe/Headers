@class NSMutableArray;

@interface _GEOAggregateProgress : NSProgress {
    NSMutableArray *_observedChildren;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)_update;
- (void)dealloc;
- (void)addChild:(id)a0 withPendingUnitCount:(long long)a1;
- (BOOL)isIndeterminate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithTotalUnitCount:(long long)a0;
- (id)initWithParent:(id)a0 userInfo:(id)a1;

@end
