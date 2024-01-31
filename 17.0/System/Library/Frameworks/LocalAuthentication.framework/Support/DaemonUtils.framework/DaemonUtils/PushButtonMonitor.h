@class NSString, SBSHardwareButtonService, SBSBiometricsService;
@protocol BSInvalidatable, PushButtonDelegate;

@interface PushButtonMonitor : NSObject <SBSHardwareButtonEventConsuming> {
    unsigned long long _lastTap;
    unsigned long long _lastDoubleTap;
    id /* block */ _axDoubleTapExpirationBlock;
    SBSBiometricsService *_sbBiometricsService;
    SBSHardwareButtonService *_sbHardwareButtonService;
    id<BSInvalidatable> _powerButtonObserver;
}

@property (nonatomic) BOOL doubleTapDetected;
@property (nonatomic) BOOL axDoubleTapDetected;
@property (weak, nonatomic) id<PushButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)startWithError:(id *)a0;
- (id)_init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)consumeDoublePressUpForButtonKind:(long long)a0;
- (void)adviseDoubleTap;
- (void)doubleTappedAt:(id)a0;
- (id)prearmAssertion;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (void)_scheduleDoubleTapExpiration;
- (void)axApplePayConfirmation;
- (void)consumeDoubleTapWithReason:(id)a0;

@end
