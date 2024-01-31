@class TSDDrawableInfo, TNPageCoordinateDictionary, NSObject, TNPageController;
@protocol OS_dispatch_queue;

@interface TNHintCache : NSObject {
    struct { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } bottomRight; } mPageRange;
    BOOL mIsMaxColumnValid;
    BOOL mIsMaxRowValid;
    TNPageCoordinateDictionary *mHintCacheEntryDictionary;
    struct set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct __tree<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellCoord, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<TSUCellCoord>> { unsigned long long __value_; } __pair3_; } __tree_; } _pageCoordinatesWithAnnotations;
}

@property (retain) TSDDrawableInfo *info;
@property (nonatomic) BOOL pageCoordinatesWithAnnotationsIsValid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageCoordinatesWriterQueue;
@property (readonly) TNPageController *pageController;

- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_infoPartitioner;
- (id)initWithInfo:(id)a0 pageController:(id)a1;
- (id)layoutAtCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 parentLayout:(id)a1;
- (id)p_hintCacheEntryAtCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (struct set<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct __tree<TSUCellCoord, std::less<TSUCellCoord>, std::allocator<TSUCellCoord>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSUCellCoord, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<TSUCellCoord>> { unsigned long long x0; } x2; } x0; })pageCoordinatesWithAnnotations;
- (struct { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })pageRangeWithUpperBound:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
