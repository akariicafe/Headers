@interface EBFormula : NSObject

+ (id)edFormulaFromXlFmlaDefinition:(const void *)a0 withFormulaLength:(int)a1 formulaClass:(Class)a2 state:(id)a3;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)a0 withFormulaLength:(int)a1 state:(id)a2;
+ (id)edFormulaFromXlFmlaDefinition:(const void *)a0 withTokenLength:(int)a1 formulaLength:(int)a2 formulaClass:(Class)a3 edSheet:(id)a4 state:(id)a5;
+ (char *)edFormulaToParsedExpression:(id)a0 tokenLength:(unsigned short *)a1 formulaLength:(unsigned short *)a2 state:(id)a3;
+ (void)readFormulaFromXlCell:(struct XlCell { void /* function */ **x0; unsigned short x1; short x2; short x3; int x4; double x5; struct XlString *x6; int x7; struct XlFormulaInfo *x8; BOOL x9; BOOL x10; BOOL x11; } *)a0 edCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a1 edRowBlocks:(id)a2 state:(id)a3;
+ (void)setupTokensInEDFormulaFromXlFormulaProcessor:(void *)a0 length:(int)a1 edFormula:(id)a2 edSheet:(id)a3;
+ (unsigned int)writeToken:(id)a0 tokenIndex:(unsigned int)a1 tokenStream:(struct XLFormulaStream { void /* function */ **x0; } *)a2 extendedStream:(struct XLFormulaStream { void /* function */ **x0; } *)a3 state:(id)a4;
+ (struct XlFormulaInfo { void /* function */ **x0; int x1; struct OcText *x2; char *x3; unsigned int x4; short x5; struct XlShrFmla *x6; struct XlArray *x7; struct XlTable *x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)xlFormulaInfoFromEDFormula:(id)a0 state:(id)a1;
+ (struct XlFormulaInfo { void /* function */ **x0; int x1; struct OcText *x2; char *x3; unsigned int x4; short x5; struct XlShrFmla *x6; struct XlArray *x7; struct XlTable *x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)xlFormulaInfoFromEDSharedFormula:(id)a0 state:(id)a1;

@end
