@class CADisplayLink;

@interface WKDisplayLinkHandler : NSObject {
    void *_drawingAreaProxy;
    CADisplayLink *_displayLink;
}

- (void)pause;
- (void)dealloc;
- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)invalidate;
- (unsigned int)nominalFramesPerSecond;
- (void)schedule;
- (void)displayLinkFired:(id)a0;
- (id)initWithDrawingAreaProxy:(void *)a0;

@end
