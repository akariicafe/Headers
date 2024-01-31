@interface WLKNetworkRequestUtilities : NSObject

+ (id)defaultSessionConfiguration;
+ (id)_defaultAppSessionConfiguration;
+ (id)_sharedCacheSessionConfiguration;
+ (id)configurationBaseURLString;
+ (BOOL)isGDPRAccepted;
+ (void)startNetworkRequest:(id)a0 account:(id)a1 sessionConfiguration:(id)a2 options:(long long)a3 completion:(id /* block */)a4;

@end
