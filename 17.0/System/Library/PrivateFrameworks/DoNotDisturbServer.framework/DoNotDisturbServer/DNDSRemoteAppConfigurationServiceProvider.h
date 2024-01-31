@class NSString, NSMutableSet, DNDSClientDetailsProvider, BSServiceConnectionListener;
@protocol DNDSRemoteAppConfigurationServiceProviderDelegate;

@interface DNDSRemoteAppConfigurationServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAppConfigurationServiceServerProtocol> {
    BSServiceConnectionListener *_requestListener;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableSet *_connections;
}

@property (weak, nonatomic) id<DNDSRemoteAppConfigurationServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (void)dealloc;
- (void)getCurrentAppConfigurationForActionIdentifier:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (id)initWithClientDetailsProvider:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)invalidateAppContextForActionIdentifier:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)_removeConnection:(id)a0;
- (void)_handleClientConnectionInterrupted:(id)a0;

@end
