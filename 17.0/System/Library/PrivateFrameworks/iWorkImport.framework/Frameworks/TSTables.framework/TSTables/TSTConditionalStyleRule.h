@class NSString, TSCEFormulaObject, TSWPParagraphStyle, TSTFormulaPredicate, TSTCellStyle;

@interface TSTConditionalStyleRule : NSObject <NSCopying> {
    TSTFormulaPredicate *_predicate;
    TSWPParagraphStyle *_textStyle;
    TSTCellStyle *_cellStyle;
}

@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property (readonly, nonatomic) NSString *predicateDescription;
@property (readonly, nonatomic) unsigned char predicateType;
@property (readonly, copy, nonatomic) TSTCellStyle *cellStyle;
@property (readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;

+ (id)conditionalStyleRuleWithRule:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)containsUidReferences;
- (id)copyByClearingUids:(id)a0 containingTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset { int x0; int x1; })a0;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const void *)a0 rewriteContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a1 error:(BOOL *)a2;
- (id)copyByRemappingOwnerUIDsWithMap:(const void *)a0 rewriteContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a1 error:(BOOL *)a2;
- (id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a0 rewriteBlock:(id /* block */)a1;
- (id)copyByRewritingWithSpec:(id)a0 inOwner:(id)a1 inCellCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)copyToUidFormForTableInfo:(id)a0 inCellCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 preserveHostCell:(BOOL)a2;
- (BOOL)evaluateFormulaAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 withCalcEngine:(id)a1 onOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)getPrecedents:(void *)a0 calcEngine:(id)a1 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 hostCellID:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a3;
- (BOOL)hasBadRefWithUidInfo;
- (id)initWithPredicate:(id)a0 cellStyle:(id)a1 textStyle:(id)a2;
- (BOOL)isEqualForInspector:(id)a0;
- (void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x2; } *)a0 shouldStop:(BOOL *)a1 block:(id /* block */)a2;
- (id)privateCellStyle;
- (id)privateTextStyle;
- (void)setCellStyle:(id)a0 textStyle:(id)a1;
- (void)setHostCell:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 hostColumnUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 hostRowUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;

@end
