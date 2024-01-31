@interface AMSStoreReviewGatingController : NSObject {
    void /* unknown type, empty encoding */ ledger;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bag;

- (id)init;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)canPromptWithCompletionHandler:(void (^)(BOOL))a0;
- (void)isEnabledWithCompletionHandler:(void (^)(BOOL))a0;
- (void)didPromptWithCompletionHandler:(void (^)(void))a0;
- (void)didEnterForegroundWithCompletionHandler:(void (^)(void))a0;

@end
