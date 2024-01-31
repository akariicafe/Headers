@interface PSGUtilities : NSObject

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)a0 withLocale:(id)a1;
- (id)localizedStringForKey:(id)a0 withLocale:(id)a1 onlyIfCached:(BOOL)a2 wasCached:(BOOL *)a3;
- (id /* block */)prewarmCacheForLocale:(id)a0 usingQueue:(id)a1;

@end
