@class NSString, NSXPCConnection;

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKDiagnosticHostRemoteContext, DKResponder>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) BOOL isXPC;
@property (retain, nonatomic) id xpcPrincipalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithConnection:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (void).cxx_destruct;
- (id)_testName;
- (id)_extensionAttributes;
- (id)testID;
- (void)enableVolumeHUD:(BOOL)a0;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (id)_getRemoteProxyAndSetUpHandlers;
- (id)_helperConnnection;
- (id)_helperPrincipalObject;
- (void)cancelRemoteDiagnosticWithCompletion:(id /* block */)a0;
- (void)completeWithDiagnosticResult:(id)a0 completion:(id /* block */)a1;
- (void)displayAlertWithHeader:(id)a0 message:(id)a1 buttonStrings:(id)a2 completion:(id /* block */)a3;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostCompleteWithResult:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostDisplayAlertWithHeader:(id)a0 message:(id)a1 buttonStrings:(id)a2 completion:(id /* block */)a3;
- (void)remoteHostEnableVolumeHUD:(BOOL)a0;
- (void)remoteHostGetAsset:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostRequestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (void)remoteHostSetScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)remoteHostShowUI:(id)a0 completion:(id /* block */)a1;
- (void)remoteHostUnpairSessionAccessoryOnTestCompletion;
- (void)remoteHostUpdateProgress:(id)a0 forTest:(id)a1;
- (void)remoteHostUploadAssets:(id)a0 completion:(id /* block */)a1;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (void)setRemoteDiagnosticNotAllowListedWithContactMessage:(id)a0;
- (void)showUI:(id)a0 completion:(id /* block */)a1;
- (void)startRemoteDiagnosticWithDiagnosticParameters:(id)a0 completion:(id /* block */)a1;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)updateProgress:(id)a0 forTest:(id)a1;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;

@end
