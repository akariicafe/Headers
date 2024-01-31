@class NSXPCListenerEndpoint, NSString, NSDictionary, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_source;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol> {
    BOOL _controlProviderExists;
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
    NSObject<OS_xpc_object> *_clientListener;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSMutableDictionary *_browserFlows;
    NSMutableDictionary *_socketFlows;
    NSMutableDictionary *_channelFlows;
    NSMutableArray *_socketExceptions;
    NSObject<OS_dispatch_source> *_source;
    NSMutableArray *_pendingConnections;
}

@property (readonly, nonatomic) NSDictionary *remediationMap;
@property (readonly, nonatomic) NSDictionary *URLAppendStringMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)extensionPoint;
- (void).cxx_destruct;
- (void)report:(id)a0;
- (void)stopWithReason:(int)a0;
- (void)applySettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAppInfoForPID:(int)a0 UUID:(id)a1 bundleID:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchCurrentRulesForFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)a0;
- (void)handleClientMessage:(id)a0 filloutReply:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;
- (void)providerControlSocketFileHandle:(id)a0;
- (Class)requiredProviderSuperClass;
- (void)resumeFlow:(id)a0 withVerdict:(id)a1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)startFilterWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFlow:(id)a0 withVerdict:(id)a1 forDirection:(long long)a2;

@end
