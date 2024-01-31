@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject {
    NSXPCConnection *_xpcConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _xpcLock;
}

- (id)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidationHandler;
- (void)endPlaybackSession:(id)a0;
- (void)reportPlayback:(id)a0 sessionID:(id)a1 completion:(id /* block */)a2;
- (void)reportPlayback:(id)a0 withCompletion:(id /* block */)a1;

@end
