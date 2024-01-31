@class GEOXPCConnection;

@interface _GEOETARemoteProvider : NSObject {
    GEOXPCConnection *_connection;
    id /* block */ _willSendRequestHandler;
    id /* block */ _finishedHandler;
    id /* block */ _networkActivityHandler;
    id /* block */ _errorHandler;
}

+ (id)provderWithWillSendRequest:(id /* block */)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;

- (void).cxx_destruct;

@end
