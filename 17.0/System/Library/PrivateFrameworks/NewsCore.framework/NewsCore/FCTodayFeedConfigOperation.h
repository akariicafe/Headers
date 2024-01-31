@class NSDictionary, NSData, FCTodayFeedConfigRequest, FCCachePolicy, NFUnfairLock;
@protocol FCNewsAppConfiguration, FCContentContext;

@interface FCTodayFeedConfigOperation : FCOperation

@property (readonly, nonatomic) NFUnfairLock *completionLock;
@property (copy, nonatomic) id /* block */ reusableCompletionHandler;
@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> appConfig;
@property (retain, nonatomic) NSData *resultCKConfigData;
@property (retain, nonatomic) NSDictionary *resultCKRecordsByType;
@property (retain, nonatomic) NSData *resultNewsEdgeConfigData;
@property (readonly, copy, nonatomic) FCTodayFeedConfigRequest *request;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)_fetchFromCK;
- (id)_fetchFromNewsEdge;
- (id)initWithContext:(id)a0 appConfig:(id)a1 request:(id)a2;

@end
