@interface WebDefaultResourceLoadDelegate : NSObject

+ (id)sharedResourceLoadDelegate;

- (id)webView:(id)a0 connectionPropertiesForResource:(id)a1 dataSource:(id)a2;
- (id)webView:(id)a0 identifierForInitialRequest:(id)a1 fromDataSource:(id)a2;
- (void)webView:(id)a0 plugInFailedWithError:(id)a1 dataSource:(id)a2;
- (BOOL)webView:(id)a0 resource:(id)a1 canAuthenticateAgainstProtectionSpace:(id)a2 forDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didFinishLoadingFromDataSource:(id)a2;
- (void)webView:(id)a0 resource:(id)a1 didReceiveAuthenticationChallenge:(id)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didReceiveContentLength:(long long)a2 fromDataSource:(id)a3;
- (void)webView:(id)a0 resource:(id)a1 didReceiveResponse:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)webView:(id)a0 didLoadResourceFromMemoryCache:(id)a1 response:(id)a2 length:(long long)a3 fromDataSource:(id)a4;
- (BOOL)webView:(id)a0 resource:(id)a1 shouldUseCredentialStorageForDataSource:(id)a2;
- (id)webView:(id)a0 resource:(id)a1 willCacheResponse:(id)a2 fromDataSource:(id)a3;

@end
