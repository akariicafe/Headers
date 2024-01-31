@class NSString, NSMutableDictionary;

@interface CNAutocompleteFontMetricCache : NSObject {
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
}

+ (id)sharedFontMetricCache;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)_didReceivePreferredFontChangedNotification:(id)a0;
- (double)cachedFloat:(id /* block */)a0 forKey:(id)a1;
- (id)cachedFont:(id /* block */)a0 forKey:(id)a1;
- (id)cachedPreferredFontForStyle:(id)a0;
- (double)cachedScaledFloatWithValue:(double)a0 fontStyle:(id)a1;
- (double)cachedScaledFloatWithValue:(double)a0 forKey:(id)a1;
- (BOOL)ensureCacheIsValid;
- (id)metricCacheDictionary;

@end
