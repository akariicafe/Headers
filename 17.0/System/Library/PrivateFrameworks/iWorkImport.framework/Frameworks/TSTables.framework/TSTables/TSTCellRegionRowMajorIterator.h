@class NSString;

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {
    struct set<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> { struct __tree<TSUCellRect, TSTCellRangeRowMajorLess, std::allocator<TSUCellRect>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellRect, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, TSTCellRangeRowMajorLess> { unsigned long long __value_; } __pair3_; } __tree_; } mCellRangeSet;
    struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } mCellID;
    struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } mBoundingCellRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (id)initWithCellRegion:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
