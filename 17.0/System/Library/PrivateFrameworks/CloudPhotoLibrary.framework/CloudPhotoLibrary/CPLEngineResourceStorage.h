@class _CPLPruneRequestCounter, NSString, CPLPlatformObject, NSURL, NSMutableDictionary, NSObject, CPLEngineFileStorage;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    _CPLPruneRequestCounter *_pruneRequests;
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;
    BOOL _shouldCreateTempFolder;
}

@property (readonly, nonatomic) CPLEngineFileStorage *fileStorage;
@property (nonatomic) BOOL shouldCheckFilesForUpload;
@property (readonly, nonatomic) NSURL *tempFolderURL;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dropResourceForUpload:(id)a0 error:(id *)a1;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (BOOL)hasResource:(id)a0;
- (id)createTempDestinationURLForResource:(id)a0 error:(id *)a1;
- (id)retainFileURLForResource:(id)a0 error:(id *)a1;
- (id)status;
- (BOOL)checkIsEmpty;
- (unsigned long long)scopeType;
- (BOOL)storeResourceForUpload:(id)a0 shouldCheckResource:(BOOL)a1 error:(id *)a2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (BOOL)_clearAndCreateTempFolderIfNecessaryWithError:(id *)a0;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (BOOL)storeResourceCopyForUpload:(id)a0 error:(id *)a1;
- (id)statusDictionary;
- (BOOL)storeDownloadedResource:(id)a0 atURL:(id)a1 error:(id *)a2;
- (void)notePruningRequestForResource:(id)a0 realPrune:(BOOL)a1 successful:(BOOL)a2;
- (void)notePruningRequestForResource:(id)a0 realPrune:(BOOL)a1 successful:(BOOL)a2 prunedSize:(unsigned long long)a3;
- (BOOL)openWithError:(id *)a0;
- (unsigned long long)sizeOfResourcesToUpload;
- (BOOL)releaseFileURL:(id)a0 forResource:(id)a1 error:(id *)a2;
- (void)writeTransactionDidSucceed;
- (BOOL)compactWithError:(id *)a0;
- (BOOL)resetWithError:(id *)a0;

@end
