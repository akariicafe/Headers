@class NSString;

@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)createTemporaryDirectoryAppropriateForURL:(id)a0 error:(id *)a1;
- (id)createVideoFileCombinerWithVideoFileURLs:(id)a0 queue:(id)a1;
- (id)dataFromEncryptedDataContext:(id)a0 usingDecryptionManager:(id)a1;
- (id)dataTaskWithURL:(id)a0 httpHeaderFields:(id)a1;
- (id)outputStreamToFileAtURL:(id)a0 shouldAppend:(BOOL)a1;
- (BOOL)writeData:(id)a0 toFileURL:(id)a1 error:(id *)a2;

@end
