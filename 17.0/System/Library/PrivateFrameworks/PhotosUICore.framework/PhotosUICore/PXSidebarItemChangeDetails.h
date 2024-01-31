@class PXArrayChangeDetails, NSArray, NSIndexSet, PXDataSection;

@interface PXSidebarItemChangeDetails : NSObject

@property (readonly, nonatomic) PXArrayChangeDetails *arrayChangeDetails;
@property (readonly, nonatomic) PXDataSection *previousDataSection;
@property (readonly, nonatomic) NSArray *removedItems;
@property (readonly, nonatomic) NSArray *changedItems;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, nonatomic) BOOL hasMoves;
@property (readonly, nonatomic) BOOL hasContentChanges;
@property (readonly, nonatomic) BOOL needsReload;

+ (void)makeArrayIndexMovesIncremental:(struct { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1;

- (void)enumerateMovedIndexesUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)changedIndexes;
- (id)initWithArrayChangeDetails:(id)a0 previousDataSection:(id)a1;

@end
