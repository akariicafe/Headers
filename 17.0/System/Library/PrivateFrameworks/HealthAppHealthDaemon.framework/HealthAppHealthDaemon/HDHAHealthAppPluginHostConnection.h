@class NSXPCConnection;

@interface HDHAHealthAppPluginHostConnection : NSObject {
    NSXPCConnection *_connection;
    BOOL _resumed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)proxy;
- (id)init;
- (id)synchronousProxy;
- (void)dealloc;
- (void)resumeIfNecessary;
- (void).cxx_destruct;

@end
