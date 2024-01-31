@class DMCEnrollmentFlowController, NSString, DMCObliterationShelter, NSObject;
@protocol OS_dispatch_queue;

@interface DMCReturnToServiceController : NSObject <DMCEnrollmentFlowPresenter>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) DMCObliterationShelter *obliterationShelter;
@property (retain, nonatomic) DMCEnrollmentFlowController *enrollmentFlowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)localeString;
- (id)languageStrings;
- (id)_ORGONotSupportedError;
- (id)_cloudConfigMissingError;
- (id)_configurationURLMissingError;
- (void)_fetchAndInstallMDMProfileIfNeededWithCloudConfig:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchAndStoreCloudConfigurationIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_handleORGOEnrollmentWithCompletionHandler:(id /* block */)a0;
- (void)_markWiFiProfileAsManagedIfNeeded;
- (id)_webURLNotSupportedError;
- (void)configureMDMWithCompletionHandler:(id /* block */)a0;
- (BOOL)installWiFiProfileIfNeeded:(id *)a0;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)a0 personaID:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)requestMAIDSignInWithAuthenticationResults:(id)a0 personaID:(id)a1 makeiTunesAccountActive:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)returnToServiceFlowCompleted;
- (BOOL)shouldDoReturnToService;
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(id)a0;

@end
