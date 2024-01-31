@interface WLKConfigurationRequest : NSObject

+ (id)_configURLString:(id *)a0;
+ (void)_fetchV3WithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 sessionConfiguration:(id)a2 queryParameters:(id)a3 completion:(id /* block */)a4;
+ (void)fetchWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 wlkCachePolicy:(unsigned long long)a2 extendedCacheExpireDuration:(double)a3 sessionConfiguration:(id)a4 queryParameters:(id)a5 fileStorage:(id)a6 completion:(id /* block */)a7;

@end
