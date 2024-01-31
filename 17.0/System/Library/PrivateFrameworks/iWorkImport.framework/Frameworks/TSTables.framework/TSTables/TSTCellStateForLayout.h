@class TSTTextStyleHandle, TSTLayoutContentCachedKey, TSWPColumn, TSTCell;

@interface TSTCellStateForLayout : NSObject <NSCopying>

@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasContentIsCached;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } modelCellID;
@property (copy, nonatomic) TSTCell *cell;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } layoutMergeRange;
@property (retain, nonatomic) id cellContents;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) double maxWidthForChildren;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (nonatomic) int verticalAlignment;
@property (retain, nonatomic) TSTTextStyleHandle *textStyleHandle;
@property (nonatomic) BOOL cellPropsRowHeight;
@property (nonatomic) BOOL cellWraps;
@property (nonatomic) BOOL needWPColumn;
@property (nonatomic) BOOL shouldFastPathMeasureFitWidth;
@property (nonatomic) BOOL forDrawing;
@property (nonatomic) BOOL inDynamicLayout;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfText;
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal;
@property (retain, nonatomic) TSWPColumn *wpColumn;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) unsigned long long pageCount;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)p_generateCellContentsAndReturnContents:(BOOL)a0;

@end
