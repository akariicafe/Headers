@class PXGMutableComponentDataStore, PXGComponentDataStore;
@protocol PXGComponentObserver;

@interface PXGComponent : NSObject {
    long long _nestedChanges;
}

@property (class, readonly, nonatomic) unsigned long long elementSize;
@property (class, readonly, nonatomic) BOOL shouldDiffForChanges;

@property (weak, nonatomic) id<PXGComponentObserver> observer;
@property (readonly, nonatomic) PXGMutableComponentDataStore *previousDataStore;
@property (readonly, nonatomic) PXGComponentDataStore *dataStore;
@property (readonly, nonatomic) PXGMutableComponentDataStore *mutableDataStore;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (void)cleanupUnusedObjects;
- (void)willDestroyEntities:(const struct { unsigned int x0; } *)a0 count:(long long)a1;

@end
