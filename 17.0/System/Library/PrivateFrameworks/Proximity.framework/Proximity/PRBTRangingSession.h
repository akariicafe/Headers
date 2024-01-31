@class NSString, NSObject, NSXPCConnection;
@protocol PRBTRangingSessionDelegate, OS_dispatch_queue, OS_os_log;

@interface PRBTRangingSession : PRRangingDevice <PRBTRangingClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_os_log> *_logger;
}

@property (weak, nonatomic) id<PRBTRangingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObject;
- (void)invalidate;
- (id)remoteObject;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)handleInterruption;
- (void)handleInvalidation;
- (void)didFailWithError:(id)a0;
- (void)startUTRanging:(id)a0;
- (void)didConnectDevice:(id)a0 error:(id)a1;
- (void)didFetchTxPower:(id)a0 fromDevice:(id)a1 withError:(id)a2;
- (void)didReceiveNewBTRSSI:(id)a0;
- (void)didStartRangingOnDevice:(id)a0 withError:(id)a1;
- (void)didStopOwnerRangingOnDevice:(id)a0 withError:(id)a1;
- (void)fetchTxPower:(id)a0 isUT:(id)a1;
- (void)startOwnerRanging:(id)a0;
- (void)stopOwnerRanging:(id)a0;
- (void)stopUTRanging:(id)a0;

@end
