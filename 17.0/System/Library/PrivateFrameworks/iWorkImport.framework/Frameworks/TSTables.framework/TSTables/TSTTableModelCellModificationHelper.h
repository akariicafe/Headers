@class TSTConcurrentSparseCellList, TSTColumnRowUIDMap;

@interface TSTTableModelCellModificationHelper : NSObject

@property (readonly, nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } sourceRect;
@property (readonly, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } sourceRectOrigin;
@property (readonly, nonatomic) TSTConcurrentSparseCellList *sparseCellList;
@property (nonatomic) unsigned long long emptyCellCount;

+ (id)perChunkHelperWithSourceRect:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 columnRowUIDMap:(id)a1;

- (void).cxx_destruct;
- (id)initWithSourceRect:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 columnRowUIDMap:(id)a1;
- (void)prepareToAddCells;

@end
