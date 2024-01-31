@class NSSManager, NPKCompanionAgentConnection, PUConnection, NSDate, PKPaymentWebService;
@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface NPKPaymentPreflighter : NSObject

@property (retain, nonatomic) PUConnection *passcodeConnection;
@property (retain, nonatomic) NSSManager *systemSettingsManager;
@property (nonatomic) BOOL checkedWatchPasscodeAndUnlockedStatus;
@property (nonatomic) BOOL checkedCompanioniCloudStatus;
@property (nonatomic) BOOL checkedWatchiCloudStatus;
@property (nonatomic) BOOL checkedWristDetectionStatus;
@property (nonatomic) BOOL authRandomSetIfNecessary;
@property (nonatomic) BOOL watchConnected;
@property (nonatomic) BOOL spaceAvailableOnSecureElement;
@property (nonatomic) BOOL needsPasscode;
@property (nonatomic) BOOL needsUnlock;
@property (nonatomic) BOOL needsCompanioniCloudAccount;
@property (nonatomic) BOOL needsWatchiCloudAccount;
@property (nonatomic) BOOL needsWristDetection;
@property (nonatomic) BOOL needsSetAuthRandom;
@property (copy, nonatomic) id /* block */ preflightCompletionHandler;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (weak, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic, getter=isPreflighting) BOOL preflighting;
@property (retain, nonatomic) NSDate *watchPasscodeAndUnlockedQueryDate;

+ (BOOL)watchConnected;

- (void).cxx_destruct;
- (id)_errorForCompanionAccountNeeded;
- (void)addCardPreflightWithCompletion:(id /* block */)a0;
- (void)_checkCompanioniCloudAccount;
- (void)_checkPasscodeEnabledAndUnlockedState;
- (void)_checkPasscodeEnabledAndUnlockedStateRequiringPasscode:(BOOL)a0 requiringUnlock:(BOOL)a1;
- (void)_checkPasscodeEnabledState;
- (void)_checkSpaceAvailableOnSecureElement;
- (void)_checkWatchConnected;
- (void)_checkWatchiCloudAccount;
- (void)_checkWristDetectEnabledState;
- (id)_errorForConnectionIssue;
- (id)_errorForGenericIssue;
- (id)_errorForGizmoAccountNeeded;
- (id)_errorForPasscodeNeeded;
- (id)_errorForUnlockNeeded;
- (id)_errorForWristDetectNeeded;
- (void)_finishPresentingSetupControllerIfReadyWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_setAuthRandomIfNecessary;
- (void)addBiometricPassPreflightWithCompletion:(id /* block */)a0;
- (void)addSecureElementPassPreflightWithCompletion:(id /* block */)a0;
- (id)initWithWebService:(id)a0 targetDevice:(id)a1 companionAgentConnection:(id)a2;
- (void)transferToCompanionPreflightWithCompletion:(id /* block */)a0;

@end
