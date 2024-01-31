@interface EMDrawableMapper : CMDrawableMapper {
    double *mRowGrid;
    double *mColumnGrid;
}

+ (BOOL)isAnchorRelative:(id)a0;

- (id)worksheetMapper;
- (struct CGPoint { double x0; double x1; })anchorMarkerToPosition:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0 rowGrid:(double *)a1 columnGrid:(double *)a2 start:(BOOL)a3 relative:(BOOL)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageRect;
- (id)initWithChartDrawable:(id)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (id)initWithOADDrawable:(id)a0 parent:(id)a1;
- (id)initWithOADDrawable:(id)a0 rowGrid:(double *)a1 columnGrid:(double *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapAnchorToRect:(id)a0 rowGrid:(double *)a1 columnGrid:(double *)a2;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapBounds;
- (void)mapChartAt:(id)a0 withState:(id)a1;
- (void)mapDiagramAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtGroupAt:(id)a0 withState:(id)a1;
- (void)mapOfficeArtShapeAt:(id)a0 withState:(id)a1;
- (void)mapTextBoxAt:(id)a0 withState:(id)a1;
- (void)setBoundingBox;
- (id)workbookMapper;

@end
