@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REUpNextSiriClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_performOnRemoteObject:(id /* block */)a0;
- (void)completedRequestWithDomain:(id)a0;

@end
