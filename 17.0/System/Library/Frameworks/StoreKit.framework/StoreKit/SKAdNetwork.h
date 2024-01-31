@interface SKAdNetwork : NSObject

+ (void)endImpression:(id)a0 completionHandler:(id /* block */)a1;
+ (void)registerAppForAdNetworkAttribution;
+ (void)startImpression:(id)a0 completionHandler:(id /* block */)a1;
+ (void)updateConversionValue:(long long)a0;
+ (void)updatePostbackConversionValue:(long long)a0 coarseValue:(id)a1 completionHandler:(id /* block */)a2;
+ (void)updatePostbackConversionValue:(long long)a0 coarseValue:(id)a1 lockWindow:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (void)updatePostbackConversionValue:(long long)a0 completionHandler:(id /* block */)a1;

@end
