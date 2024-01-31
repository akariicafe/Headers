@class TNPageController;

@interface TNPageLayoutAbstract : TSWPPageLayout

@property struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } pageCoordinate;
@property (weak) TNPageController *pageController;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pageBounds;

- (id)description;
- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithPageController:(id)a0 pageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;

@end
