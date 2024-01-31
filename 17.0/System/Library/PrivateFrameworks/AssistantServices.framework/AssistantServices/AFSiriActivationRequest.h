@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {
    AFSiriActivationContext *_context;
}

- (id)initWithContext:(id)a0;
- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performRequestWithResultHandler:(id /* block */)a0;

@end
