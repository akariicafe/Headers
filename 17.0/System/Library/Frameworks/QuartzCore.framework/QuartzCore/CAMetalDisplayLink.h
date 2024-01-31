@protocol CAMetalDisplayLinkDelegate;

@interface CAMetalDisplayLink : NSObject {
    void *_impl;
}

@property (weak, nonatomic) id<CAMetalDisplayLinkDelegate> delegate;
@property (nonatomic) float preferredFrameLatency;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (id)_initWithMetalLinkItem:(void *)a0;
- (id)initWithMetalLayer:(id)a0;

@end
