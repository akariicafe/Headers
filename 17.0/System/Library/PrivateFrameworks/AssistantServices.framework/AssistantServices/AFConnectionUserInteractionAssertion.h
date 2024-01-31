@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (void)releaseAssertion;
- (id)initWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
