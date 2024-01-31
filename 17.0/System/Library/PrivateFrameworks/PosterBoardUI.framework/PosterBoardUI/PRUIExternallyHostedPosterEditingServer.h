@class NSMutableArray, NSString, NSMapTable, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, PRUIExternallyHostedPosterEditingServerDelegate;

@interface PRUIExternallyHostedPosterEditingServer : NSObject <PRUIExternallyHostedPosterEditingClientToServerInterface, BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSMapTable *_connectionsByEditingRequest;
}

@property (weak, nonatomic) id<PRUIExternallyHostedPosterEditingServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0;
- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_queue_addConnection:(id)a0;
- (void)_queue_associateConnection:(id)a0 toEditingRequest:(id)a1;
- (void)_queue_disassociateConnection:(id)a0 fromEditingRequest:(id)a1;
- (oneway void)beginEditingWithEntryPointWrapper:(id)a0 completion:(id /* block */)a1;
- (oneway void)sendRequestDismissalActionWithEntryPointWrapper:(id)a0;
- (oneway void)sessionWithEditingRequest:(id)a0 didEndEditingWithResponse:(id)a1;
- (oneway void)sessionWithEditingRequest:(id)a0 willEndEditingWithResponse:(id)a1;

@end
