@class NSLocale;

@interface AXLTLanguageAssetManager : NSObject

@property (readonly, nonatomic) BOOL languageAssetAvaliable;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)sharedInstance;

- (void)downloadSpeechAsset:(id /* block */)a0 completion:(id /* block */)a1;
- (void)deleteSpeechAsset;

@end
