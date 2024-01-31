@class _size, CUINamedVectorGlyph;

@interface RBSymbolAnimator : NSObject {
    struct Animator { struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _lock; struct refcounted_ptr<RB::Symbol::Model> { struct Model *_p; } _model; struct vector<RB::Symbol::Animation, 0UL, unsigned long> { struct Animation *_p; unsigned long long _size; unsigned long long _capacity; } _animations; double _current_time; void /* unknown type, empty encoding */ _presentation_position; float _variable_value; unsigned int _seed; float _max_edge_velocity; } _animator;
    struct vector<id<RBSymbolAnimatorObserver>, 2UL, unsigned int> { unsigned char _p[16]; _size **_p; unsigned int x0; unsigned int _capacity; } _observers;
    BOOL _needs_notify;
}

@property (retain, nonatomic) CUINamedVectorGlyph *glyph;
@property (nonatomic) unsigned int renderingMode;
@property (nonatomic) double variableValue;
@property (nonatomic) struct { float x0; float x1; float x2; float x3; } opacities;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) int scaleLevel;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } presentationPosition;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double maxVelocity;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRect;
@property (readonly, nonatomic) unsigned int styleMask;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int state;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (void)dealloc;
- (id).cxx_construct;
- (void)removeAllAnimations;
- (void).cxx_destruct;
- (unsigned int)addAnimation:(unsigned int)a0 options:(id)a1;
- (void)cancelAnimation:(unsigned int)a0;
- (void)removeAnimation:(unsigned int)a0;
- (struct _RBSymbolUpdate { } *)beginUpdateWithRenderingMode:(unsigned int)a0;
- (struct _RBSymbolUpdate { } *)beginUpdateWithRenderingMode:(unsigned int)a0 position:(const struct CGPoint { double x0; double x1; } *)a1 size:(const struct CGSize { double x0; double x1; } *)a2 flags:(unsigned int)a3;
- (void)cancelAnimationWithID:(unsigned int)a0;
- (void)endUpdate:(struct _RBSymbolUpdate { } *)a0;
- (void)setPriority:(float)a0 ofAnimationWithID:(unsigned int)a1;
- (void)cancelAllAnimations;
- (void)removeAnimationWithID:(unsigned int)a0;

@end
