@interface PUQuickCropContext : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectRelativeToRenderedImage;
@property (nonatomic) struct CGSize { double width; double height; } renderedImageSize;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;
@property (nonatomic) BOOL lockAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } selectedAspectRatio;

- (id)applyCropToAssetTransitionInfo:(id)a0;
- (struct CGImage { } *)_croppedCGImageForTransition:(struct CGImage { } *)a0;
- (id)_croppedSnapshotViewForTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedCropRectForTransition;
- (void)applyCropRectToCompositionController:(id)a0;
- (id)initWithTileTransform:(id)a0 renderedImageSize:(struct CGSize { double x0; double x1; })a1 boundingSize:(struct CGSize { double x0; double x1; })a2 selectedAspectRatio:(struct CGSize { double x0; double x1; })a3;

@end
