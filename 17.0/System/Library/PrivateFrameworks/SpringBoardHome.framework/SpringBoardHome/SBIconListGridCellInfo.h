@class NSIndexSet, NSString, NSMutableIndexSet;

@interface SBIconListGridCellInfo : NSObject <NSCopying, BSDescriptionProviding> {
    unsigned short _indexes[128];
    unsigned short *_extraGridCellIndexes;
    unsigned long long _extraGridCellIndexesSize;
    unsigned short *_extraIconIndexes;
    unsigned long long _extraIconIndexesSize;
    NSMutableIndexSet *_outOfBoundsIconIndexes;
    unsigned long long _maxGridCellIndex;
}

@property (nonatomic) struct SBHIconGridSize { unsigned short columns; unsigned short rows; } gridSize;
@property (readonly, nonatomic) unsigned long long numberOfUsedRows;
@property (readonly, nonatomic) unsigned long long numberOfUsedColumns;
@property (readonly, nonatomic) struct SBHIconGridSize { unsigned short x0; unsigned short x1; } usedGridSize;
@property (readonly, nonatomic, getter=isLayoutOutOfBounds) BOOL layoutOutOfBounds;
@property (readonly, nonatomic) NSIndexSet *indexesOfOutOfBoundsIcons;
@property (nonatomic) unsigned long long firstEmptyGridCellIndex;
@property (nonatomic) unsigned long long lastUsedGridCellIndex;
@property (nonatomic) unsigned long long firstTrailingEmptyGridCellIndex;
@property (readonly, copy, nonatomic) NSString *layoutDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfUsedGridCellsInGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a0;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)a0;
- (unsigned long long)iconIndexForGridCellIndex:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)maxGridCellIndexForIconIndex:(unsigned long long)a0;
- (void)setIconIndexes:(unsigned long long *)a0 inGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)succinctDescriptionBuilder;
- (unsigned long long)getIconIndexes:(unsigned long long *)a0 inGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a1;
- (void)markIconIndexAsFixed:(unsigned long long)a0;
- (struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })gridRangeForGridCellIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFirstGridCellRangeOfSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a0 inGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a1 passingTest:(id /* block */)a2;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })gridSizeForGridCellIndex:(unsigned long long)a0;
- (struct SBIconApproximateLayoutPosition { unsigned long long x0; unsigned long long x1; })approximateLayoutPositionForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (unsigned long long)getUniqueIconIndexes:(unsigned long long *)a0 inGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a1;
- (unsigned long long)iconIndexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (unsigned long long)gridCellIndexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (unsigned long long)indexOfOutOfBoundsIconInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIconIndex:(unsigned long long)a0 forGridCellIndex:(unsigned long long)a1;
- (void)enumerateOutOfBoundsIconIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)addEmptyRows:(unsigned long long)a0;
- (void)setIconIndex:(unsigned long long)a0 inGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (struct SBIconApproximateLayoutPosition { unsigned long long x0; unsigned long long x1; })approximateLayoutPositionForGridCellIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFirstGridCellRangeOfSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a0 inGridCellIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 passingTest:(id /* block */)a2;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)a0;
- (void)clearAllIconAndGridCellIndexes;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setGridCellIndex:(unsigned long long)a0 forIconIndex:(unsigned long long)a1;
- (id)succinctDescription;
- (unsigned long long)indexOfFirstEmptyGridCellRangeOfSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isOutOfBoundsAtIconIndex:(unsigned long long)a0;
- (void)addEmptyColumns:(unsigned long long)a0;
- (id)indexesOfOutOfBoundsIconInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)countOfIconsOfSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a0;
- (unsigned long long)indexOfFirstUsedGridCellInGridRange:(struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })a0;
- (void)markIconIndexAsOutOfBounds:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct SBIconCoordinate { long long x0; long long x1; })coordinateForGridCellIndex:(unsigned long long)a0;

@end
