@class NSString, SOExtension;

@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol>

@property (weak) SOExtension *contextExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)requestReauthenticationWithRequestIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)canOpenURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteContextWithError:(id *)a0;

@end
