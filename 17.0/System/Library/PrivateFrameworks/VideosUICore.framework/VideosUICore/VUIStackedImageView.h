@class _UIStackedImageConfiguration, NSShadow, UIImage, UIView, NSString, UIMotionEffectGroup, _UIStackedImageContainerLayer, VUIStackedImageNamedLayerStack, VUIImageProxy;

@interface VUIStackedImageView : UIView <VUIAuxiliaryViewSelecting> {
    UIImage *_staticImage;
    _UIStackedImageContainerLayer *_imageStackLayer;
    _UIStackedImageConfiguration *_imageStackConfig;
    VUIStackedImageNamedLayerStack *_uiLayerStack;
    UIMotionEffectGroup *_motionEffectGroup;
    double _layerSelectionDuration;
    double _layerUnselectionDuration;
    double _shadowSelectionDuration;
    double _shadowUnselectionDuration;
    double _repositionUnselectionDuration;
}

@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (nonatomic) struct CGSize { double width; double height; } stackSize;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double focusSizeIncrease;
@property (copy, nonatomic) NSShadow *shadow;
@property (nonatomic) BOOL allowsNonOpaqueShadow;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, getter=isOverlayComposited) BOOL overlayComposited;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *unmaskedOverlayView;
@property (nonatomic) unsigned long long controlState;
@property (readonly, nonatomic) unsigned long long primaryControlState;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (struct CGSize { double x0; double x1; })_scaledSizeForSize:(struct CGSize { double x0; double x1; })a0 focusSizeIncrease:(double)a1 selectionStyle:(long long)a2;
+ (struct CGSize { double x0; double x1; })_scaledSizeForSize:(struct CGSize { double x0; double x1; })a0 selectionStyle:(long long)a1;

- (void)setFocused:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_applyKeyPathsAndRelativeValues:(id)a0 forMotionEffect:(id)a1;
- (double)_idleModeFocusSizeOffset;
- (id)_layerBelowTitles;
- (void)_setFocusDirection:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)setControlState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setControlState:(unsigned long long)a0 animated:(BOOL)a1 focusAnimationCoordinator:(id)a2;
- (void)setFocusDirection:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 focusAnimationCoordinator:(id)a2;
- (id)_imageConfiguration;
- (void)setPressed:(BOOL)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)_attachMotionEffects;
- (void)_commitLayerStack:(id)a0;
- (void)_detachMotionEffects;
- (id)_layeredImageContainerLayer;
- (void)_loadImage;
- (id)_newImageConfiguration;
- (void)_resetShadowSettings;
- (void)_setShadowOpacity:(double)a0;
- (void)_setShadowRadius:(double)a0;
- (void)_setShadowVerticalOffset:(double)a0;
- (void)_updateImageSamplingOverlays;
- (void)_updateLayerStack:(id)a0 withImage:(struct CGImage { } *)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)_updateStackedImageConfiguration;
- (void)animateWithAuxiliarySelectionState:(BOOL)a0 animations:(id /* block */)a1;
- (id)initWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImageProxy:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;

@end
