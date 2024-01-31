@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXLTClient : NSObject <AXLTXPCClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSMutableDictionary *dataReceivers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)init;
- (void).cxx_destruct;
- (void)initializeServiceConnection;
- (void)pingServiceWithHandler:(id /* block */)a0;
- (void)registerForTranscriptionIfNecessary;
- (BOOL)startTranscribing:(long long)a0 client:(id)a1 callbackBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)startTranscribing:(long long)a0 targetPID:(int)a1 client:(id)a2 callbackBlock:(id /* block */)a3 error:(id *)a4;
- (BOOL)stopTranscribing:(long long)a0 client:(id)a1 error:(id *)a2;
- (BOOL)stopTranscribing:(long long)a0 targetPID:(int)a1 client:(id)a2 error:(id *)a3;
- (void)transcribedData:(id)a0;

@end
