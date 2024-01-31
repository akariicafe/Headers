@class AVTSnapshotHelper, AVTRenderer, AVTAvatar, AVTStickerConfigurationReversionContext;

@interface AVTStickerGenerator : NSObject {
    AVTRenderer *_renderer;
    AVTSnapshotHelper *_snapshotHelper;
    AVTStickerConfigurationReversionContext *_context;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) BOOL async;

+ (id)workQueue;
+ (void)addProps:(id)a0 toScene:(id)a1 forAvatar:(id)a2 withCamera:(id)a3 options:(id)a4 reversionContext:(id)a5;
+ (id)addCamera:(id)a0 inScene:(id)a1 reversionContext:(id)a2;
+ (void)applyViewTransitionConfiguration:(id)a0 toNewComponentAssetNode:(id)a1;
+ (void)applyViewTransitionConfiguration:(id)a0 toView:(id)a1 scope:(unsigned long long)a2 options:(unsigned long long)a3 duration:(double)a4 avatar:(id)a5 context:(id)a6 completionHandler:(id /* block */)a7;
+ (id)findNodesNamed:(id)a0 inHierarchy:(id)a1;
+ (id)poseByApplyingAdjustmentsForConfiguration:(id)a0 avatar:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAvatar:(id)a0;
- (void)posterWithConfiguration:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)stickerImageWithConfiguration:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_snapshotAtTime:(double)a0 configuration:(id)a1 options:(id)a2 completionBlock:(id /* block */)a3;
- (void)_stickerImageWithConfiguration:(id)a0 options:(id)a1 startTime:(double)a2 completionHandler:(id /* block */)a3;
- (void)applyConfiguration:(id)a0 options:(id)a1 snapshotBlock:(id /* block */)a2;
- (void)stickerImageWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)stickerImageWithConfiguration:(id)a0 correctClipping:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateConfiguration:(id)a0 atTime:(double)a1;

@end
