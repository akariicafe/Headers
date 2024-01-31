@protocol SBSystemServiceServerAppSwitcherDelegate, SBSystemServiceServerSoftwareUpdateDelegate, SBSystemServiceServerTestAutomationDelegate, SBSystemServiceServerStateDumpDelegate, SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate;

@interface SBSystemServiceServer : FBSServiceFacility

@property (weak, nonatomic) id<SBSystemServiceServerAppSwitcherDelegate> appSwitcherDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerBiometricsDelegate> biometricsDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerHardwareButtonDelegate> hardwareButtonDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerSoftwareUpdateDelegate> softwareUpdateDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerTestAutomationDelegate> testAutomationDelegate;
@property (weak, nonatomic) id<SBSystemServiceServerStateDumpDelegate> stateDumpDelegate;

+ (id)sharedInstance;

- (void)_handleTestAutomationResetToHomeScreen:(id)a0 fromClient:(id)a1;
- (void)noteClientDidDisconnect:(id)a0;
- (void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationAddSpecificWidgetToPageWithSize:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetUserPresenceDetectedSinceWake:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetAccessoryAttachedState:(id)a0 fromClient:(id)a1;
- (void)_handleSoftwareUpdateGetPasscodePolicy:(id)a0 fromClient:(id)a1;
- (void)dealloc;
- (void)_handleStateDumpServiceClientMessageTypeStateDumpToFile:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationBlockApplicationForScreenTime:(id)a0 fromClient:(id)a1;
- (id)_init;
- (void)_handleTestAutomationGetChamoisWindowingUIEnabled:(id)a0 fromClient:(id)a1;
- (void)_handleLoadStashedSwitcherModelFromPath:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetHiddenFeatureState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationExitLostMode:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationEnterLostMode:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetAlertState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationAddWidgetsToEachPage:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonGetToggleButtonState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetChamoisPrefersStripHidden:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetRequestsHIDEvents:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationRequestReachabilityEnabledAssertion:(id)a0 fromClient:(id)a1;
- (void)_handleSoftwareUpdateSetPasscodePolicy:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetIdleTimerState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetOrientationLockState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetAmbientPresentationState:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetScencesForBundleIdentifier:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetPressEventMask:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetReachabilityActiveState:(id)a0 fromClient:(id)a1;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetChamoisPrefersDockHidden:(id)a0 fromClient:(id)a1;
- (void)_handleStashSwitcherModelToPath:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonSetHapticType:(id)a0 fromClient:(id)a1;
- (void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)a0 fromClient:(id)a1;
- (void).cxx_destruct;
- (void)_handleTestAutomationGetChamoisPrefersDockHidden:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetDeviceSupportsSystemAperture:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationClearAllUserNotifications:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetSystemApertureStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetChamoisWindowingUIEnabled:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonGetHapticType:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSuspendAllDisplays:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationAddSpecificWidgetStackToPageWithSize:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationRequestHUDHiddenAssertion:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationGetWidgetControllerStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetMallocStackLoggingState:(id)a0 fromClient:(id)a1;
- (void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)a0 fromClient:(id)a1;
- (void)_handleHardwareButtonAcquireAssertionMessage:(id)a0 fromClient:(id)a1;
- (void)_handleTestAutomationSetChamoisPrefersStripHidden:(id)a0 fromClient:(id)a1;

@end
