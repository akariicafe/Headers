@interface TPSJSONCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (id)formattedDataWithData:(id)a0;
- (id)formattedDataWithFileURL:(id)a0;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;

@end
