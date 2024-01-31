@class RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol>

@property (weak, nonatomic) RPBroadcastActivityHostViewController *hostViewController;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)extensionObjectProxy;
- (oneway void)presentationInfoWithCompletion:(id /* block */)a0;
- (oneway void)extensionDidFinishWithLaunchURL:(id)a0 broadcastURL:(id)a1 extensionBundleID:(id)a2 cancelled:(BOOL)a3;

@end
