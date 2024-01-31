@class NSObject, NSString, AVTAvatarConfigurationImageRenderer, AVTRenderingScope;
@protocol AVTDeviceResourceConsumerDelegate, AVTTaskScheduler, AVTImageCache, AVTUILogger, OS_dispatch_queue;

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer>

@property (readonly, nonatomic) id<AVTImageCache> cache;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presetQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *colorQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) AVTRenderingScope *colorScope;
@property (readonly, nonatomic) AVTRenderingScope *defaultScope;
@property (weak, nonatomic) id<AVTDeviceResourceConsumerDelegate> consumerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationToRenderForPreset:(id)a0 overrides:(id)a1 baseConfiguration:(id)a2;
+ (id)presetImageCacheWithEnvironment:(id)a0;

- (void).cxx_destruct;
- (id)initWithCache:(id)a0 environment:(id)a1;
- (id)initWithCache:(id)a0 renderingScheduler:(id)a1 environment:(id)a2;
- (id)initWithCache:(id)a0 renderingScheduler:(id)a1 renderingQueueProvider:(id /* block */)a2 callbackQueue:(id)a3 renderer:(id)a4 defaultScope:(id)a5 environment:(id)a6;
- (id)initWithRenderingScheduler:(id)a0 environment:(id)a1;
- (id /* block */)providerForImageForItem:(id)a0 scope:(id)a1 queue:(id)a2 renderingHandler:(id /* block */)a3;
- (id /* block */)providerForThumbnailForModelColor:(id)a0;
- (id /* block */)providerForThumbnailForModelPreset:(id)a0 presetOverrides:(id)a1 poseOverride:(id)a2 avatarConfiguration:(id)a3 framingMode:(id)a4;
- (void)releaseRenderingResourceForEstimatedDuration:(double)a0;
- (id)renderThumbnailForModelColor:(id)a0;

@end
