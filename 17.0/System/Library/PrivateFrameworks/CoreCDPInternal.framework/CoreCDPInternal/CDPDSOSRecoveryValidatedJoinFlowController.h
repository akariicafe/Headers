@class NSString;

@interface CDPDSOSRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_cancelRecoveryOptionWithCompletion:(id /* block */)a0;
- (id)_entryLimitNoResetForRepairForDevice:(id)a0;
- (id)_entryLimitRemoteApprovalAvailableBodyForDevice:(id)a0;
- (id)_entryLimitTitleForDevice:(id)a0 forLimitType:(unsigned long long)a1;
- (unsigned long long)_escapeOfferForDevices:(id)a0 remoteApproval:(BOOL)a1 forMultipleICSC:(BOOL)a2;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (void)_handleLimit:(unsigned long long)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)a0 completion:(id /* block */)a1;
- (id)_hardLimitErrorBodyWithDevice:(id)a0;
- (id)_infoDictionaryWithTitle:(id)a0 andBody:(id)a1;
- (id)_makeRemoteApprovalCompletedEventWithContext:(id)a0 didApprove:(BOOL)a1 error:(id)a2;
- (id)_makeRemoteApprovalStartedBreadCrumbEventWithContext:(id)a0;
- (id)_okRecoveryOptionWithCompletion:(id /* block */)a0;
- (void)_populateUserInfo:(id)a0 recoveryIndexHandlers:(id)a1 withRecoveryOption:(id)a2;
- (id)_remoteApprovalRecoveryOptionWithCompletion:(id /* block */)a0;
- (void)_showEntryLimitError:(id)a0 withRecoveryOptionHandlers:(id)a1 defaultIndex:(long long)a2 completion:(id /* block */)a3;
- (id)_softLimitErrorBodyForDevice:(id)a0;
- (id)_userInfoForLimit:(unsigned long long)a0 withDevice:(id)a1;
- (void)beginInteractiveRecoveryForDevices:(id)a0 isUsingMultipleICSC:(BOOL)a1 usingValidator:(id)a2;
- (void)beginRemoteApprovalWithValidator:(id)a0;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)a0;
- (id)recoveryValidatorWithDevices:(id)a0 forMultipleICSC:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)remoteSecretValidator:(id)a0 applyToJoinCircleWithJoinHandler:(id /* block */)a1;
- (void)secretValidator:(id)a0 didFailRecovery:(id)a1 withError:(id)a2 completion:(id /* block */)a3;
- (BOOL)secretValidator:(id)a0 shouldAcceptRecoveryError:(id *)a1;
- (void)secretValidatorWillAttemptRecovery;
- (void)sendRemoteApprovalCompletedEventWithContext:(id)a0 didApprove:(BOOL)a1 error:(id)a2;
- (void)sendRemoteApprovalStartedBreadCrumbEventWithContext:(id)a0;

@end
