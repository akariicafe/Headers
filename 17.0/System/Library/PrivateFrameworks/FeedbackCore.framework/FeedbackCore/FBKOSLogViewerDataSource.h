@class NSString, OSLogPersistence, NSURL, NSDate, NSMutableArray;

@interface FBKOSLogViewerDataSource : NSObject <OSLogPersistenceDelegate>

@property (retain) OSLogPersistence *loggerLib;
@property (retain) NSURL *logArchivePath;
@property (retain) NSDate *oldestEventTimestamp;
@property unsigned long long numberOfEventsInLastFetch;
@property unsigned long long numberOfEmptyFetches;
@property BOOL gotDelegateCallbackInLastFetch;
@property unsigned long long eventCountForCurrentPage;
@property unsigned long long oldestEventMachTime;
@property (copy) id /* block */ pageFetchCompletion;
@property (copy) id /* block */ fetchErrorBlock;
@property long long pageSize;
@property long long pendingNextPageRequest;
@property long long fetchWatchdog;
@property (retain) NSMutableArray *savedEvents;
@property BOOL foundCorruptDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)shouldContinue;
- (void).cxx_destruct;
- (BOOL)persistence:(id)a0 results:(id)a1 error:(id)a2;
- (void)persistenceDidFinishReadingForStartDate:(id)a0 endDate:(id)a1;
- (void)nextPage;
- (void)fetchNextBatch;
- (void)nextPageForReal;
- (BOOL)hasMoreLogs;
- (id)initWithArchive:(id)a0 pageSize:(long long)a1 pageCompletion:(id /* block */)a2 error:(id /* block */)a3;
- (BOOL)isCurrentPageComplete;
- (BOOL)lastFetchReturnedZeroEvents;
- (id)logAtIndex:(long long)a0;
- (id)loggerLibWithArchive:(id)a0 pageSize:(unsigned long long)a1;
- (long long)numberOfLogs;
- (void)prepareForNextDateRangeFetch;
- (void)prepareForNextPage;

@end
