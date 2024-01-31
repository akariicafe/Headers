@class CADisplayLink;

@interface UIAnimatorScreenLink : NSObject {
    struct _UIUpdateSequenceItemInternal { } *_updateSequenceItem;
    CADisplayLink *_displayLink;
    id /* block */ _updateAction;
}

@property unsigned short animationCount;

+ (id)startTimerWithScreen:(id)a0 action:(id /* block */)a1;

- (void)dealloc;
- (void)onDisplayLink:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
