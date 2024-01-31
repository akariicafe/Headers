@interface MSAuthTokenProvider : NSObject

+ (void)fetchAuthTokensForMediaService:(id)a0 networkActivity:(id)a1 completion:(id /* block */)a2;
+ (void)validateConfigurationResourceForMediaService:(id)a0 networkActivity:(id)a1 completion:(id /* block */)a2;

@end
