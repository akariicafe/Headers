@class NSTimer;

@interface PVPanAndZoomManager : NSObject {
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformTranslate;
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformScale;
    struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } _workingTransformRotate;
    BOOL _isEditingTranslate;
    BOOL _isEditingScale;
    BOOL _isEditingRotate;
    double _mediaAspectRatio;
    double _viewAspectRatio;
    double _minScale;
    double _adjustedMaxScale;
    BOOL _skipFirstSnap;
    double _scaleWhileSnapped;
    NSTimer *_snapTimer;
}

@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) int fillMode;
@property (nonatomic) double maxScale;
@property (nonatomic) double zoomSnapScale;
@property (nonatomic) BOOL isZoomSnapEnabled;
@property (nonatomic) double zoomSnapThreshold;
@property (nonatomic) BOOL isTranslationDirectionLockEnabled;
@property (nonatomic) double translationDirectionLockThreshold;
@property (nonatomic) BOOL disableTranslation;
@property (nonatomic) BOOL disableScale;
@property (nonatomic) BOOL disableRotation;

+ (double)calculateMaxScale:(double)a0 forMediaAspectRatio:(double)a1 viewAspectRatio:(double)a2 fillMode:(int)a3;
+ (struct CGPoint { double x0; double x1; })adjustPositionToKeepMediaInViewBounds:(struct CGPoint { double x0; double x1; })a0 scale:(double)a1 minScale:(double)a2 mediaAspectRatio:(double)a3 viewAspectRatio:(double)a4 fillMode:(int)a5 outNeedsUpdate:(out BOOL *)a6;
+ (double)calculateMinScaleForMediaAspectRatio:(double)a0 viewAspectRatio:(double)a1 fillMode:(int)a2;
+ (struct CGPoint { double x0; double x1; })maximumNormalizedPositionForScale:(double)a0 minScale:(double)a1 position:(struct CGPoint { double x0; double x1; })a2 mediaAspectRatio:(double)a3 viewAspectRatio:(double)a4 fillMode:(int)a5;
+ (double)maximumNormalizedPositionInAxisForScale:(double)a0 minScale:(double)a1 isMediaAxisNormal:(BOOL)a2 isPositionBelowZero:(BOOL)a3;
+ (id)panAndZoomManagerWithMediaSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 fillMode:(int)a2 maxScale:(double)a3;
+ (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })transformAnimInfoForScale:(double)a0 atNormalizedLocationInView:(struct CGPoint { double x0; double x1; })a1 minScale:(double)a2 currentScale:(double)a3 currentTranslation:(struct CGPoint { double x0; double x1; })a4 mediaAspectRatio:(double)a5 viewAspectRatio:(double)a6 fillMode:(int)a7 outNeedsUpdate:(out BOOL *)a8;

- (void).cxx_destruct;
- (BOOL)isEditing;
- (void)cancelEditing;
- (void)cancelSnapTimer;
- (void)beginEditingTransform:(struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })a0 transformType:(int)a1 updateOtherWorkingTransforms:(BOOL)a2;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })endEditingTransformForType:(int)a0;
- (id)initWithMediaSize:(struct CGSize { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 fillMode:(int)a2 maxScale:(double)a3;
- (BOOL)isEditingTransformType:(int)a0;
- (void)onSnapTimer:(id)a0;
- (void)setIsEditingTransform:(BOOL)a0 type:(int)a1;
- (void)updateMaxScale;
- (void)updateMediaAspectRatio;
- (void)updateMinScale;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })updateRotation:(double)a0 normalizedLocationInView:(struct CGPoint { double x0; double x1; })a1 outNeedsUpdate:(out BOOL *)a2;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })updateScale:(double)a0 normalizedLocationInView:(struct CGPoint { double x0; double x1; })a1 outNeedsUpdate:(out BOOL *)a2;
- (struct PVTransformAnimationInfo { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })updateTranslation:(struct CGPoint { double x0; double x1; })a0 outNeedsUpdate:(out BOOL *)a1;
- (void)updateViewAspectRatio;

@end
