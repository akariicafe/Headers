@class NSTimer, NSString;
@protocol PBBridgeConnectionDelegate;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol>

@property (nonatomic) unsigned short activationState;
@property (retain, nonatomic) NSTimer *activationTimeout;
@property (retain, nonatomic) NSString *internalLastSendMessageID;
@property (copy, nonatomic) id /* block */ updateLanguageCompletion;
@property (copy, nonatomic) id /* block */ updateRegionCompletion;
@property (copy, nonatomic) id /* block */ sessionCompletion;
@property (copy, nonatomic) id /* block */ activationCompletion;
@property (copy, nonatomic) id /* block */ siriStateCompletion;
@property (copy, nonatomic) id /* block */ enableSiriCompletion;
@property (weak, nonatomic) id<PBBridgeConnectionDelegate> delegate;
@property (readonly, nonatomic) NSString *languageIdentifer;
@property (readonly, nonatomic) NSString *regionIdentifer;
@property (readonly, nonatomic) BOOL canBeginActivation;
@property (readonly, nonatomic) BOOL readyToCreatePasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prepareOfflineTermsResponse:(id)a0;
+ (id)warrantyFilePathForLanguageCode:(id)a0 countryCode:(id)a1;

- (void)setDiagnosticsEnabled:(id)a0;
- (void)setDeviceName:(id)a0;
- (id)serviceIdentifier;
- (id)init;
- (void)setLocationEnabled:(id)a0;
- (void).cxx_destruct;
- (void)setSiriEnabled:(id)a0;
- (id)customDescriptionOfMessageType:(unsigned short)a0;
- (BOOL)sendCompanionPerformanceResults;
- (BOOL)_getActivationData:(BOOL)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)_recordThatWatchFinishedActivating;
- (BOOL)_sendRemoteCommandWithMessageID:(unsigned short)a0 withArguments:(id)a1;
- (BOOL)_sendResponseToMessage:(id)a0 withResponseMessageID:(unsigned short)a1 withArguments:(id)a2;
- (void)activationTimeout:(id)a0;
- (void)beganAwaitingAbilityToActivate;
- (void)checkAppInstallationAllowed:(id)a0;
- (void)companionBecameAvailableWantsConfirmation:(id)a0;
- (void)companionDidSendDemoWirelessCredentials:(id)a0;
- (void)companionDidSendLanguageAndLocale:(id)a0;
- (void)companionDidSendTinkerWirelessCredentials:(id)a0;
- (void)companionTermsResponse:(id)a0;
- (void)doInitialSyncPrep:(id)a0;
- (void)enableSiriForGizmoWithCompletion:(id /* block */)a0;
- (void)enabledSiri:(id)a0;
- (void)endSetupTransaction;
- (void)fetchTermsAndConditions:(id)a0;
- (BOOL)getActivationDataAndHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)getActivationDataForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)getSessionDataForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSiriStateWithCompletion:(id /* block */)a0;
- (void)gotSiriState:(id)a0;
- (void)handleActivationData:(id)a0;
- (void)handleBuysOnWatchIngestion:(id)a0;
- (void)handleOfflineTermsRequest:(id)a0;
- (void)handleRenameDeviceRequest:(id)a0;
- (void)handleSetLauncherViewModeForTinker:(id)a0;
- (void)handleWarrantySentinelRequest:(id)a0;
- (void)ingestTinkerCredentials:(id)a0;
- (void)invalidateTimeoutTimer;
- (void)parseNetworkRecordsAndApplyWirelessCredentialsFromData:(id)a0;
- (void)popToControllerType:(id)a0;
- (void)prepareForForcedWatchSU:(id)a0;
- (void)processReceivedPairingWirelessCredentials:(id)a0;
- (void)provideAppViewListImage:(id)a0;
- (void)pushControllerType:(id)a0;
- (void)refreshTimeoutTimer;
- (void)remoteRequestToKeepAlive:(id)a0;
- (BOOL)reportRemoteActivationFailureError:(id)a0;
- (void)retryActivation:(id)a0;
- (void)returnProxiedDeviceForDeviceWithData:(id)a0;
- (void)setCanBeginActivating:(id)a0;
- (void)setCompanionLanguage:(id)a0;
- (void)setCompanionRegion:(id)a0;
- (void)setComputedTimeZone:(id)a0;
- (void)setCrownOrientationRight:(id)a0;
- (void)setFitnessRouteAuthorizationForTinker:(id)a0;
- (void)setMessagesInCloudEnabledForTinker:(id)a0;
- (void)setPasscodeRestrictions:(id)a0;
- (void)setupDeviceManagement:(id)a0;
- (void)setupServiceMessageSelectorMappings;
- (void)showLockedOnAnimation:(id)a0;
- (BOOL)tellCompanionGizmoBeganActivating;
- (BOOL)tellCompanionGizmoFailedActivating:(id)a0;
- (BOOL)tellCompanionGizmoFinishedActivating;
- (BOOL)tellCompanionGizmoFinishedActivatingAsDeKOTA;
- (void)tellCompanionGizmoFinishedHealthSharingOptInWithSelection:(BOOL)a0;
- (void)tellCompanionThatGizmoFailedToCreatePasscode:(int)a0;
- (void)tellCompanionThatGizmoFinishedChangingPasscode:(BOOL)a0 isLong:(BOOL)a1;
- (void)tellCompanionThatGizmoFinishedSettingPasscode:(BOOL)a0 isLong:(BOOL)a1;
- (void)tellCompanionThatGizmoFinishedUnlockPairing:(BOOL)a0;
- (void)tellCompanionThatGizmoStartedUnlockPairing;
- (BOOL)tellCompanionThatLanguageAndLanguageCompletedWithStatus:(unsigned short)a0;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (BOOL)updateLanguageIdentifierWithCompletion:(id /* block */)a0;
- (void)updateNanoRegistryToNormalState:(id)a0;
- (BOOL)updateRegionIdentifierWithCompletion:(id /* block */)a0;
- (void)updateSynchProgress:(id)a0;
- (void)waitForDynamicActivationEventPresentation:(id)a0;
- (void)waitForUserResponseToDynamicEventPresentation:(id)a0;

@end
