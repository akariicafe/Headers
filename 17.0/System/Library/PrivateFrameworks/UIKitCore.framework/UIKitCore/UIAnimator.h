@class NSMutableArray, NSMutableDictionary;

@interface UIAnimator : NSObject {
    NSMutableArray *_animations;
    double _lastUpdateTime;
    NSMutableDictionary *_animatorScreenLinks;
}

+ (void)enableAnimation;
+ (id)sharedAnimator;
+ (void)disableAnimation;

- (id)init;
- (BOOL)_isRunningAnimation:(id)a0;
- (void)dealloc;
- (void)stopAnimation:(id)a0;
- (void)startAnimation:(id)a0;
- (void)removeAnimationsForTarget:(id)a0;
- (void)_advanceAnimationsOnScreenWithIdentifier:(id)a0 withTimestamp:(double)a1;
- (void)removeAnimationsForTarget:(id)a0 ofKind:(Class)a1;
- (void)_addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2 startTime:(double)a3;
- (void)_startAnimation:(id)a0 withStartTime:(double)a1;
- (void).cxx_destruct;
- (void)addAnimation:(id)a0 withDuration:(double)a1 start:(BOOL)a2;
- (void)addAnimations:(id)a0 withDuration:(double)a1 start:(BOOL)a2;

@end
