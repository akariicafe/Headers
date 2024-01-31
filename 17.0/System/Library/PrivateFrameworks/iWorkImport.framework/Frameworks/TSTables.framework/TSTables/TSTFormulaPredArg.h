@class NSDate, NSString, TSTFormulaPredArgData, NSArray, TSCECategoryRef, TSTUIDRectRef, TSCEViewTractRef, NSMutableSet, TSCEUndoTractList, NSNumber;

@interface TSTFormulaPredArg : NSObject <NSCopying> {
    TSCECategoryRef *_categoryRef;
    TSCEViewTractRef *_viewTractRef;
    struct RefTypeHolder<TSCECellRef, 0> { struct TSCECellRef { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } coordinate; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } _ref; } _baseCellRef;
    NSArray *_dataList;
    struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int row; short column; BOOL _preserveRow; BOOL _preserveColumn; } relativeCoord; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } tableUID; unsigned char preserveColumn : 1; unsigned char preserveRow : 1; unsigned char isSpanningColumn : 1; unsigned char isSpanningRow : 1; } _relativeCellRef;
    struct TSUPreserveFlags { unsigned char _flags; } _preserveFlags;
    NSMutableSet *_listItemsSet;
}

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) TSTFormulaPredArgData *data;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) double numberValue;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *dataList;
@property (nonatomic) struct TSUPreserveFlags { unsigned char x0; } preserveFlags;
@property (readonly, nonatomic) BOOL preserveColumn;
@property (readonly, nonatomic) BOOL preserveRow;
@property (readonly, nonatomic) BOOL hasRelativeCellRef;
@property (readonly, nonatomic) BOOL hasCategoryRef;
@property (retain, nonatomic) TSCECategoryRef *categoryRef;
@property (readonly, nonatomic) BOOL hasViewTractRef;
@property (retain, nonatomic) TSCEViewTractRef *viewTractRef;
@property (retain, nonatomic) TSCEUndoTractList *uidTractList;
@property (readonly, nonatomic) TSTUIDRectRef *uidRectRef;
@property (nonatomic) double durationValue;
@property (nonatomic) unsigned char durationUnits;
@property (readonly) struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned short x3; BOOL x4; } duration;
@property (nonatomic) struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _coord; } hostCellCoord;
@property (readonly, nonatomic) BOOL needsFormulaRewriting;

+ (id)defaultPredicateArg;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDouble:(double)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBool:(BOOL)a0;
- (id)initWithNumber:(id)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)cellReference;
- (id)initFromArchive:(const void *)a0;
- (const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)relativeCellRef;
- (void)setBaseCellRef:(const void *)a0;
- (const void *)baseCellRef;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })cellRefForHostCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0;
- (id)convertToRelativeRefIfPossible;
- (struct TSCECrossTableReference { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x1; })crossTableRef;
- (struct TSCEFormulaCreator { id /* block */ x0; })formulaCreatorForPredArg;
- (struct TSCEFormulaCreator { id /* block */ x0; })formulaCreatorForPredArg0UsingLinkedRef:(BOOL)a0 useColumnRef:(BOOL)a1;
- (id)initAsBadRefWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 uidTractList:(id)a1;
- (id)initWithBaseCellRef:(const void *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (id)initWithBaseCellReference:(id)a0 preserveColumn:(BOOL)a1 preserveRow:(BOOL)a2;
- (id)initWithCategoryRef:(id)a0;
- (id)initWithCrossTableRef:(const struct TSCECrossTableReference { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x1; } *)a0;
- (id)initWithDataList:(id)a0;
- (id)initWithDuration:(double)a0 units:(unsigned char)a1;
- (id)initWithRelativeCellRef:(const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 uidTractList:(id)a1;
- (id)initWithViewTractRef:(id)a0;
- (BOOL)isBoolValueInList:(BOOL)a0;
- (BOOL)isCellValueInList:(id)a0;
- (BOOL)isDateValueInListYear:(long long)a0 month:(long long)a1 day:(long long)a2;
- (BOOL)isDurationValueInList:(double)a0;
- (BOOL)isEqual:(id)a0 atHostCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (BOOL)isNumberValueInList:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 locale:(id)a1;
- (BOOL)isStringValueInList:(id)a0;
- (id)rewriteWithContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a0 forArgAt:(long long)a1 usingLinkedRef:(BOOL)a2 useColumnRef:(BOOL)a3 hostCellRef:(struct TSCEUidCellRef { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; } *)a4 rewriteBlock:(id /* block */)a5;
- (void)setBaseCellRef:(const void *)a0 preserveColumn:(BOOL)a1 preserveRow:(BOOL)a2;
- (void)setBaseCellRef:(const void *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (void)setBaseCellReference:(id)a0;
- (void)setBaseCellReference:(id)a0 preserveColumn:(BOOL)a1 preserveRow:(BOOL)a2;
- (void)setRelativeCellRef:(const struct TSCERelativeCellRef { struct TSCERelativeCellCoordinate { int x0; short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } *)a0;

@end
