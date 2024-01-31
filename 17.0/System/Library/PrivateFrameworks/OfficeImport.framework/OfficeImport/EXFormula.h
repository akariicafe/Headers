@interface EXFormula : NSObject

+ (void)applyArrayedFormula:(id)a0 edReference:(id)a1 edWorksheet:(id)a2 state:(id)a3;
+ (void)applyArrayedFormulasToSheet:(id)a0 state:(id)a1;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 formulaClass:(Class)a1 state:(id)a2;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)edTokensForFormulaString:(id)a0 formulaClass:(Class)a1 rowNumber:(int)a2 columnNumber:(int)a3 sheet:(id)a4 workbook:(id)a5;
+ (id)edTokensForFormulaString:(id)a0 sheet:(id)a1 workbook:(id)a2;
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 state:(id)a1;
+ (id)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 formulaClass:(Class)a1 rowNumber:(int)a2 columnNumber:(int)a3 edCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a4 edRowBlocks:(id)a5 state:(id)a6;
+ (void)readFrom:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 rowNumber:(int)a1 columnNumber:(int)a2 edCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a3 edRowBlocks:(id)a4 state:(id)a5;

@end
