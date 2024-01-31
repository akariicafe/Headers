@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSApplicationUtil : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (id)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)restartApplication:(id /* block */)a0;

@end
