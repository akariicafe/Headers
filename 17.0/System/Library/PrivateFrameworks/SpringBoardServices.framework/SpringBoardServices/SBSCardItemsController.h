@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    NSString *_identifier;
    NSXPCConnection *_connection;
    BOOL _connected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (void)dealloc;
- (void)setCardItems:(id)a0;
- (void)getCardItemsWithHandler:(id /* block */)a0;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;

@end
