@class GTServiceConnection;

@interface GTLoopbackServiceXPCProxy : NSObject <GTLoopbackService> {
    GTServiceConnection *_connection;
}

- (void).cxx_destruct;
- (id)echo:(id)a0;
- (void)echo:(id)a0 completionHandler:(id /* block */)a1;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)echo:(id)a0 repeat:(unsigned long long)a1 callback:(id /* block */)a2 complete:(id /* block */)a3;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
