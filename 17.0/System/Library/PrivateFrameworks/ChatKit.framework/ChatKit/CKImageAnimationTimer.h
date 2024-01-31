@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject

@property (class, readonly, nonatomic) BOOL accessibilityAnimatedImagesDisabled;

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double animationStartTime;
@property (nonatomic) BOOL hasValidStartTimeForCurrentDisplayLink;
@property (readonly, nonatomic) double animationTime;
@property (nonatomic) BOOL shouldStopWhenBackgrounded;

+ (id)sharedTimer;

- (id)init;
- (void)dealloc;
- (void)updateDisplayLink;
- (void).cxx_destruct;
- (void)addAnimationTimerObserver:(id)a0;
- (void)animationTimerFired;
- (void)removeAnimationTimerObserver:(id)a0;

@end
