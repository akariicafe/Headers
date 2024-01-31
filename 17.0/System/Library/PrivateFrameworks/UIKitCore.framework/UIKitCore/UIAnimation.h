@class UIScreen, NSString;

@interface UIAnimation : NSObject {
    id _target;
    SEL _action;
    id _delegate;
    id /* block */ _completion;
    struct { unsigned char curve : 4; } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
    UIScreen *_screen;
    NSString *_screenIdentifier;
}

- (id)delegate;
- (void)setCompletion:(id /* block */)a0;
- (void)setProgress:(float)a0;
- (int)state;
- (id)target;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (id /* block */)completion;
- (id)_screen;
- (void).cxx_destruct;
- (float)progressForFraction:(float)a0;
- (void)stopAnimation;
- (id)initWithTarget:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setDuration:(double)a0;
- (id)_screenIdentifier;
- (float)fractionForTime:(double)a0;
- (void)markStart:(double)a0;
- (void)markStop;
- (void)setAnimationCurve:(int)a0;

@end
