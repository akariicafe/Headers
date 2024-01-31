@class CADisplayLink;

@interface PKDisplayLinkObserver : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _handler;
}

- (void)dealloc;
- (BOOL)stop;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_displayLinkHandler:(id)a0;
- (BOOL)startWithPreferredFramesPerSecond:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 addToRunLoop:(id)a1 forMode:(id)a2;

@end
