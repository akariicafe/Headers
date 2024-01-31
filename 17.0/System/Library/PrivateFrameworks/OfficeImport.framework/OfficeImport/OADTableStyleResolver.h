@class OADTableStyle, OADTableProperties, OADTable;

@interface OADTableStyleResolver : NSObject {
    OADTable *mTable;
    OADTableProperties *mTableProperties;
    OADTableStyle *mTableStyle;
    int mColumnCount;
    int mRowCount;
    void *mCellMatrix;
    void *mCellStyles;
    void *mStrokes[2];
}

- (void)dealloc;
- (id)initWithTable:(id)a0;
- (void).cxx_destruct;
- (void)flatten;
- (void)applyCellStyles;
- (int)cellParityRelativeToDir1:(int)a0 i1:(int)a1 i2:(int)a2;
- (void)fixVectorAtExtremePositionFlags;
- (void)applyBandCellStyles;
- (void)applyBandStrokes;
- (void)applyCellStyleFromPart:(int)a0 dir1:(int)a1 fromI1:(int)a2 fromI2:(int)a3 dir1Span:(int)a4 dir2Span:(int)a5;
- (void)applyCellStyleOfBandsNormalToDir:(int)a0 parity:(int)a1 part:(int)a2;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)a0 atExtremePos:(int)a1 part:(int)a2;
- (void)applyCornerCellStyleWithRowPos:(int)a0 columnPos:(int)a1 part:(int)a2;
- (void)applyCornerCellStyles;
- (void)applyCornerStrokes;
- (void)applyCornerStrokesWithRowPos:(int)a0 columnPos:(int)a1 part:(int)a2;
- (void)applyExtremeVectorCellStyles;
- (void)applyExtremeVectorStrokes;
- (void)applyResolvedPartStyle:(id)a0 leftStroke:(id)a1 rightStroke:(id)a2 topStroke:(id)a3 bottomStroke:(id)a4 toCell:(id)a5;
- (void)applyResolvedStyling;
- (void)applyStroke:(int)a0 fromPart:(int)a1 normalToDir1:(int)a2 i1:(int)a3 fromI2:(int)a4 dir2Span:(int)a5;
- (void)applyStroke:(int)a0 fromPart:(int)a1 normalToDir1:(int)a2 i1:(int)a3 fromI2:(int)a4 toI2:(int)a5;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)a0 atExtremePos:(int)a1;
- (void)applyStrokesFromPart:(int)a0 fromPos:(struct OADTMatrixPos { int x0; int x1; })a1 toPos:(struct OADTMatrixPos { int x0; int x1; })a2;
- (void)applyStrokesOfBandsNormalToDir:(int)a0 parity:(int)a1 part:(int)a2;
- (void)applyStyleStrokes;
- (void)applyTextStyle:(id)a0 toCell:(id)a1;
- (void)applyTextStyle:(id)a0 toParagraph:(id)a1;
- (void)applyWholeTableCellStyle;
- (void)applyWholeTableStrokes;
- (int)cellCountAlongDir:(int)a0;
- (void)createStrokeMatrices;
- (struct OADTMatrixPos { int x0; int x1; })dominantCellInRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)loadCells;
- (void)setStroke:(id)a0 ofSegmentNormalToDir1:(int)a1 i1:(int)a2 fromI2:(int)a3;
- (id)sourceCellAtI1:(int)a0 i2:(int)a1 dir1:(int)a2;
- (id)strokeOfSegmentNormalToDir1:(int)a0 i1:(int)a1 fromI2:(int)a2;

@end
