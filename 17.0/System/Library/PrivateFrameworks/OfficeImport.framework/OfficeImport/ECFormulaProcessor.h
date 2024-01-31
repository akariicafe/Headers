@interface ECFormulaProcessor : NSObject {
    void *mXlFormulaProcessorLasso;
    void *mXlFormulaProcessorXl;
    void *mXlNameTable;
    void *mLassoSheetNames;
    void *mXlSheetNames;
    void *mXlLinkTable;
}

+ (id)formulaStringForEDFormula:(id)a0 edWorksheet:(id)a1 xlFormulaProcessor:(void *)a2;

- (id)init;
- (void)dealloc;
- (void)setupWithWorkbook:(id)a0;
- (void *)setupWithWorkbook:(id)a0 xlNameTable:(void *)a1 sheetNames:(void *)a2 xlLinkTable:(void *)a3 lassoSyntax:(BOOL)a4;
- (void *)sheetNamesFromWorkbook:(id)a0;
- (void *)xlFormulaProcessorLasso;
- (void *)xlFormulaProcessorXl;

@end
