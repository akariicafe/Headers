@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject

@property (nonatomic) struct { unsigned short row; unsigned char column; unsigned char reserved; } modelCellID;
@property (copy, nonatomic) TSTCell *cell;
@property (nonatomic) struct { struct { unsigned short row; unsigned char column; unsigned char reserved; } origin; struct { unsigned short numberOfColumns; unsigned short numberOfRows; } size; } mergedRange;
@property (retain, nonatomic) id cellContents;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (nonatomic) unsigned int verticalAlignment;
@property (nonatomic) BOOL cellPropsRowHeight;
@property (nonatomic) BOOL cellWraps;
@property (nonatomic) BOOL forDrawing;
@property (nonatomic) BOOL inDynamicLayout;
@property (nonatomic) int layoutCacheFlags;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal;
@property (retain, nonatomic) TSWPColumn *wpColumn;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) unsigned long long pageCount;

- (id)init;
- (void)dealloc;

@end
