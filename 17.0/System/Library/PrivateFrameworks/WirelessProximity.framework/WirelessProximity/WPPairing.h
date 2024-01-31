@class NSMutableSet;
@protocol WPPairingDelegate;

@interface WPPairing : WPClient

@property (weak, nonatomic) id<WPPairingDelegate> delegate;
@property (retain) NSMutableSet *ignoredDevices;
@property BOOL allowScreenOffScanning;

- (void)stateDidChange:(long long)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)ignoreDeviceUntilNextUnlock:(id)a0 ignoreDevice:(BOOL)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)clearProximityPairingServiceDuplicates;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1;
- (void)invalidate;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1 scanMode:(long long)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (void)stopProximityPairingServiceScanning;
- (void)startProximityPairingServiceScanning;

@end
