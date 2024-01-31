@class NSString, FCThreadSafeMutableArray, NSObject;
@protocol OS_dispatch_queue, FCFlintHelper, FCContentContext;

@interface FCOfflineArticleFetchOperation : FCOperation <FCOfflineFetchOperationType> {
    id<FCContentContext> _context;
    id<FCFlintHelper> _flintHelper;
    NSString *_articleID;
    FCThreadSafeMutableArray *_resultInterestTokens;
}

@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressQueue;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchCompletionQueue;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 articleID:(id)a2;

@end
