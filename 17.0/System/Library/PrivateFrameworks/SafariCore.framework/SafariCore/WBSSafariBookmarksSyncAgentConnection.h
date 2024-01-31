@class NSXPCConnection;
@protocol WBSSafariBookmarksSyncAgentProtocol;

@interface WBSSafariBookmarksSyncAgentConnection : NSObject {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly, nonatomic) id<WBSSafariBookmarksSyncAgentProtocol> remoteObjectProxy;

- (id)init;
- (void).cxx_destruct;
- (void)_connectionDidInvalidate;
- (void)_setUpConnectionIfNeeded;

@end
