@class NSUUID, NSString, NSArray, NSXPCInterface, NEFilterControlExtensionProviderHostContext, NSExtension, NEFilterExtensionProviderHostContext, NSXPCListenerEndpoint, NSObject, NEFilterProviderConfiguration;
@protocol OS_dispatch_queue, NEPluginManagerObjectFactory, OS_dispatch_source;

@interface NEAgentFilterExtension : NSObject <NEFilterExtensionProviderHostDelegate, NEAgentSessionDelegate, NEFilterPluginDriver> {
    BOOL _dataExtensionInitialized;
    BOOL _controlExtensionInitialized;
    BOOL _appsUpdateStarted;
    BOOL _appsUpdateEnding;
    int _crypto_kernel_salt;
    id<NEPluginManagerObjectFactory> _managerObjectFactory;
    NSString *_pluginType;
    NSExtension *_dataExtension;
    NSExtension *_controlExtension;
    NEFilterExtensionProviderHostContext *_dataSessionContext;
    NEFilterControlExtensionProviderHostContext *_controlSessionContext;
    NSUUID *_dataSessionRequestIdentifier;
    NSUUID *_controlSessionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_dataExtensionIdentifier;
    NSString *_controlExtensionIdentifier;
    NSXPCListenerEndpoint *_clientListenerEndpoint;
    NEFilterProviderConfiguration *_configuration;
    NSArray *_extensionUUIDs;
    NSObject<OS_dispatch_source> *_sendFailedTimer;
    struct cfil_crypto_state { struct ccdigest_info *x0; unsigned char x1[32]; } *_crypto_state;
    id /* block */ _pendingDisposeCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *uuids;
@property (readonly, nonatomic) NSXPCInterface *driverInterface;
@property (readonly, nonatomic) NSXPCInterface *managerInterface;

+ (BOOL)authenticateFlowWithState:(struct cfil_crypto_state { struct ccdigest_info *x0; unsigned char x1[32]; } *)a0 crypto_key:(id)a1 flow:(id)a2 salt:(unsigned int)a3 isKernelSocket:(BOOL)a4;

- (void)updateConfiguration:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)wakeup;
- (void)report:(id)a0;
- (void)applySettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)createPacketChannelForExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)extension:(id)a0 didFailWithError:(id)a1;
- (void)extension:(id)a0 didStartWithError:(id)a1;
- (void)extensionDidStop:(id)a0;
- (void)fetchCurrentRulesForFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getFilterClientConnectionWithCompletionHandler:(int)a0 completionHandler:(id /* block */)a1;
- (void)handleAppsUninstalled:(id)a0;
- (void)handleAppsUpdateBegins:(id)a0;
- (void)handleAppsUpdateEnding:(id)a0;
- (void)handleAppsUpdateEnds:(id)a0;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(id /* block */)a0;
- (void)handleInitWithCompletionHandler:(id /* block */)a0;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginEndpoint:(id)a2 pluginProcessIdentity:(id)a3 queue:(id)a4 factory:(id)a5;
- (id)initWithPluginType:(id)a0 pluginClass:(long long)a1 pluginInfo:(id)a2 queue:(id)a3 factory:(id)a4;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)startFilter;
- (void)startWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
