@class NSArray, NSDictionary, FCCachePolicy;
@protocol FCContentContext;

@interface FCChannelIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSArray *channelIDs;
@property (nonatomic) long long issueSet;
@property (retain, nonatomic) NSDictionary *resultIssuesByChannel;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 channelIDs:(id)a1 issueSet:(long long)a2;

@end
