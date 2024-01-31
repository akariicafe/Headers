@class GTServiceConnection, GTBulkDataTransferOptions, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTBulkDataServiceXPCProxy : NSObject <GTBulkDataService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    GTBulkDataTransferOptions *_defaultTransferOptions;
}

- (void).cxx_destruct;
- (id)transferOptions;
- (void)downloadData:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)downloadData:(unsigned long long)a0 error:(id *)a1;
- (void)downloadData:(unsigned long long)a0 usingTransferOptions:(id)a1 chunkHandler:(id /* block */)a2;
- (void)downloadData:(unsigned long long)a0 usingTransferOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)downloadData:(unsigned long long)a0 usingTransferOptions:(id)a1 error:(id *)a2;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (unsigned long long)newUploadWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)uploadChunk:(id)a0 forHandle:(unsigned long long)a1 isFinalChunk:(BOOL)a2 error:(id *)a3;
- (void)uploadData:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)uploadData:(id)a0 error:(id *)a1;
- (void)uploadData:(id)a0 usingTransferOptions:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)uploadData:(id)a0 usingTransferOptions:(id)a1 error:(id *)a2;

@end
