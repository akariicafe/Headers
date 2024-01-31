@interface SessionCore.StateCaptureServiceServer : NSObject <ACStateCaptureXPCServer, BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ stateCaptureManager;
    void /* unknown type, empty encoding */ listener;
}

- (id)stateForIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
