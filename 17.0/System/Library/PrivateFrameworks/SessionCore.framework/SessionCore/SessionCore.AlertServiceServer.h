@interface SessionCore.AlertServiceServer : NSObject <ACAlertXPCClient, BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ _lock_clients;
}

- (void)dismissAlertWithActivityIdentifier:(id)a0;
- (void)presentAlertWithActivityIdentifier:(id)a0 payload:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
