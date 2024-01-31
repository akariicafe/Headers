@class NSString, SPQueryResultsQueue, CSSearchQueryContext, NSSet, NSMutableArray;

@interface SPCoreSpotlightTask : NSObject

@property (retain, nonatomic) NSMutableArray *jobs;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *matchInfo;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) struct __SIQuery { } *siQuery;
@property (retain, nonatomic) SPQueryResultsQueue *resultsQueue;
@property (retain, nonatomic) CSSearchQueryContext *queryContext;
@property (nonatomic) struct { unsigned long long queryId; unsigned long long internalQueryId; } queryID;
@property BOOL canceled;
@property BOOL wasCanceledByClient;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL hasPausedResults;
@property (readonly) NSString *clientBundleID;
@property (nonatomic) BOOL willAsyncStart;
@property (copy, nonatomic) id /* block */ scheduleBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSSet *knownBundleIds;

- (void)dealloc;
- (void)poll;
- (void)start;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (void)removeJob:(id)a0;
- (void)schedule;
- (BOOL)addJob:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)resumeResults;
- (void)pauseResults;
- (void)finishWithError:(id)a0;
- (id)_sodiumBundlesWithQueryContext:(id)a0;
- (id)_makeAdditionalQueryStringForQueryContext:(id)a0;
- (id)_makeBundleQueryStringForField:(id)a0 withBundleIDs:(id)a1;
- (id)_makeBundleQueryStringForQueryContext:(id)a0;
- (id)_makeDisabledBundlesQueryStringForQueryContext:(id)a0;
- (id)_makeFilterQueryStringForQueryContext:(id)a0;
- (id)_makeInstantAnswersQueryStringForQueryContext:(id)a0;
- (id)_makePrefsQueryStringWithBundleIDs:(id)a0;
- (struct __SIQuery { } *)_makeSIQueryWithQueryString:(id)a0 queryContext:(id)a1;
- (void)addMatchInfo:(struct _MDPlistContainer { } *)a0;
- (struct __CFArray { } *)copyMatchInfo;

@end
