@class ISWrappedAVPlayer, ISAVPlayerUIView;

@interface ISVideoPlayerUIView : UIView {
    ISAVPlayerUIView *_playerView;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (readonly, nonatomic) BOOL videoLayerReadyForDisplay;

- (id)playerLayer;
- (void)setContentMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (void)_updateVideoGravity;
- (id)initWithCoder:(id)a0;

@end
