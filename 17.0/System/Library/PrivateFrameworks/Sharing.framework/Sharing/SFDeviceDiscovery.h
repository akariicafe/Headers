@class NSSet, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _legacy;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scanRateOverride;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long fastScanMode;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL overrideScreenOff;
@property (nonatomic) long long overrideScreenOffRescanInterval;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) BOOL rssiChangeDetection;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) BOOL scanCache;
@property (nonatomic) long long scanRate;
@property (readonly, nonatomic) long long scanState;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (nonatomic) BOOL trackPeers;
@property (retain, nonatomic) NSSet *useCases;

- (void)fastScanCancel:(id)a0;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (int)_ensureXPCStarted;
- (void)_invalidated;
- (void)deviceDiscoveryDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)deviceDiscoveryLostDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)deviceDiscoveryScanStateChanged:(long long)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)triggerEnhancedDiscovery:(id)a0;
- (id)description;
- (void)triggerEnhancedDiscovery:(id)a0 useCase:(unsigned int)a1 completion:(id /* block */)a2;
- (void)_retryConsole;
- (void)_startTimeoutIfNeeded;
- (void)_timeoutTimerFired;
- (void)deviceDiscoveryFoundDevice:(id)a0;
- (void).cxx_destruct;
- (void)fastScanTrigger:(id)a0;
- (void)_interrupted;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (id)initWithCoder:(id)a0;

@end
