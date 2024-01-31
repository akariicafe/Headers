@class LAUIMetalRenderLoop, NSString, UIView, LAUICheckmarkLayer, CALayer, CAShapeLayer, LAUIPearlGlyphViewStaticResources, UIColor;
@protocol LAUIPearlGlyphViewDelegate;

@interface LAUIPearlGlyphView : UIView <LAUIMetalRenderLoopDelegate> {
    LAUIPearlGlyphViewStaticResources *_sharedResources;
    struct configuration_t { long long _style; BOOL _reduce_blur; } _configuration;
    double _scale;
    LAUICheckmarkLayer *_checkmarkLayer;
    BOOL _delegateRespondsToWillRender;
    UIView *_containerView;
    LAUIMetalRenderLoop *_renderLoop;
    CALayer *_layer;
    BOOL _invalidated;
    BOOL _rendererPaused;
    BOOL _inWindow;
    unsigned long long _externalAnimationCount;
    double _overdrawRatio;
    struct CGSize { double width; double height; } _boundsSize;
    struct CGSize { double width; double height; } _drawableSize;
    BOOL _contentLayerNeedsMaskUpdate;
    CAShapeLayer *_contentLayerMask;
    struct unique_ptr<LAUI_uniform_cubic_b_spline_renderer::renderer_t, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> { struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::renderer_t *, std::default_delete<LAUI_uniform_cubic_b_spline_renderer::renderer_t>> { struct renderer_t *__value_; } __ptr_; } _renderer;
    struct unique_ptr<(anonymous namespace)::face_id_animator_t, std::default_delete<(anonymous namespace)::face_id_animator_t>> { struct __compressed_pair<(anonymous namespace)::face_id_animator_t *, std::default_delete<(anonymous namespace)::face_id_animator_t>> { struct face_id_animator_t *__value_; } __ptr_; } _animator;
    BOOL _modelDirty;
    BOOL _panning;
    double _lastUpdateTime;
    BOOL _animating;
    struct overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))> { struct optional<UIColor *> { union { char __null_state_; UIColor *__val_; } ; BOOL __engaged_; } overlay_value; void /* unknown type, empty encoding */ value; } _idleColor;
    void /* unknown type, empty encoding */ _defaultColor;
    void /* unknown type, empty encoding */ _oscillatingColor;
    void /* unknown type, empty encoding */ _successColor;
    struct overlayable_property_t<UIColor *, float __attribute__((ext_vector_type(4)))> { struct optional<UIColor *> { union { char __null_state_; UIColor *__val_; } ; BOOL __engaged_; } overlay_value; void /* unknown type, empty encoding */ value; } _finishedColor;
    long long _priorState;
    BOOL _changingState;
    BOOL _stateChangeAnimated;
    unsigned long long _stateChangeCounter;
    struct vector<void (^)(bool), std::allocator<void (^)(bool)>> { id /* block */ *__begin_; id /* block */ *__end_; struct __compressed_pair<void (^__strong *)(bool), std::allocator<void (^)(bool)>> { id /* block */ *__value_; } __end_cap_; } _completionHandlers;
    struct CGColorSpace { } *_colorSpace;
}

@property (nonatomic) BOOL inApplicationContext;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UIColor *idleColor;
@property (readonly, nonatomic) UIColor *finishedColor;
@property (readonly, nonatomic) unsigned long long faceVisibility;
@property (readonly, nonatomic) BOOL hideFace;
@property (readonly, nonatomic) long long state;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL shakeEnabled;
@property (nonatomic) BOOL feedbackEnabled;
@property (readonly, nonatomic) CALayer *contentLayer;
@property (weak, nonatomic) id<LAUIPearlGlyphViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invokeSuccessFeedback;
+ (id)sharedStaticResources;

- (void)applicationDidBecomeActive:(id)a0;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (id)init;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)renderLoop:(id)a0 drawAtTime:(double)a1;
- (void)setFaceVisibility:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setInApplicationContext:(BOOL)a0;
- (void)setState:(long long)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)setFinishedColor:(id)a0 animated:(BOOL)a1;
- (BOOL)inApplicationContext;
- (void)purgeBuffers;
- (void)reduceMotionDidChange:(id)a0;
- (void)reduceTransparencyDidChange:(id)a0;
- (void)renderLoop:(id)a0 drawableSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)setHideFace:(BOOL)a0 animated:(BOOL)a1;
- (void)setIdleColor:(id)a0 animated:(BOOL)a1;

@end
