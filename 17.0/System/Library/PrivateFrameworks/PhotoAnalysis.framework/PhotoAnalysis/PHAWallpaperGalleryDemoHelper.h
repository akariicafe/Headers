@class NSDictionary, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PHAWallpaperGalleryDemoHelper : NSObject {
    NSDictionary *_config;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_sampleDemoConifg;
+ (id)_shuffleConfig;
+ (id)_suggestedPhotoConfig;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)demoDescriptors;
- (id)_demoShuffleDescriptors;
- (id)_demoSuggestedPhotoDescriptors;
- (id)_descriptorConfigsFromDictionaries:(id)a0;
- (id)_fetchWallpaperSuggestionWithKeyAssetUUID:(id)a0;

@end
