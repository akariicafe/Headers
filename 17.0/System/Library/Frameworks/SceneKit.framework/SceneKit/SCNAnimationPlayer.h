@class NSArray, NSString, SCNAnimation, NSMutableDictionary, SCNOrderedDictionary;

@interface SCNAnimationPlayer : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    struct __C3DAnimationPlayer { } *_playerRef;
    float _weight;
    float _speed;
    BOOL _paused;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SCNAnimation *animation;
@property (nonatomic) double speed;
@property (nonatomic) double blendFactor;
@property (nonatomic) BOOL paused;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationPlayerWithAnimation:(id)a0;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __C3DAnimationPlayer { } *)a0;
+ (id)animationPlayerWithSCNAnimation:(id)a0;

- (void)setWeight:(float)a0;
- (void)play;
- (void)commonInit;
- (float)weight;
- (void)dealloc;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)scene;
- (void)encodeWithCoder:(id)a0;
- (void)stop;
- (void)_setAnimation:(id)a0;
- (void)removeAllAnimations;
- (void)addAnimation:(id)a0;
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
- (struct __C3DAnimationPlayer { } *)animationPlayerRef;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)initWithAnimationPlayerRef:(struct __C3DAnimationPlayer { } *)a0;
- (id)initWithSCNAnimation:(id)a0;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (void)pauseAnimationForKey:(id)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (void)stopWithBlendOutDuration:(double)a0;
- (void)stopWithFadeOutDuration:(double)a0;
- (void)unbindAnimatablePath:(id)a0;

@end
