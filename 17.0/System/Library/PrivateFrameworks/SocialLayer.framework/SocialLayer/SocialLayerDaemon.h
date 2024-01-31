@class NSXPCListener, NSMapTable, NSString, NSMutableArray;

@interface SocialLayerDaemon : NSObject <NSXPCListenerDelegate, SLDServiceMultiplexing, SLDServiceMultiplexDelegate>

@property (readonly, nonatomic) int appleLanguageChangeNotificationToken;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *connectionsToServicesTable;
@property (retain, nonatomic) NSMutableArray *multiplexesPendingRemoval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_systemUIServiceIdentifier;

- (void)setupListeners;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_acceptMainConnection:(id)a0;
- (void)_appConnectionInvalidated:(id)a0;
- (void)_appleSystemLanguageDidChange:(id)a0;
- (void)endpointForServiceNamed:(id)a0 reply:(id /* block */)a1;
- (void)multiplexDidRemoveAllServices:(id)a0;

@end
