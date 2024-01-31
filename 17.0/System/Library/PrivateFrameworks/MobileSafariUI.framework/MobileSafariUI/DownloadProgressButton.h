@class SFProgressView;

@interface DownloadProgressButton : UIButton {
    SFProgressView *_progressView;
}

@property (nonatomic) BOOL showsProgressRing;
@property (nonatomic) double progress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
