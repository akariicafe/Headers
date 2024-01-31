@class CSSearchQuery, NSMutableDictionary, ICRankingQueriesDefinition, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore;
@property (nonatomic) BOOL wasForceStopped;
@property (retain, nonatomic) CSSearchQuery *searchQuery;
@property (retain, nonatomic) NSMutableDictionary *mutableQueryResults;
@property (retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition;
@property (retain, nonatomic) NSArray *externalRankingQueries;
@property (readonly, nonatomic) NSDictionary *queryResults;
@property (readonly, nonatomic) BOOL modernResultsOnly;

+ (id)defaultAttributesToReturnFromCoreSpotlight;

- (BOOL)run:(id *)a0;
- (double)timeoutInterval;
- (void)forceStop;
- (id)rankingQueries;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithExternalRankingQueries:(id)a0;
- (id)attributesToFetch;
- (id)initWithRankingQueriesDefinition:(id)a0;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;
- (void)queryFinishedRunningWithError:(id)a0;
- (id)queryResultsToAddFromBatch:(id)a0;
- (void)setupWithAttributes:(id)a0;

@end
