@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}

+ (void)applyTextStyle:(id)a0 toParagraphProperties:(id)a1;

- (id)grid;
- (id)init;
- (unsigned long long)rowCount;
- (id)description;
- (void).cxx_destruct;
- (id)rowAtIndex:(unsigned long long)a0;
- (id)tableProperties;
- (struct OADTMatrixPos { int x0; int x1; })masterPosOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (id)addRow;
- (id)cellAtPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)flattenStyle;
- (void)flipTableRTL;
- (id)masterCellOfPos:(struct OADTMatrixPos { int x0; int x1; })a0;
- (void)setParentTextListStyle:(id)a0;

@end
