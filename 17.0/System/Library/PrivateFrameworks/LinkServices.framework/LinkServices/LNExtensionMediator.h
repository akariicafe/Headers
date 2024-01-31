@class _EXExtensionProcess, NSString, NSXPCConnection;

@interface LNExtensionMediator : NSObject <LNDaemonExtensionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)invalidate;
- (void).cxx_destruct;
- (void)getConnectionHostInterfaceForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getWidgetKitXPCListenerEndpointForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
