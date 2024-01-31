@class CMDrawingContext, OADShape;

@interface PMDrawableMapper : CMDrawableMapper {
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}

- (void).cxx_destruct;
- (id)drawingContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slideRect;
- (BOOL)isTopLevelMapper;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapBounds;
- (void)mapChartAt:(id)a0 withState:(id)a1;
- (void)mapDiagramAt:(id)a0 withState:(id)a1;
- (void)mapFreeForm:(id)a0 orientedBounds:(id)a1 transformedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 state:(id)a3;
- (void)mapOfficeArtGroupAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtImageAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtShapeAt:(id)a0 withState:(id)a1;
- (void)mapRectangularShapeAt:(id)a0 withState:(id)a1;
- (void)mapShapeAsBackgroundAt:(id)a0 withState:(id)a1;
- (void)setDrawingContext:(id)a0;
- (void)setTopLevelMapper:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeTextBoxWithState:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformRectToPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
