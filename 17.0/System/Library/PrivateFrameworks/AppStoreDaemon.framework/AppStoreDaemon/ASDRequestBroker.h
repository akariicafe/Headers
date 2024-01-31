@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {
    NSMutableDictionary *_activeRequests;
    NSXPCConnection *_connection;
}

+ (id)interface;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;

@end
