@class NSMutableDictionary, CADisplayLink;
@protocol CEKAdditiveAnimatorDelegate;

@interface CEKAdditiveAnimator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_values;
@property (readonly, nonatomic) NSMutableDictionary *_animations;
@property (retain, nonatomic) CADisplayLink *_displayLink;
@property (weak, nonatomic) id<CEKAdditiveAnimatorDelegate> delegate;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)_updateDisplayLink;
- (id)init;
- (void)setValue:(double)a0 forKey:(id)a1;
- (void)dealloc;
- (void)removeAnimationsForKey:(id)a0;
- (void).cxx_destruct;
- (double)valueForKey:(id)a0;
- (void)_handleDisplayLinkFired:(id)a0;
- (BOOL)isAnimatingForKey:(id)a0;
- (void)setValue:(double)a0 forKey:(id)a1 duration:(double)a2 timingCurve:(id)a3;

@end
