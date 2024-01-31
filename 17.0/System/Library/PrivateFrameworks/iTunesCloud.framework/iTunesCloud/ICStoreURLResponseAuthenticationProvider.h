@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)performAuthenticationToHandleResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_performAuthenticationUsingRequestContext:(id)a0 usingVerificationInteractionLevel:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_adjustedAuthenticationPolicyForResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performAuthenticationUsingRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
