@interface EMRemoteContentURLCache : NSURLCache

- (void)storeResponseIfNeeded:(id)a0 withData:(id)a1 forDataTask:(id)a2 completionHandler:(id /* block */)a3;
- (void)getCachedResponseForDataTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (void)storeCancelationIfNeededForDataTask:(id)a0 completionHandler:(id /* block */)a1;

@end
