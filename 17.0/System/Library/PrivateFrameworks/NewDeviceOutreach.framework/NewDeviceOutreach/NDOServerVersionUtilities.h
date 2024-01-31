@interface NDOServerVersionUtilities : NSObject

+ (void)_dictionaryFromURL:(id)a0 shouldRetry:(BOOL)a1 withCompletion:(id /* block */)a2;
+ (void)_supportedVersionsForClientAndServer:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (void)getDecodedParamsForPath:(id)a0 withCompletion:(id /* block */)a1;
+ (id)getValidServerVersionCache;
+ (BOOL)isHighServerVersionFeaturesetEnabled;
+ (void)isHighServerVersionFeaturesetEnabled:(id /* block */)a0;
+ (void)isHighServerVersionFeaturesetEnabled:(unsigned long long)a0 withCompletion:(id /* block */)a1;
+ (id)readULWebURLOverride;
+ (id)readWebURLOverride;
+ (void)serverVersionSupported:(id /* block */)a0;

@end
