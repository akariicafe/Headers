@class NSString, NSArray, SOExtension, SORemoteExtensionViewController, NSNumber;
@protocol POExtensionDelegate;

@interface POExtension : NSObject <SOExtensionDelegate, POExtensionRegistrationHostProtocol> {
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
}

@property (weak) id<POExtensionDelegate> delegate;
@property (readonly, nonatomic) NSNumber *sdkVersionString;
@property (readonly) NSString *containerAppBundleIdentifier;
@property (readonly, nonatomic) NSArray *authenticationMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)unload;
- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)dealloc;
- (long long)protocolVersion;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(long long)a2 extensionData:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)registrationDidCancelWithCompletion:(id /* block */)a0;
- (void)beginDeviceRegistrationUsingOptions:(long long)a0 extensionData:(id)a1 completion:(id /* block */)a2;
- (void)registrationDidCompleteWithCompletion:(id /* block */)a0;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformRegistration;
- (id)initWithExtensionBundleIdentifier:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 extensionManager:(id)a1;
- (long long)supportedGrantTypes;

@end
