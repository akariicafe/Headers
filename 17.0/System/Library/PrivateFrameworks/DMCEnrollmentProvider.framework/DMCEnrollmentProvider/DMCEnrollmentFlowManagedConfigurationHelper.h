@class NSData, NSString, DMCBYODEnrollmentFlowUIPresenter;

@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <MCInteractionDelegate, DMCEnrollmentFlowMCBridge>

@property (retain, nonatomic) NSData *installingProfileData;
@property (copy, nonatomic) id /* block */ profileInstallationCompletionHandler;
@property (retain, nonatomic) NSString *devicePasscode;
@property (weak) DMCBYODEnrollmentFlowUIPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mdmProfileInfo;
+ (id)_createProfileInvalidError;
+ (id)organizationNameFromProfile:(id)a0 payload:(id)a1;

- (id)getMachineInfoForEnrollmentType:(unsigned long long)a0 enrollmentMethod:(unsigned long long)a1;
- (BOOL)isDeviceSupervised;
- (BOOL)isDevicePasscodeSet;
- (void)profileConnection:(id)a0 didRequestManagedRestoreWithManagedAppleID:(id)a1 personaID:(id)a2;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)profileConnection:(id)a0 didFinishPreflightWithError:(id)a1;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(id)a0;
- (void)manageApplicationWithBundleID:(id)a0 iTunesItemID:(id)a1 organization:(id)a2 personaID:(id)a3 associatedDomains:(id)a4 associatedDomainsEnableDirectDownloads:(id)a5 configuration:(id)a6 completionHandler:(id /* block */)a7;
- (BOOL)isMDMProfileLocked;
- (BOOL)validateESSOConfigurationProfile:(id)a0 error:(id *)a1;
- (void)profileConnectionDidRequestCurrentPasscode:(id)a0;
- (void)profileConnection:(id)a0 didRequestUserInput:(id)a1;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 isESSO:(BOOL)a4 essoAppITunesStoreID:(id)a5 managedProfileIdentifiers:(id)a6 installationSource:(id)a7 completionHandler:(id /* block */)a8;
- (void)reauthenticationComplete;
- (BOOL)isDeviceSharediPad;
- (void)profileConnection:(id)a0 didFinishInstallationWithIdentifier:(id)a1 error:(id)a2;
- (id)detailsFromMDMProfile:(id)a0 error:(id *)a1;
- (BOOL)isDeviceMDMEnrolled;
- (void)installEnrollmentProfile:(id)a0 devicePasscode:(id)a1 personaID:(id)a2 rmAccountIdentifier:(id)a3 managedProfileIdentifiers:(id)a4 installationSource:(id)a5 completionHandler:(id /* block */)a6;
- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (void)profileConnection:(id)a0 didShowUserWarnings:(id)a1;
- (void).cxx_destruct;
- (BOOL)removeProfileAssociatedWithPersonaID:(id)a0;
- (void)removeProfileWithIdentifier:(id)a0 async:(BOOL)a1;
- (void)stopEnrollmentFlowMonitor;
- (void)profileConnection:(id)a0 didRequestMAIDSignIn:(id)a1 personaID:(id)a2;
- (void)removeApplicationWithBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleUserInputRequest:(id)a0;

@end
