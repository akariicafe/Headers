@class EDRowBlock;

@interface EMRowMapper : CMMapper {
    EDRowBlock *mRowBlock;
    struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *mRowInfo;
    double *columnGrid;
    unsigned long long columnCount;
}

+ (void)mapEmptyRowAt:(id)a0 colspan:(unsigned long long)a1 height:(double)a2;

- (void).cxx_destruct;
- (BOOL)isColumnHidden:(unsigned long long)a0;
- (struct EDCellHeader { unsigned int x0; unsigned int x1; } *)cellWithColumnNumber:(unsigned long long)a0;
- (id)initWithEDRowBlock:(id)a0 rowInfo:(struct EDRowInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; unsigned char x6; unsigned char x7 : 1; unsigned char x8 : 1; } *)a1 parent:(id)a2;
- (void)insertEmptyCellAt:(id)a0 withColSpan:(unsigned long long)a1 height:(double)a2;
- (BOOL)isMergedCell:(struct EDCellHeader { unsigned int x0; unsigned int x1; } *)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapEmptyCellsAt:(id)a0 withState:(id)a1 firstColumn:(unsigned long long)a2 lastColumn:(unsigned long long)a3;

@end
