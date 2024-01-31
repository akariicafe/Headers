@class AUAudioUnitViewService, AURemoteHost;

@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost *_host;
    BOOL _isUIExtension;
    BOOL _isRunningInProcess;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (BOOL)conformsToProtocol:(id)a0;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;
- (id)iOSViewController;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)open:(id /* block */)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;

@end
