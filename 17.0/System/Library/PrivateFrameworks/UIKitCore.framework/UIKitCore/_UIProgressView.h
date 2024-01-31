@class NSProgress, _UICircleProgressView;

@interface _UIProgressView : UIView {
    _UICircleProgressView *_progressView;
}

@property (retain, nonatomic) NSProgress *trackedProgress;

- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updateProgressValue;

@end
