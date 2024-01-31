@class CCSModuleRepository, NSString, NSXPCListener, NSHashTable, CCSModuleSettingsProvider;

@interface CCSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, CCSRemoteServiceServerProtocol> {
    CCSModuleRepository *_moduleRepository;
    CCSModuleSettingsProvider *_settingsProvider;
    NSXPCListener *_listener;
    NSHashTable *_presentationEndpoints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)dealloc;
- (id)_init;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerEndpoint:(id)a0;
- (void)enumerateEndpointsUsingBlock:(id /* block */)a0;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
