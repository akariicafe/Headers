@interface WBSAggresiveURLCredentialCache : WBSURLCredentialCache

- (void)invalidate;
- (id)credentials;
- (void)getCredentialsWithCompletionHandler:(id /* block */)a0;
- (id)initWithCredentialFetchBlock:(id /* block */)a0;

@end
