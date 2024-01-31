@class NSObject;
@protocol OS_nw_connection, OS_nw_endpoint, OS_nw_parameters, OS_dispatch_queue, CTConnectionPairDelegate;

@interface CTConnectionPair : NSObject {
    BOOL fStarted;
    NSObject<OS_dispatch_queue> *fQueue;
    id<CTConnectionPairDelegate> fDelegate;
    long long fConnectionPairState;
    NSObject<OS_nw_connection> *fConnection1;
    NSObject<OS_nw_endpoint> *fEndpoint1;
    NSObject<OS_nw_parameters> *fParameters1;
    int fConnectionState1;
    NSObject<OS_nw_connection> *fConnection2;
    NSObject<OS_nw_endpoint> *fEndpoint2;
    NSObject<OS_nw_parameters> *fParameters2;
    int fConnectionState2;
}

- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (void)connectionStateChanged:(int)a0 connectionId:(long long)a1;
- (id)initWithQueue:(id)a0 delegate:(id)a1 endpoint1:(id)a2 parameters1:(id)a3 endpoint2:(id)a4 parameter2:(id)a5;
- (void)receiveData:(long long)a0;
- (BOOL)sendData:(id)a0 usingConnection:(long long)a1 completion:(id /* block */)a2;
- (void)updatePairState:(long long)a0;

@end
