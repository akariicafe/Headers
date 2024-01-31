@class AVTView, AVTStickerConfigurationReversionContext, AVTStickerConfiguration, SCNTechnique;

@interface AVTViewTransitionHelper : NSObject {
    AVTView *_view;
    AVTStickerConfiguration *_stickerConfiguration;
    SCNTechnique *_transitionTechnique;
    AVTStickerConfigurationReversionContext *_stickerTransitionReversionContext;
}

- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)viewBackgroundColor;
- (void)coordinator_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)a0 duration:(double)a1 options:(unsigned long long)a2 avatar:(id)a3 avatarNode:(id)a4 oldReversionContext:(id)a5;
- (void)coordinator_performCrossFadeThenAnimateTransitionOutOfStickerConfigurationWithDuration:(double)a0 avatar:(id)a1 avatarNode:(id)a2 oldReversionContext:(id)a3;
- (void)coordinator_performCrossFadeTransitionOutOfStickerConfigurationWithDuration:(double)a0 avatar:(id)a1 avatarNode:(id)a2 oldReversionContext:(id)a3;
- (void)coordinator_performCrossFadeTransitionToStickerConfiguration:(id)a0 duration:(double)a1 options:(unsigned long long)a2 avatar:(id)a3 avatarNode:(id)a4 oldReversionContext:(id)a5;
- (id)snapshotViewUsingBackgroundColor:(SEL)a0;
- (id)transitionTechnique;
- (void)view_performAnimateThenCrossFadeTransitionFromStickerConfiguration:(id)a0 toStickerConfiguration:(id)a1 duration:(double)a2 avatar:(id)a3 avatarNode:(id)a4 oldReversionContext:(id)a5 completionHandler:(id /* block */)a6 simultaneousAnimationsBlock:(id /* block */)a7;
- (void)view_performCrossFadeThenAnimateTransitionToStickerConfiguration:(id)a0 fallbackPose:(id)a1 duration:(double)a2 avatar:(id)a3 avatarNode:(id)a4 oldReversionContext:(id)a5 completionHandler:(id /* block */)a6 simultaneousAnimationsBlock:(id /* block */)a7;
- (void)view_performCrossFadeTransitionToStickerConfiguration:(id)a0 fallbackPose:(id)a1 duration:(double)a2 avatar:(id)a3 avatarNode:(id)a4 oldReversionContext:(id)a5 completionHandler:(id /* block */)a6 simultaneousAnimationsBlock:(id /* block */)a7;

@end
