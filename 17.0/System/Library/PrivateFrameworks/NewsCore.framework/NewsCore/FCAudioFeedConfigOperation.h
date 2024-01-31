@class NSString;
@protocol FCContentContext;

@interface FCAudioFeedConfigOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultFeedConfig;
    NSString *_resultLegacyConfig;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void)performOperation;
- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
