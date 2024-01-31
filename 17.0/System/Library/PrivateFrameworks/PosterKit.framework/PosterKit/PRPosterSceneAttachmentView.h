@class PRPosterSceneAttachment, CALayerHost;

@interface PRPosterSceneAttachmentView : PRRenderingView {
    CALayerHost *_layerHost;
}

@property (retain, nonatomic) PRPosterSceneAttachment *attachment;

- (id)layerHost;
- (void)invalidate;
- (id)contentLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isEmpty;
- (void)_teardownContentLayer;

@end
