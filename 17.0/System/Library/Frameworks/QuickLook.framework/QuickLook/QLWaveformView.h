@class AVAsset, NSString, UIImage, UIView, UIImageView;

@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView> {
    struct CGSize { double width; double height; } _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
}

@property (copy, nonatomic) AVAsset *asset;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_expandWaveform;
- (void)_updateWithWaveformImage:(id)a0;

@end
