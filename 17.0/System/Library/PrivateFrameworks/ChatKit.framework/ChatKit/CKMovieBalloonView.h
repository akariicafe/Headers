@class AVPlayerItem, AVPlayerLayer, CKMovieMediaObject, AVPlayer;
@protocol CKMovieBalloonViewDelegate;

@interface CKMovieBalloonView : CKImageBalloonView

@property (retain, nonatomic, setter=setAVPlayerItem:) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic, setter=setAVPlayer:) AVPlayer *avPlayer;
@property (retain, nonatomic, setter=setAVPlayerLayer:) AVPlayerLayer *avPlayerLayer;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (weak, nonatomic) id<CKMovieBalloonViewDelegate> delegate;

- (void)dealloc;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapGestureRecognized:(id)a0;
- (void)cleanupPlayerIfNeeded;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (id)createAVAssetAndValidateCodec;
- (BOOL)isCodecTypeAllowed:(unsigned int)a0;
- (void)videoDidReachEnd:(id)a0;

@end
