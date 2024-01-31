@class NSPointerArray, NSIndexSet;

@interface TSTTableTile : TSPObject <TSTCompatibilityVersionProviding> {
    unsigned char _storageVersion;
    BOOL _shouldUseWideRows;
    unsigned long long _pruningCount;
}

@property (retain, nonatomic) NSPointerArray *rowInfos;
@property (readonly, nonatomic) unsigned short maxColumn;
@property (readonly, nonatomic) unsigned int maxRow;
@property (readonly, nonatomic) unsigned int numRows;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSIndexSet *populatedRows;
@property (readonly, nonatomic) BOOL shouldUseWideRows;
@property (nonatomic) BOOL lastSavedInBNC;
@property (readonly, nonatomic) unsigned long long archivingCompatibilityVersion;

- (id)initWithContext:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)initWithRows:(id)a0 context:(id)a1;
- (id)packageLocator;
- (void)willModify;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)findOrAddRowInfoAtTileRowIndex:(unsigned int)a0;
- (void)p_pruneRowCount;
- (void)_removeRowInfo:(id)a0 atTileRowIndex:(unsigned int)a1;
- (void)_removeRowsAtTileRowIndex:(unsigned int)a0 numberOfRows:(unsigned int)a1 shiftingContent:(BOOL)a2;
- (void)_setRowInfo:(id)a0 atTileRowIndex:(unsigned int)a1;
- (void)assertListRows;
- (struct TSTCellStorage { struct { unsigned char x0; unsigned char x1 : 8; unsigned short x2 : 16; unsigned short x3 : 16; unsigned short x4 : 16; unsigned int x5 : 32; } x0; unsigned char x1[0]; } *)cellStorageRefAtColumnIndex:(unsigned short)a0 tileRowIndex:(unsigned int)a1;
- (void)clearRowsAtTileRowIndex:(unsigned int)a0 numberOfRows:(unsigned int)a1;
- (void)didApplyConcurrentCellMap:(id)a0;
- (void)enumerateRowsAndIndexesWithBlock:(id /* block */)a0;
- (id)initWithRows:(id)a0 shouldUseWideRows:(BOOL)a1 context:(id)a2;
- (int)insertColumnsAtColumnIndex:(unsigned short)a0 numberOfColumns:(unsigned int)a1;
- (void)insertRowsAtTileRowIndex:(unsigned int)a0 numberOfRows:(unsigned int)a1;
- (void)moveColumnsAtColumnIndex:(unsigned short)a0 numberOfColumns:(unsigned int)a1 toDestColumnIndex:(unsigned short)a2;
- (void)pruneEmptyRows;
- (id)removeColumnsAtColumnIndex:(unsigned short)a0 numberOfColumns:(unsigned int)a1;
- (id)rowInfoAtOrAfterTileRowIndex:(unsigned int)a0 outTileRowIndex:(out unsigned int *)a1;
- (id)rowInfoForTileRowIndex:(unsigned int)a0;
- (long long)setCell:(id)a0 atColumnIndex:(unsigned short)a1 tileRowIndex:(unsigned int)a2;
- (void)setShouldUseWideRows:(BOOL)a0;
- (id)shiftUpAndYankBy:(unsigned int)a0;
- (void)shiftUpAtTileRowIndex:(unsigned int)a0 count:(unsigned int)a1;
- (void)spliceRowInfo:(id)a0 atTileRowIndex:(unsigned int)a1 overwrite:(BOOL)a2;
- (void)spliceRows:(id)a0 atTileRowIndex:(unsigned int)a1;
- (void)swapRowAtTileRowIndex:(unsigned int)a0 withRowAtTileRowIndex:(unsigned int)a1;
- (void)widenAllRowsForUpgrade;
- (id)yankRowInfoAtTileRowIndex:(unsigned int)a0;
- (id)yankRowsAtTileRowIndex:(unsigned int)a0;
- (id)yankRowsAtTileRowIndex:(unsigned int)a0 count:(unsigned int)a1;

@end
