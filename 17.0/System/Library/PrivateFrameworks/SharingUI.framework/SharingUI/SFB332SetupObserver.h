@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) id<SFB332UIProtocol> delegate;

- (BOOL)shouldEscapeXpcTryCatch;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (void)setDeviceType:(unsigned long long)a0;
- (void)releaseHUDTransaction;
- (void)showPairConsentPrompt;
- (void)showPairingSuccess;
- (void)showEnableBluetoothPill;
- (void)showChargingStatus;
- (void)dismissUIAnimated:(BOOL)a0;
- (void)pairTapped;
- (void)updateDeviceInfoWithName:(id)a0 batteryLevel:(double)a1 batteryLevelKnown:(BOOL)a2 edge:(unsigned long long)a3 orientation:(unsigned long long)a4;
- (void)invalidate;
- (void)activate;
- (void)showPairingStarted;
- (void)dismissUnlockPrompt;
- (void)showUnlockPrompt;
- (void)enableBluetoothTapped;
- (void)showPairingFailure;
- (void).cxx_destruct;
- (id)machServiceName;
- (void)setShouldShowWhatsNew:(BOOL)a0;
- (void)acquireHUDTransaction;
- (void)dismissBTPrompt;
- (void)dismissChargingStatus;
- (void)showSubsequentPairSuccess;

@end
