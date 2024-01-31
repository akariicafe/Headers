@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPHomeKitAnalysisService : NSObject <VCPHomeKitAnalysisClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}

+ (id)analysisService;

- (id)init;
- (id)connection;
- (void)cancelRequest:(int)a0;
- (void).cxx_destruct;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void)cancelAllRequests;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetData:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestAnalysis:(unsigned long long)a0 ofAssetSurface:(id)a1 withProperties:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestResidentMaintenanceWithOptions:(id)a0 andCompletionHandler:(id /* block */)a1;

@end
