@class NSString, RBSymbolAnimator;
@protocol RBDisplayListContents;

@interface RBSymbolLayer : CALayer <RBSymbolAnimatorObserver, RBLayerDelegate, RBAnimationHandler> {
    struct objc_ptr<RBSymbolAnimator *> { RBSymbolAnimator *_p; } _animator;
    struct objc_ptr<RBColor (^)(RBSymbolStyle, NSString *)> { id /* block */ _p; } _styleResolver;
    struct objc_ptr<id<RBDisplayListContents>> { id<RBDisplayListContents> _p; } _drawnList;
    double _last_time;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _lock;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _update_count;
    unsigned char _state;
    BOOL _visible;
}

@property (retain, nonatomic) RBSymbolAnimator *animator;
@property (nonatomic) struct { struct CGVector { double dx; double dy; } scale; struct CGVector { double dx; double dy; } translation; } symbolTransform;
@property (copy, nonatomic) id /* block */ styleResolver;
@property (nonatomic) unsigned int drawingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id).cxx_construct;
- (void)setNeedsLayout;
- (void)layoutSublayers;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)display;
- (id)RBLayerDefaultDevice:(id)a0;
- (void)configureSublayer:(id)a0 type:(unsigned int)a1;
- (struct { float x0; float x1; float x2; float x3; })resolveStyle:(unsigned int)a0 colorName:(id)a1;
- (void)runAnimationAtTime:(double)a0;
- (void)symbolAnimatorDidChange:(id)a0;

@end
