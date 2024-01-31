@class NSString, NSDictionary, PRSPosterUpdate, NSError, NSMutableArray, PRSPosterConfiguration;

@interface _AMUIPosterUpdate : NSObject <BSCancellable> {
    BOOL _isFinished;
    NSMutableArray *_completions;
    NSError *_firedError;
    PRSPosterConfiguration *_firedConfiguration;
}

@property (readonly, nonatomic) PRSPosterConfiguration *posterConfiguration;
@property (readonly, nonatomic) PRSPosterUpdate *update;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (void)adoptCompletionsFromStaleUpdate:(id)a0;
- (void)appendCompletion:(id /* block */)a0;
- (BOOL)fireCompletionBlocksWithUpdatedPosterConfiguration:(id)a0 error:(id)a1;
- (id)initWithPosterConfiguration:(id)a0 update:(id)a1 userInfo:(id)a2;

@end
