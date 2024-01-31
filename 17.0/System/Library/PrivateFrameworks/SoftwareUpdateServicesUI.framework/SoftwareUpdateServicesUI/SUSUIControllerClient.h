@class NSString, NSXPCConnection;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)_remoteInterface;
- (void)_noteServerExiting;
- (BOOL)createKeybagWithSecret:(id)a0;
- (void)getPasscodePolicy:(id /* block */)a0;

@end
