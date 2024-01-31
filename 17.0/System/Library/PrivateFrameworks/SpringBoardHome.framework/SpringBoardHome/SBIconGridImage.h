@class CPMemoryPool;
@protocol SBIconListLayout;

@interface SBIconGridImage : UIImage

@property (retain, nonatomic) id<SBIconListLayout> listLayout;
@property (retain, nonatomic) CPMemoryPool *pool;
@property (nonatomic) unsigned int treatedCells;
@property (readonly, nonatomic) unsigned long long numberOfCells;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) unsigned long long numberOfRows;

+ (struct CGSize { double x0; double x1; })sizeForLayout:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(unsigned long long)a0 inLayout:(id)a1 maxCount:(unsigned long long)a2;
+ (id)gridImageForLayout:(id)a0 previousGridImage:(id)a1 previousGridCellIndexToUpdate:(unsigned long long)a2 pool:(id)a3 cellImageDrawBlock:(id /* block */)a4;
+ (unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)a0 inLayout:(id)a1;
+ (id)gridImageForLayout:(id)a0 pool:(id)a1 cellImageDrawBlock:(id /* block */)a2;
+ (id)gridImageForLayout:(id)a0 cellImageDrawBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)gridImageByPatchingCellAtIndex:(unsigned long long)a0 cellImageProviderBlock:(id /* block */)a1;
- (BOOL)isIconImageTreatedAtIndex:(unsigned long long)a0;
- (id)iconImageAtIndex:(unsigned long long)a0;

@end
