@class NSString, UIImageView, UIImage, MPMoviePlayerController;
@protocol SUUIEmbeddedMediaViewDelegate;

@interface SUUIEmbeddedMediaView : UIControl {
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    BOOL _usingInlinePlayback;
}

@property (weak, nonatomic) id<SUUIEmbeddedMediaViewDelegate> delegate;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *mediaURLString;
@property (readonly, nonatomic) long long playbackState;
@property (nonatomic) BOOL showsThumbnailReflection;
@property (nonatomic) long long thumbnailContentMode;
@property (retain, nonatomic) UIImage *thumbnailImage;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_thumbnailView;
- (void)_tearDownMoviePlayer;
- (void)_didExitFullscreen:(id)a0;
- (void)_didFinishPlayback:(id)a0;
- (id)_newMoviePlayerControllerWithURL:(id)a0;
- (void)_playbackStateChanged:(id)a0;
- (void)_sendPlaybackStateChanged;
- (struct CGSize { double x0; double x1; })_sizeToFitImageSize:(struct CGSize { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beginInlinePlaybackWithURL:(id)a0;
- (void)beginPlaybackAnimated:(BOOL)a0;
- (void)endPlaybackAnimated:(BOOL)a0;

@end
