@interface SNConnectionInternal : NSObject {
    void /* unknown type, empty encoding */ connectionConfiguration;
    void /* unknown type, empty encoding */ connectionQueue;
    void /* unknown type, empty encoding */ activeConnectionGroup;
    void /* unknown type, empty encoding */ activeBackgroundConnection;
    void /* unknown type, empty encoding */ activeRoute;
    void /* unknown type, empty encoding */ pendingBackgroundConnections;
    void /* unknown type, empty encoding */ pendingRoutes;
    void /* unknown type, empty encoding */ comatoseBackgroundConnections;
    void /* unknown type, empty encoding */ comatoseRoutes;
    void /* unknown type, empty encoding */ scheduledRoutes;
    void /* unknown type, empty encoding */ isCanceled;
    void /* unknown type, empty encoding */ isCanceledInternal;
    void /* unknown type, empty encoding */ connectionMethodUsedHistory;
    void /* unknown type, empty encoding */ networkManager;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void)dealloc;
- (BOOL)startAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (void)setSendPings:(BOOL)a0;
- (void)cancelSynchronously:(BOOL)a0 isOnConnectionQueue:(BOOL)a1 with:(id /* block */)a2;
- (void)getSNConnectionMetrics:(BOOL)a0 with:(id /* block */)a1;
- (id)initWithConnectionInfo:(id)a0 connectionQueue:(id)a1;
- (id)initWithConnectionInfo:(id)a0 connectionQueue:(id)a1 networkManager:(id)a2;
- (void)sendData:(id)a0 with:(id /* block */)a1;

@end
