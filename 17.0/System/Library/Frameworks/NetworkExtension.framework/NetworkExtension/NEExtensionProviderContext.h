@class NSString, NEConfiguration, NSXPCConnection, NEProvider, NSObject;
@protocol OS_os_transaction, NEExtensionProviderHostProtocol;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderHostProtocol> _hostContext;
    NSString *_description;
    BOOL _isDisposed;
    BOOL _started;
    NEConfiguration *_configuration;
    id /* block */ _stopCompletionHandler;
    NSXPCConnection *_hostConnection;
    NEProvider *_provider;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *extensionPoint;
@property (readonly, nonatomic) Class requiredProviderSuperClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dealloc;
- (void)dispose;
- (void)wake;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_principalObject;
- (id)initWithProvider:(id)a0;
- (void)cancelWithError:(id)a0;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)completeSession;
- (void)stopWithReason:(int)a0;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (void)dropProvider;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)startedWithError:(id)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;

@end
