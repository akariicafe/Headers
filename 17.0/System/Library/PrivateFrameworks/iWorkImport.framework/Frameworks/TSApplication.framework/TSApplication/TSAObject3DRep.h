@class NSString, TSDImageDrawingHelper, TSAObject3DInfo;

@interface TSAObject3DRep : TSDRep <TSDImageDrawingDataSource, CALayerDelegate> {
    TSDImageDrawingHelper *_drawingHelper;
    BOOL _isDynamicallyChangingPose;
    BOOL _knobsLastUpdatedForExclusiveSelection;
}

@property (readonly, nonatomic) TSAObject3DInfo *object3DInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)willBeRemoved;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (id)p_validatedImageProvider;
- (id)textureForDescription:(id)a0;
- (id)imageDrawingHelperAdjustedImageData:(id)a0;
- (id)imageDrawingHelperImageData:(id)a0;
- (BOOL)imageDrawingHelperImageHasAlpha:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageDrawingHelperImageRect:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)a0;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)a0;
- (id)imageDrawingHelperThumbnailImageData:(id)a0;
- (id)object3DLayout;
- (BOOL)shouldShowCheckerboard;

@end
