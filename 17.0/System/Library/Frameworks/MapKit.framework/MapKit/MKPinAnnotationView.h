@class UIColor, UIImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView {
    UIImageView *_shadowView;
    UIColor *_pinTintColor;
    int _state;
    BOOL _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id<_MKPinAnnotationViewDelegate> _delegate;
@property (retain, nonatomic) UIColor *pinTintColor;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;

+ (Class)layerClass;
+ (id)_imageCache;
+ (id)_reuseIdentifier;
+ (id)_shadowImage;
+ (id)_bounceAnimation;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (id)_dropBounceAnimation;
+ (id)_imageForLayer:(long long)a0 state:(long long)a1 mapType:(unsigned long long)a2 traits:(id)a3;
+ (id)_imageForState:(long long)a0 mapType:(unsigned long long)a1 pinColor:(id)a2 traits:(id)a3;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (Class)_mapkitLeafClass;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })a0;
+ (id)_pinsWithMapType:(unsigned long long)a0 pinColor:(id)a1 traits:(id)a2;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (id)redPinColor;

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_invalidateImage;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (int)_state;
- (void)_removeAllAnimations;
- (void)setHighlighted:(BOOL)a0;
- (void)animationDidStart:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)_image;
- (id)_highlightedImage;
- (void)_updateShadowLayer;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (id)_bounceAnimation:(BOOL)a0 withDelay:(double)a1 addToLayer:(BOOL)a2;
- (void)_cleanupAfterPinDropAnimation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_didUpdatePosition;
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)a0 animated:(BOOL)a1;
- (void)_dropFromDistance:(double)a0 maxDistance:(double)a1 withDelay:(double)a2;
- (id)_floatingImage;
- (void)_liftDidEnd:(id)a0;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)a0;
- (void)_liftForDraggingAnimated:(BOOL)a0;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_pins;
- (void)_setMapType:(unsigned long long)a0;
- (void)_setRotationRadians:(double)a0 withAnimation:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (void)_stopDrop;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })a0 alignToPixels:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;

@end
