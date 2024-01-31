@class NSMutableSet, BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
    NSMutableSet *_enumeratedThrottleIds;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (void)close;
- (long long)completedUnitCount;
- (id)etag;
- (void).cxx_destruct;
- (id)stageID;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;

@end
