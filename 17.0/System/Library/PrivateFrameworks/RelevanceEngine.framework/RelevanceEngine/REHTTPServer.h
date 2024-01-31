@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, REHTTPServerDelegate;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct _CFHTTPServer { } *_server;
    NSMutableArray *_connections;
}

@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) id<REHTTPServerDelegate> delegate;

- (void)invalidated;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_valid;
- (void)connection:(id)a0 didReceiveRequest:(id)a1 completion:(id /* block */)a2;
- (void)didCloseConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void)didOpenConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void)didRecievedError:(id)a0;
- (id)initWithPort:(unsigned short)a0 delegate:(id)a1;

@end
