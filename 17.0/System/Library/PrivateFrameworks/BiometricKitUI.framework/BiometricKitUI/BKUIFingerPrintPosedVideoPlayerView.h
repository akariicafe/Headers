@class NSString, UIImageView, UIImage, AVQueuePlayer, AVPlayerLayer, NSDictionary;

@interface BKUIFingerPrintPosedVideoPlayerView : UIView

@property (retain, nonatomic) AVQueuePlayer *videoPlayer;
@property (retain, nonatomic) UIImageView *portraitImageView;
@property (retain, nonatomic) UIImage *horizontalPosedImage;
@property (retain, nonatomic) UIImage *verticalPosedImage;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) NSDictionary *assetnameForAssetLengthDict;
@property (copy, nonatomic) NSString *assetName;
@property (copy, nonatomic) NSString *subDirectory;

+ (Class)layerClass;

- (void)load;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_filters;
- (void)hideVideoPlayer;
- (id)initWithAssetName:(id)a0 subdirectory:(id)a1;
- (void)showVideoPlayer;
- (id)_devicePrefix;
- (void)_setFilters:(id)a0;
- (void)_updateImageForOrientation:(long long)a0;
- (void)itemDidFinishPlaying:(id)a0;
- (void)transitionToOrientation:(long long)a0;

@end
