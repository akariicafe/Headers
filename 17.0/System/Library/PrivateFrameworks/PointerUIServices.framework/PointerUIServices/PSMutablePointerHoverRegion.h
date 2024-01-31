@class NSArray, PSPointerPortalSourceCollection, NSValue, PSMatchMoveSource, PSPointerShape;

@interface PSMutablePointerHoverRegion : PSPointerHoverRegion <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) double contentHoverInverseScale;
@property (copy, nonatomic) NSValue *contentSlipValue;
@property (copy, nonatomic) PSMatchMoveSource *contentMatchMoveSource;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hitTestBounds;
@property (nonatomic, getter=isOverlayEffectVisible) BOOL overlayEffectVisible;
@property (nonatomic) long long overlayEffectStyle;
@property (copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (nonatomic) unsigned long long pointerRecenteringAxes;
@property (nonatomic) unsigned long long pointerLatchingAxes;
@property (copy, nonatomic) PSPointerShape *pointerShape;
@property (copy, nonatomic) NSValue *pointerSlipValue;
@property (nonatomic) double pointerVisualIntensity;
@property (nonatomic) unsigned long long preferredPointerMaterialLuminance;
@property (nonatomic) BOOL shouldPointerUnderlayContent;
@property (nonatomic) BOOL shouldPointerSuppressMirroring;
@property (copy, nonatomic) NSArray *accessories;


- (void)setAccessories:(id)a0;
- (void)setPointerPortalSourceCollection:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentHoverInverseScale:(double)a0;
- (void)setContentMatchMoveSource:(id)a0;
- (void)setContentSlipValue:(id)a0;
- (void)setCoordinateSpaceSourceContextID:(unsigned int)a0;
- (void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)a0;
- (void)setOverlayEffectStyle:(long long)a0;
- (void)setPointerLatchingAxes:(unsigned long long)a0;
- (void)setPointerRecenteringAxes:(unsigned long long)a0;
- (void)setPointerShape:(id)a0;
- (void)setPointerSlipValue:(id)a0;
- (void)setPointerVisualIntensity:(double)a0;
- (void)setPreferredPointerMaterialLuminance:(unsigned long long)a0;
- (void)setShouldPointerSuppressMirroring:(BOOL)a0;
- (void)setShouldPointerUnderlayContent:(BOOL)a0;
- (void)setHitTestBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOverlayEffectVisible:(BOOL)a0;

@end
