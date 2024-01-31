@class NSMapTable, NSString, NSArray, NSUUID, SORemoteExtensionViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtension : NSObject <SORemoteExtensionViewControllerDelegate, POExtensionRegistrationHostProtocol> {
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_pssoQueue;
    SORemoteExtensionViewController *_remoteViewController;
    NSMapTable *_extensionDelegates;
}

@property (retain, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedExtensionDisplayName;
@property (readonly, nonatomic) NSString *containerAppPath;
@property (readonly, nonatomic) NSString *containerAppBundleIdentifier;
@property (retain, nonatomic) NSArray *associatedDomains;
@property (readonly, nonatomic) long long extensionRequestsMode;
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (readonly, nonatomic) int requestCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unload;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (BOOL)hasURLApprovedAssociatedDomain:(id)a0;
- (id)initWithExtension:(id)a0;
- (void)_beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)_beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)decrementRequestCount;
- (void)saveDelegate:(id)a0 forRequestIdentifier:(id)a1;
- (BOOL)isEqualToExtension:(id)a0;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(long long)a2 extensionData:(id)a3 completion:(id /* block */)a4;
- (void)_setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)requestReauthenticationWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeDelegateForRequestIdentifier:(id)a0;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (id)findDelegateForIdentifier:(id)a0;
- (void)supportedGrantTypesCompletion:(id /* block */)a0;
- (void)canPerformRegistrationCompletion:(id /* block */)a0;
- (BOOL)hasAssociatedDomainsApproved;
- (void)_setupSessionHelperForIOSWithCompletion:(id /* block */)a0;
- (void)_setupSessionIfNecessaryWithCompletion:(id /* block */)a0;
- (void)checkAssociatedDomains;
- (void)protocolVersionCompletion:(id /* block */)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)_connectContextToSessionWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestAuthorizationViewControllerWithCompletion:(id /* block */)a0;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)setupNonUISessionWithCompletion:(id /* block */)a0;
- (void)_setupExtension;
- (void)incrementRequestCount;
- (void)registrationDidCancelWithCompletion:(id /* block */)a0;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (struct { unsigned int x0[8]; })auditTokenForSession;
- (void)_setupNonUISessionIfNecessaryWithCompletion:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_finishAuthorization:(id)a0 withCompletion:(id /* block */)a1;
- (void)beginDeviceRegistrationUsingOptions:(long long)a0 extensionData:(id)a1 completion:(id /* block */)a2;
- (void)_finishedSettingUpSession:(id)a0;
- (void)_setupSessionWithCompletion:(id /* block */)a0;
- (id)_contextForSession;
- (void)registrationDidCompleteWithCompletion:(id /* block */)a0;

@end
