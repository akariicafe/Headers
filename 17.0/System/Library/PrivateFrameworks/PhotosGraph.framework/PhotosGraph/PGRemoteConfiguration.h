@class NSArray, NSMutableDictionary;

@interface PGRemoteConfiguration : NSObject {
    NSMutableDictionary *_remoteConfigurationCache;
    NSArray *_configurationSources;
}

- (id)init;
- (void).cxx_destruct;
- (void)_cacheFallbackValueForKey:(id)a0 withValue:(id)a1;
- (id)_configValueForKey:(id)a0 withFallbackValue:(id)a1;
- (BOOL)_isValidFilePath:(id)a0;
- (id)arrayValueForKey:(id)a0 withFallbackValue:(id)a1;
- (BOOL)boolValueForKey:(id)a0 withFallbackValue:(BOOL)a1;
- (id)dictionaryValueForKey:(id)a0 withFallbackValue:(id)a1;
- (double)doubleValueForKey:(id)a0 withFallbackValue:(double)a1;
- (id)fileValueForKey:(id)a0 withFallbackValue:(id)a1;
- (id)initWithConfigurationSources:(id)a0;
- (id)initWithTrialNamespace:(unsigned short)a0 onDiskResourceFile:(id)a1;
- (long long)longValueForKey:(id)a0 withFallbackValue:(long long)a1;
- (id)onDiskConfigurationPathForResourceFileName:(id)a0;
- (id)stringValueForKey:(id)a0 withFallbackValue:(id)a1;

@end
