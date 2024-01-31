@class TSWPStorage;

@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage *mFormulaError;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithFormulaError:(id)a0;

@end
