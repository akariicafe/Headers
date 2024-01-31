@class PXMemoriesDataSourceState, NSObject;
@protocol OS_dispatch_queue;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) PXMemoriesDataSourceState *_state;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithState:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)sectionedObjectReferenceForMemoryUUID:(id)a0;

@end
