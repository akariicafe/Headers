@class NSTimer, NSMutableSet, PSPointerClientController;

@interface TITypingAssertion : NSObject {
    BOOL _active;
    NSMutableSet *_restingPathIndices;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) PSPointerClientController *pointerClientController;

+ (id)sharedTypingAssertion;

- (id)init;
- (void)dealloc;
- (void)restTouchEndWithPathIndex:(long long)a0;
- (void)_sbsSetTypingActive:(BOOL)a0;
- (void)restTouchStartWithPathIndex:(long long)a0;
- (void)timerFired:(id)a0;
- (void)restResetTouches;
- (void)touchWithDuration:(double)a0 reason:(long long)a1;
- (void).cxx_destruct;
- (id)__restingPathIndices;
- (void)touchWithReason:(long long)a0;

@end
