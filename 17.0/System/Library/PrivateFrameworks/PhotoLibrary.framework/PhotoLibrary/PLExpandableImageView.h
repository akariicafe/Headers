@class NSString, PLManagedAsset, PLImageView, PLVideoView;

@interface PLExpandableImageView : PLExpandableView {
    PLImageView *_imageView;
    int _imageID;
    struct CGSize { double width; double height; } _originalSize;
    double _originalWidth;
    double _originalAngle;
    struct CGPoint { double x; double y; } _anchorPoint;
    double _imageRotationAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialExpandingFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalBounds;
    float _currentAngle;
    struct CGSize { double width; double height; } _centerOffset;
    struct { unsigned char isRotating : 1; unsigned char didTrack : 1; unsigned char updateFrame : 1; unsigned char didLayout : 1; unsigned char alwaysDoLayout : 1; unsigned char didComputeCenterOffset : 1; unsigned char imageIsFullScreen : 1; } _exImageFlags;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (retain, nonatomic) PLVideoView *videoView;
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property (retain, nonatomic) PLManagedAsset *photo;

+ (double)imageBorderWidth;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)image;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_contentView;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)setTransitionProgress:(double)a0;
- (double)transitionProgress;
- (id)imageView;
- (BOOL)isShadowEnabled;
- (float)_currentScale;
- (void)finishTransition;
- (void)setShadowEnabled:(BOOL)a0;
- (float)_borderAlphaForExpansionFraction:(float)a0;
- (void)_bounceBack:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_bounceToPlace:(id)a0 finished:(id)a1 context:(void *)a2;
- (float)_expandedScale;
- (float)_expansionFraction;
- (struct CGSize { double x0; double x1; })_newSizeFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snappedExpandedFrame;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { double x0; double x1; })a0 rightPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)beginTrackingPinch:(id)a0;
- (float)completeTrackingPinch:(id)a0 toState:(int)a1 duration:(double)a2;
- (float)continueTrackingPinch:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfImage;
- (double)imageRotationAngle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameStyle:(int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameStyle:(int)a1 withBorder:(BOOL)a2;
- (BOOL)isBeingManipulated;
- (void)renderSnapshotInContext:(struct CGContext { } *)a0;
- (void)setFullSizeImageJPEGData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;
- (void)setImage:(id)a0 isFullscreen:(BOOL)a1;
- (void)setShowsPlaceholder:(BOOL)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 angle:(float)a1;
- (void)setTextBadgeString:(id)a0;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stateDidChangeFrom:(int)a0;

@end
