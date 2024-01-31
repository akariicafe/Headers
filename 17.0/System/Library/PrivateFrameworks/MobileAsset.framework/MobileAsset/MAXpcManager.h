@class NSString, NSMutableDictionary, MAXpcConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MAXpcManager : NSObject {
    MAXpcConnection *_maConnection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSString *_serviceName;
    NSMutableDictionary *_progressHandlers;
    unsigned long long _connectionRetryCount;
    NSMutableArray *_postConnectionRetryCallbacks;
}

- (void)ensureConnection;
- (void)attachProgressHandler:(id)a0 assetId:(id)a1 callBack:(id /* block */)a2 withPurpose:(id)a3;
- (void)setClientName:(id)a0;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2 withRetry:(BOOL)a3 retryInitialReconnectionCount:(unsigned long long)a4;
- (void)setClientConnectionHandler;
- (id)initWithServiceName:(id)a0 callbackQueue:(id)a1;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2 withRetry:(BOOL)a3;
- (void).cxx_destruct;
- (void)notifyClientsOfProgress:(id)a0;
- (id)sendSync:(id)a0 gettingResponseCode:(long long *)a1 codeForXpcError:(long long)a2 loggingName:(id)a3;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2;
- (void)clearConnection:(id)a0;

@end
