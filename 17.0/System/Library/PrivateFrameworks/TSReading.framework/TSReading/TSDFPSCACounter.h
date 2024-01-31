@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int mCAFrameCount;
    NSTimer *mTimer;
}

- (void)reset;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)stopLoggingFPS;

@end
