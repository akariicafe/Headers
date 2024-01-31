@interface SecCoreAnalytics : NSObject

+ (void)sendEvent:(id)a0 event:(id)a1;
+ (id)appNameFromPath:(id)a0;
+ (void)sendEventLazy:(id)a0 builder:(id /* block */)a1;

@end
