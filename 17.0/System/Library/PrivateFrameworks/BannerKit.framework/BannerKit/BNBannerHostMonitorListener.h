@class NSMutableArray, NSString, NSSet, NSHashTable, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue;

@interface BNBannerHostMonitorListener : NSObject <BSServiceConnectionListenerDelegate> {
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isBannerHostAvailable) BOOL bannerHostAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_addConnection:(id)a0;
- (void)removeObserver:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithServiceDomain:(id)a0 authorizedBundleIDs:(id)a1;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_isConnectingProcessAuthorized:(id)a0 error:(out id *)a1;
- (void)_removeConnection:(id)a0;
- (void)addObserver:(id)a0;

@end
