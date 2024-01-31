@class UIColor, UIBezierPath, _UIDragPreviewShadowProperties, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying> {
    struct CGSize { double width; double height; } _contentSize;
    struct CAPoint3D { double x; double y; double z; } _originalCenterInCoordinateSpace;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } viewScaleFactor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } boundingSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } croppedScaledSize;
@property (readonly, nonatomic) double liftAlpha;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } liftTransform;
@property (nonatomic) BOOL hidesSourceView;
@property (copy, nonatomic) UIBezierPath *outline;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (copy, nonatomic) _UIDragPreviewShadowProperties *shadowProperties;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } overrideStackTransform;
@property (nonatomic) struct CGPoint { double x; double y; } initialBadgeLocation;
@property (nonatomic) struct CGPoint { double x; double y; } originalCenter;
@property (nonatomic) struct CGPoint { double x0; double x1; } originalCenterInCoordinateSpace;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic) double originalRotation;
@property (readonly, nonatomic, getter=isOversized) BOOL oversized;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scaledSize;
@property (readonly, nonatomic) double stackAlpha;
@property (nonatomic) BOOL textMode;
@property (nonatomic) long long previewMode;
@property (readonly, nonatomic) double topAlpha;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } unscaledAnchorPoint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } unscaledSize;
@property (readonly, nonatomic) UIDragPreviewParameters *parameters;
@property (nonatomic) struct CGPoint { double x; double y; } liftAnchorPoint;
@property (nonatomic) BOOL avoidAnimation;
@property (nonatomic) BOOL wantsSuppressedMask;
@property (nonatomic) long long preferredStackOrder;

+ (id)defaultPreviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)defaultStackAlpha;

- (id)init;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)encodeWithCoder:(id)a0;
- (double)_topOffset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })originalCenterInCoordinateSpace;
- (void)_applyPropertiesFromPreviewParameters:(id)a0;
- (id)_initWithView:(id)a0 container:(id)a1 parameters:(id)a2 platformCenter:(struct CAPoint3D { double x0; double x1; double x2; })a3;
- (double)backAlpha;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outline:(id)a1;
- (id)initWithView:(id)a0 container:(id)a1 parameters:(id)a2;
- (id)initWithView:(id)a0 container:(id)a1 parameters:(id)a2 center:(struct CGPoint { double x0; double x1; })a3;
- (void)setOriginalCenterInCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;

@end
