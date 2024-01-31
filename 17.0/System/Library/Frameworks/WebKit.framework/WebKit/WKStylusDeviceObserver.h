@interface WKStylusDeviceObserver : NSObject {
    unsigned long long _startCount;
    struct RetainPtr<NSTimer> { void *m_ptr; } _changeTimer;
}

@property (readonly, nonatomic) BOOL hasStylusDevice;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (id).cxx_construct;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)changeTimerFired:(id)a0;
- (void)setHasStylusDevice:(BOOL)a0;
- (void)startChangeTimer:(double)a0;

@end
