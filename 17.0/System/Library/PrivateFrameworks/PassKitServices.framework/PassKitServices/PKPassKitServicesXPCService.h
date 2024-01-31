@class NSXPCConnection;

@interface PKPassKitServicesXPCService : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (id)_createConnection;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)imageDataForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)snapshotDataForPassUniqueIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)imageDataForRecurringPaymentMemo:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
