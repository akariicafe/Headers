@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (void)dealloc;
- (id)allowedBundleIDs;
- (id)queryTask:(long long)a0;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (BOOL)searchInternal;
- (void)pollResultsForQueryTask:(long long)a0;
- (id)initWithConnectionConfiguration:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)cancelQueryTasks;
- (id)bundleID;
- (void)_didReceiveResultsBatchCompletion;
- (void).cxx_destruct;
- (void)cancelQueryTask:(long long)a0;
- (void)overrideMailHitCounts:(id)a0;
- (id)protectionClass;

@end
