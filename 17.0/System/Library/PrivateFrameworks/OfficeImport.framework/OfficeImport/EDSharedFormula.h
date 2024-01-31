@class EDReference;

@interface EDSharedFormula : EDFormula

@property (nonatomic) unsigned long long baseFormulaIndex;
@property (nonatomic) BOOL forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset;
@property (nonatomic) int columnBaseOrOffset;
@property (readonly, nonatomic) EDReference *baseFormulaRange;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isSharedFormula;
- (void)archiveByAppendingToMutableData:(struct __CFData { } *)a0;
- (id)baseFormulaWithRowBlocks:(id)a0;
- (BOOL)convertTokensToShared;
- (id)initWithFormula:(id)a0;
- (BOOL)isBaseFormula;
- (void)unarchiveFromData:(struct __CFData { } *)a0 offset:(unsigned long long *)a1;
- (void)updateBaseFormulaRangeWithRow:(int)a0 column:(int)a1;
- (id)warningWithRowBlocks:(id)a0;

@end
