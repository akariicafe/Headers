@class NSArray, NSString, NSMutableDictionary, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *_constraintRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
    BOOL _incremental;
    double _influenceFactor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double influenceFactor;
@property (nonatomic, getter=isIncremental) BOOL incremental;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (id)init;
- (void)dealloc;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setName:(id)a0;
- (id)scene;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (void)removeAllAnimations;
- (void)addAnimation:(id)a0;
- (id)name;
- (void)copyTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)animationPlayerForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (void)_syncObjCAnimations;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)constraintRef;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (void)finalizeDecodeConstraint:(id)a0;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (void)pauseAnimationForKey:(id)a0;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (void)setConstraintRef:(struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (void)unbindAnimatablePath:(id)a0;

@end
