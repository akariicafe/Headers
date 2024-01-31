@class FCThreadSafeMutableArray, NSArray, NSDictionary, FCEdgeCacheHint, FCCKContentDatabase, NFPromise;

@interface FCCKBatchedOrderFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    unsigned long long _queryPriority;
    NSArray *_articleLinkKeys;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    id /* block */ _queryCompletionHandler;
    NFPromise *_queryCompletionPromise;
}

@property (readonly, nonatomic) FCThreadSafeMutableArray *allFeedItemAndArticleRecords;
@property (readonly, nonatomic) FCThreadSafeMutableArray *allFeedResponses;
@property (readonly, nonatomic) FCThreadSafeMutableArray *allTagRecords;
@property (readonly, nonatomic) FCThreadSafeMutableArray *allIssueRecords;
@property (readonly, nonatomic) FCThreadSafeMutableArray *allNetworkEvents;
@property (readonly, nonatomic) FCThreadSafeMutableArray *allErrors;
@property (readonly, copy, nonatomic) id /* block */ promiseResolveBlock;
@property (readonly, copy, nonatomic) id /* block */ promiseRejectBlock;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
