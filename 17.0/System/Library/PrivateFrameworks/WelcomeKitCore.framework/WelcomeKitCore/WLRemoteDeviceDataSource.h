@class NSString, NSOperationQueue, NSURLSession;

@interface WLRemoteDeviceDataSource : NSObject <WLMigrationDataSource> {
    NSOperationQueue *_queue;
}

@property (nonatomic) unsigned short port;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_requestSerialQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)_urlScheme;
- (double)_urlRequestTimeout;
- (BOOL)_shouldHandleHTTPErrorWithResponse:(id)a0 expectedContentLength:(unsigned long long)a1 error:(id *)a2;
- (void)_downloadTaskWithRequest:(id)a0 expectedContentLength:(unsigned long long)a1 numberOfRetriesAllowed:(unsigned long long)a2 startDate:(id)a3 fileAccessor:(id /* block */)a4 completion:(id /* block */)a5;
- (double)_maximumRetriableTaskDurationForLongServerOperations;
- (unsigned long long)_newNumberOfRetriesAllowed:(unsigned long long)a0 startDate:(id)a1;
- (void)_performDownloadRequest:(id)a0 expectedContentLength:(unsigned long long)a1 numberOfRetriesAllowed:(unsigned long long)a2 startDate:(id)a3 fileAccessor:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_performRequest:(id)a0 expectedContentLength:(unsigned long long)a1 numberOfRetriesAllowed:(unsigned long long)a2 preventRetriesAfterTaskExceedsDuration:(BOOL)a3 taskDurationLimit:(double)a4 startDate:(id)a5 completionHandler:(id /* block */)a6;
- (long long)_retryLaterDelayInSeconds;
- (void)_runTaskWithRequest:(id)a0 expectedContentLength:(unsigned long long)a1 numberOfRetriesAllowed:(unsigned long long)a2 preventRetriesAfterTaskExceedsDuration:(BOOL)a3 taskDurationLimit:(double)a4 startDate:(id)a5 completionHandler:(id /* block */)a6;
- (BOOL)_shouldRetryLaterWithResponse:(id)a0 error:(id)a1;
- (BOOL)_shouldRetryWithData:(id)a0 response:(id)a1 error:(id)a2;
- (BOOL)_shouldRetryWithPreventRetriesAfterTaskExceedsDuration:(BOOL)a0 taskDurationLimit:(double)a1 taskDuration:(double)a2;
- (double)_taskDurationSinceStartDate:(id)a0;
- (id)_urlForAccountsWithMigrator:(id)a0;
- (id)_urlForRecordForMigrator:(id)a0 withSummaryIdentifier:(id)a1 accountIdentifier:(id)a2 segmentByteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)_urlForRecordSummariesForMigrator:(id)a0 withAccountIdentifier:(id)a1;
- (void)_willRetryPerformRequest;
- (void)accountsDataForMigrator:(id)a0 completion:(id /* block */)a1;
- (void)dataForSummary:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)dataSegmentForSummary:(id)a0 byteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 migrator:(id)a2 completion:(id /* block */)a3;
- (void)fileForSummary:(id)a0 migrator:(id)a1 fileAccessor:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithHost:(id)a0 port:(unsigned short)a1 session:(id)a2;
- (void)itemSizeForSummary:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)summariesDataForAccount:(id)a0 migrator:(id)a1 completion:(id /* block */)a2;
- (void)updateUIWithProgress:(double)a0 remainingTime:(double)a1 logString:(id)a2 completion:(id /* block */)a3;

@end
