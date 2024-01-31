@class PCCEndpoint, NSString, NSMutableDictionary, NSObject, PCCGroupJob;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PCCProxiedDevice : NSObject <OSASyncProxyHandler> {
    PCCEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_job_queue;
    PCCGroupJob *_groupXferJob;
    NSMutableDictionary *_jobByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    int file_count;
    int msg_count;
    int up_count;
    int job_count;
    int expire_count;
}

@property double jobTimeout;
@property BOOL preserveFiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTimer;
- (void)handleMessage:(id)a0 from:(id)a1;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)doWork:(id)a0;
- (void)acceptTaskingPayload:(id)a0 forRouting:(id)a1 withId:(id)a2;
- (void)ack:(id)a0 result:(BOOL)a1 error:(id)a2;
- (void)finish:(id)a0 target:(id)a1 event:(id)a2 type:(id)a3 result:(id)a4;
- (void)handleConnection:(BOOL)a0 from:(id)a1;
- (void)handleFile:(id)a0 from:(id)a1 metadata:(id)a2;
- (void)initiate:(id)a0 transferGroupWithOptions:(id)a1 job:(id)a2;
- (void)initiate:(id)a0 transferLog:(id)a1 withOptions:(id)a2 job:(id)a3;
- (void)sendDeviceMetadata:(id)a0;

@end
