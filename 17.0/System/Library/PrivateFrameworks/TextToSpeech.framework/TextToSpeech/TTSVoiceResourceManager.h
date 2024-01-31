@interface TTSVoiceResourceManager : NSObject

+ (id)effectiveResourceForLanguageCode:(id)a0 andVoiceType:(long long)a1;
+ (void)enumerateLoadableResourcesInAsset:(id)a0 usingBlock:(id /* block */)a1;

@end
