@interface TSTTableRepProcessChangesActions : NSObject {
    struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } _dirtyCellRanges;
}

@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } dirtyStrokeRange;
@property (nonatomic) BOOL invalidateAllChrome;
@property (nonatomic) BOOL invalidateAllChromeCaches;
@property (nonatomic) BOOL invalidateColumnChrome;
@property (nonatomic) BOOL invalidateRowChrome;
@property (nonatomic) BOOL hideChromeContextMenuButton;
@property (nonatomic) BOOL invalidateKnobs;
@property (nonatomic) BOOL invalidateSelection;
@property (nonatomic) BOOL invalidateTableName;
@property (nonatomic) BOOL updateEditorRemainders;
@property (nonatomic) BOOL syncReferenceHighlightState;
@property (nonatomic) BOOL setNeedsDisplay;
@property (nonatomic) BOOL hideStepperHUD;
@property (nonatomic) BOOL expandDirtyRegionForReferences;
@property (nonatomic) BOOL repositionStockPopover;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setDirtyCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void *)dirtyCellRanges;

@end
