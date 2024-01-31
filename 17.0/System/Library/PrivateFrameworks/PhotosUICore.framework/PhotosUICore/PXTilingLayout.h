@class PXTilingCoordinateSpace, PXTilingScrollInfo;
@protocol PXTilingLayoutObserver;

@interface PXTilingLayout : NSObject

@property (weak, nonatomic) id<PXTilingLayoutObserver> observer;
@property (readonly, nonatomic) PXTilingCoordinateSpace *coordinateSpace;
@property (readonly, nonatomic) BOOL shouldFlipHorizontally;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) struct CGSize { double width; double height; } visibleSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) struct CGPoint { double x; double y; } visibleOrigin;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollBounds;
@property (readonly, copy, nonatomic) PXTilingScrollInfo *scrollInfo;
@property (readonly, nonatomic) void *coordinateSpaceIdentifier;
@property (readonly, nonatomic) BOOL allowHorizontalFlip;

- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOptions:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; } *)a0 group:(unsigned long long *)a1 userData:(id *)a2 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a3;

@end
