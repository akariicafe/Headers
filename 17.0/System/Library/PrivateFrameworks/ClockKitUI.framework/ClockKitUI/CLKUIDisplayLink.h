@class CADisplayLink;

@interface CLKUIDisplayLink : CLKUIRenderFrequencyLink {
    CADisplayLink *_displayLink;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)updateCoordinator;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
