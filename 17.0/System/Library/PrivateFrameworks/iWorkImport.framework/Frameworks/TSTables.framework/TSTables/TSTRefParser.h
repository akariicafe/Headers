@class TSCECalculationEngine, NSString, TSCEStringManipulator, NSCharacterSet;

@interface TSTRefParser : NSObject <TSCERefParsingProtocol> {
    TSCEStringManipulator *_stringManipulator;
}

@property (retain, nonatomic) NSCharacterSet *whitespaceCharSet;
@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })p_baseRangeRefForChromeRangeRef:(struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })a0 calcEngine:(id)a1;
+ (id)p_baseReferenceForChromeReference:(id)a0 calcEngine:(id)a1;
+ (id)p_baseReferencesForChromeReferences:(id)a0 calcEngine:(id)a1;
+ (struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })p_chromeRangeRefForBaseRangeRef:(struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })a0 calcEngine:(id)a1;
+ (id)p_chromeReferenceForBaseReference:(id)a0 calcEngine:(id)a1;
+ (id)p_chromeReferencesForMixedReferences:(id)a0 calcEngine:(id)a1;

- (void).cxx_destruct;
- (id)initWithCalcEngine:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })p_findFirstColumnNameInComponent:(id)a0 tableName:(id)a1 refResolver:(id)a2 calcEngine:(id)a3 outPreserveFlags:(struct TSUPreserveFlags { unsigned char x0; } *)a4 usedWordCount:(unsigned long long *)a5;
- (id)p_parseAsCategoryRefWithSheet:(id)a0 tableName:(id)a1 columnNameAndGroupValuesStartAt:(unsigned long long)a2 withParsingContext:(id)a3;
- (BOOL)p_parseComponentsOfReference:(id)a0 gettingSheetName:(id *)a1 gettingTableName:(id *)a2 gettingRest:(id *)a3;
- (struct TSUChromeCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })p_parseStringAsGeometricReferenceComponent:(id)a0 inResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a1 outPreserveFlags:(struct TSUPreserveFlags { unsigned char x0; } *)a2 gettingReferencesMatchingInputAsPrefix:(id *)a3;
- (struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })p_parseStringAsReferenceComponentIntersection:(id)a0 inResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a1 inTableNamed:(id)a2 preferredGeometricResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a3 withParsingContext:(id)a4;
- (id)parseAsCategoryRefWithParsingContext:(id)a0;
- (id)parseAsChromeRefWithParsingContext:(id)a0;
- (id)parseAsTractRefWithParsingContext:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })parseR1C1Coord:(id)a0 containingCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 preserveFlagsOut:(struct TSUPreserveFlags { unsigned char x0; } *)a2;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })parseR1C1Reference:(id)a0 containingCell:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 preserveFlagsOut:(struct TSUPreserveFlags { unsigned char x0; } *)a2;
- (struct RefTypeHolder<TSCERangeRef, 0> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })parseStringAsBaseReference:(id)a0 withParsingContext:(id)a1;
- (id)parseStringAsCategoryRef:(id)a0 withParsingContext:(id)a1;
- (struct RefTypeHolder<TSCERangeRef, 2> { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; })parseStringAsChromeReference:(id)a0 withParsingContext:(id)a1;

@end
