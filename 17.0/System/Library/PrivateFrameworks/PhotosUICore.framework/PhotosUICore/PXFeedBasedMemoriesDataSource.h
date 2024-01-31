@class NSArray;

@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource

@property (readonly, copy, nonatomic) NSArray *entries;

- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithDataSource:(id)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)sectionedObjectReferenceForMemoryUUID:(id)a0;

@end
