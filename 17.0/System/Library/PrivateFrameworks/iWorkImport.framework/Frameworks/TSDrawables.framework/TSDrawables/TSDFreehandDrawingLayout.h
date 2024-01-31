@class TSDFreehandDrawingInfo;

@interface TSDFreehandDrawingLayout : TSDGroupLayout

@property (nonatomic) double p_dynamicOpacity;
@property (nonatomic, getter=p_isUpdatingOpacity) BOOL p_updatingOpacity;
@property (readonly, nonatomic) double i_scaleForInlineClampingChildLayouts;
@property (readonly, nonatomic) TSDFreehandDrawingInfo *freehandInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForMovieExport;
@property (readonly, nonatomic) BOOL shouldSpacerShapeProvideSpace;
@property (readonly, nonatomic) double opacity;

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)initWithInfo:(id)a0;
- (id)computeLayoutGeometry;
- (id)descendentWrappables;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (BOOL)shouldSnapWhileResizing;
- (id)childInfosForChildLayouts;
- (BOOL)descendentWrappablesContainsWrappable:(id)a0;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;
- (id)childrenForPencilAnnotations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForCaptionEdgeInsetsCalculation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBoundsForStandardKnobs;
- (id)p_sizeEnforcingChild;

@end
