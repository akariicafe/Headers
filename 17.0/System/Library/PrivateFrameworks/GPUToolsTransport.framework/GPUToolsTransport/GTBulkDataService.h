@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTBulkDataService : NSObject <GTBulkDataService> {
    NSObject<OS_os_log> *_log;
    unsigned long long _nextDownloadHandle;
    NSMutableDictionary *_dataDownloadStore;
    unsigned long long _nextUploadHandle;
    NSMutableDictionary *_dataUploadingStore;
    NSMutableDictionary *_dataUploadedStore;
    NSMutableDictionary *_dataUploadCompressionAlgorithm;
    NSObject<OS_dispatch_queue> *_dataAccessQueue;
    NSObject<OS_dispatch_queue> *_dataTransferQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)downloadData:(unsigned long long)a0 usingTransferOptions:(id)a1 chunkHandler:(id /* block */)a2;
- (unsigned long long)handoverDataForDownload:(id)a0;
- (unsigned long long)newUploadWithDescriptor:(id)a0 error:(id *)a1;
- (id)takeUploadedDataForHandle:(unsigned long long)a0;
- (BOOL)uploadChunk:(id)a0 forHandle:(unsigned long long)a1 isFinalChunk:(BOOL)a2 error:(id *)a3;

@end
