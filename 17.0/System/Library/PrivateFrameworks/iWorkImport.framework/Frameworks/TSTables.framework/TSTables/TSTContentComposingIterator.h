@class NSString, NSMutableArray;

@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } minCursorCellID;
@property (nonatomic) struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__value_; } __end_cap_; } cursorCellIDs;
@property (retain, nonatomic) NSMutableArray *iterators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (void)updateCellData:(id)a0;
- (void)addIterator:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)updateFormulaForCellData:(id)a0;

@end
