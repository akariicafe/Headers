@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface FCCXPCClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)_setupXPCConnection;
- (void)dealloc;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_transportMessage:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)_transportRequest:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)transportMessage:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)transportRequest:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;

@end
