@interface ICStoreURLResponseHandler : ICURLResponseHandler

+ (void)_updateDefaultStorefrontIdentifier:(id)a0 usingIdentityStore:(id)a1;

- (void)processCompletedResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_verifyMescalSignatureForResponse:(id)a0 toRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)processInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)_isAuthenticationError:(id)a0;

@end
