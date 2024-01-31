@class AVAsset;

@interface AVAssetPlaybackAssistant : NSObject {
    AVAsset *_asset;
}

+ (id)assetPlaybackAssistantWithAsset:(id)a0;

- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (id)_playbackConfigurationOptions;
- (void)loadPlaybackConfigurationOptionsWithCompletionHandler:(id /* block */)a0;

@end
