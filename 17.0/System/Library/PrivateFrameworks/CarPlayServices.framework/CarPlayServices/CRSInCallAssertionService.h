@class NSMutableDictionary, NSString, CARObserverHashTable, NSHashTable, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue;

@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface>

@property (retain, nonatomic) CARObserverHashTable *observers;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSHashTable *activatedConnections;
@property (retain, nonatomic) NSHashTable *bannersAllowedConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)_init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (oneway void)setAllowsBanners:(id)a0;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)_connectionQueue_removeConnection:(id)a0;
- (void)addObserver:(id)a0 notifyIfNeeded:(BOOL)a1;
- (oneway void)presentInCallService;

@end
