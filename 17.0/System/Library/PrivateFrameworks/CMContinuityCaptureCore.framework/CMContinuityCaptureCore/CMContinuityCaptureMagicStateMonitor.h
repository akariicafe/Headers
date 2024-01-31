@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, ContinuityCaptureTransportDevice;

@interface CMContinuityCaptureMagicStateMonitor : NSObject {
    BOOL _magic;
    BOOL _skipNearByCheck;
    NSMutableSet *_activeMagicStateAssertions;
    NSMutableSet *_activeNonMagicStateAssertions;
    id /* block */ _magicTransitionCoolDownBlock;
    id /* block */ _nonMagicTransitionCoolDownBlock;
    NSObject<OS_dispatch_queue> *_queue;
    id<ContinuityCaptureTransportDevice> _device;
}

@property (readonly) BOOL magic;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)shouldForceMagicForAssertionType:(long long)a0;
+ (BOOL)shouldForceNonMagicForAssertionType:(long long)a0;

- (void)updateState;
- (void)invalidate;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)holdMagicStateAssertion:(long long)a0;
- (void)holdNonMagicStateAssertion:(long long)a0;
- (void)releaseMagicStateAssertion:(long long)a0 stateTransitionCoolDownTime:(unsigned int)a1;
- (void)releaseNonMagicStateAssertion:(long long)a0 stateTransitionCoolDownTime:(unsigned int)a1;
- (void)setupMagicStateListener;

@end
