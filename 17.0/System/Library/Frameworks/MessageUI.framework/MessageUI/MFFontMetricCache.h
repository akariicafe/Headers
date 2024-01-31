@class NSString, NSMutableDictionary;

@interface MFFontMetricCache : NSObject {
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
    NSMutableDictionary *_bodyLeadingDictionary;
    NSMutableDictionary *_defaultBodyLeadingDictionary;
}

+ (id)sharedFontMetricCache;

- (id)init;
- (void)_invalidateCache;
- (void).cxx_destruct;
- (id)cachedImage:(id /* block */)a0 forKey:(id)a1;
- (void)_didReceivePreferredFontChangedNotification:(id)a0;
- (double)cachedFloat:(id /* block */)a0 forKey:(id)a1;
- (id)cachedFont:(id /* block */)a0 forKey:(id)a1;
- (id)cachedPreferredFontForStyle:(id)a0;
- (id)cachedPreferredFontForStyle:(id)a0 maximumContentSizeCategory:(id)a1;
- (double)cachedScaledFloatWithValue:(double)a0 fontStyle:(id)a1;
- (double)cachedScaledFloatWithValue:(double)a0 fontStyle:(id)a1 maximumContentSizeCategory:(id)a2;
- (double)cachedScaledFloatWithValue:(double)a0 forKey:(id)a1;
- (BOOL)ensureCacheIsValid;
- (id)metricCacheDictionary;

@end
