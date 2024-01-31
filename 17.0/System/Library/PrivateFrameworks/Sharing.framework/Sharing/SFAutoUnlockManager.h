@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<SFAutoUnlockManagerDelegate> delegate;
@property (readonly, nonatomic) double spinnerDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)mockedPhoneAutoUnlockWatchWristDetectionDisabled;
+ (BOOL)autoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockMaskUnlikely;
+ (BOOL)mockedPhoneAutoUnlockWatchAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockFaceIDDisabled;
+ (BOOL)mockedPhoneAutoUnlockWatchWiFiOff;
+ (BOOL)mockedPhoneAutoUnlockSimulateMagnetBreak;
+ (BOOL)mockedBluetoothAndWiFiEnabled;
+ (BOOL)mockedPhoneAutoUnlockEnabled;
+ (BOOL)mockedPhoneAutoUnlockWatchOffWrist;
+ (BOOL)mockedPhoneAutoUnlockNeverUnlocked;
+ (void)enableBluetoothAndWiFi;
+ (BOOL)mockedPhoneAutoUnlockWatchNoMotion;
+ (BOOL)mockedPhoneAutoUnlockSimulatePhoneMissedFinalConfirmationToUnlock;
+ (BOOL)autoUnlockEnabled:(unsigned int)a0;
+ (long long)mockedPhoneAutoUnlockSimulateErrorCode;
+ (BOOL)mockedPhoneAutoUnlockInBioLockout;
+ (BOOL)autoUnlockSupported;
+ (BOOL)mockedPhoneAutoUnlockAWDLUnavailable;
+ (BOOL)mockedPhoneAutoUnlockSimulateDevicesOutOfRange;
+ (BOOL)mockedPhoneAutoUnlockNoWatch;
+ (BOOL)mockedPhoneAutoUnlockWatchHasWeakPasscode;
+ (BOOL)mockedPhoneAutoUnlockWatchSleepModeOn;
+ (BOOL)mockedPhoneAutoUnlockNoMask;
+ (float)mockedPhoneAutoUnlockSimulateManualReLock;
+ (BOOL)mockedPhoneAutoUnlockNoPairedWatch;
+ (BOOL)mockedPhoneAutoUnlockWiFiOff;
+ (float)mockedPhoneAutoUnlockSimulateLatency;
+ (BOOL)mockedPhoneAutoUnlockWatchLocked;
+ (BOOL)bluetoothAndWiFiEnabled;
+ (void)mockedEnableBluetoothAndWiFi;
+ (BOOL)mockedAutoUnlockEnabled;

- (id)init;
- (void)beganAttemptWithDevice:(id)a0;
- (void)failedToEnableDevice:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)keyDeviceLocked:(id)a0;
- (void)failedUnlockWithError:(id)a0;
- (void)completedUnlockWithDevice:(id)a0;
- (void)enabledDevice:(id)a0;
- (void)declinedToEnablePhoneAutoUnlock;
- (void)attemptAutoUnlock;
- (void)attemptAutoUnlockForSiri;
- (void)attemptAutoUnlockWithoutNotifyingWatch;
- (void)authPromptInfoWithCompletionHandler:(id /* block */)a0;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)a0;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)a0;
- (void)clearPhoneAutoUnlockBehaviorChangeNotification;
- (void)completeAutoUnlockWithNotification:(BOOL)a0;
- (void)deviceRequestedRelock:(id)a0;
- (void)disableAutoUnlockForDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateDeviceUnlockedWithMask:(BOOL)a0;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)enableAutoUnlockWithDevice:(id)a0 passcode:(id)a1;
- (void)mockedAttemptAutoUnlock;
- (void)mockedCancelUnlock;
- (void)mockedDisableAutoUnlockForDevice:(id /* block */)a0;
- (void)mockedEligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)a0;
- (void)mockedEnableAutoUnlockWithDevice:(id)a0;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)a0;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)a0 device:(id)a1;
- (void)prewarmAutoUnlock;
- (void)repairCloudPairing;
- (void)requestRelock;

@end
