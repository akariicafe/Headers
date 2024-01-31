@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    unsigned long long _maxFrameDelta;
}

@property (nonatomic) BOOL shouldRunTimer;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)stopLoggingFPS;

@end
