@class NSArray, FCCachePolicy, FCTagController;
@protocol FCSportsEventsFetchOperationDelegate, FCNewsAppConfigurationManager, FCContentContext;

@interface FCSportsEventsFetchOperation : FCOperation {
    id<FCContentContext> _context;
    FCTagController *_tagController;
    NSArray *_sportsEventIDs;
    id<FCNewsAppConfigurationManager> _appConfigurationManager;
    id<FCSportsEventsFetchOperationDelegate> _delegate;
    NSArray *_resultSportsEvents;
}

@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 tagController:(id)a1 sportsEventIDs:(id)a2 delegate:(id)a3;

@end
