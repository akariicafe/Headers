@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper {
    unsigned long long mColumnCount;
    unsigned long long mRowCount;
    float mRectWidth;
    float mRectHeight;
    BOOL mHasArrows;
    BOOL mIsSnake;
    BOOL mIsHorizontal;
    BOOL mIsLinear;
}

- (unsigned long long)columnCount;
- (struct CGSize { double x0; double x1; })gapSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circumscribedBounds;
- (double)gapRatio;
- (id)initWithOddDiagram:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 identifier:(id)a3 parent:(id)a4;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (void)setColumnsAndRowsCount;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;

@end
