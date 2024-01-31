@class PXMomentShareStatusPresentation, NSString, UIAlertController, UIVisualEffectView, UITextView, UILabel, UIProgressView;
@protocol PXCMMProgressBannerViewDelegate;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate> {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    UIVisualEffectView *_visualEffectView;
    UITextView *_activityTextView;
    UILabel *_pauseLabel;
    UIProgressView *_progressView;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<PXCMMProgressBannerViewDelegate> delegate;
@property (readonly, nonatomic) double layoutHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateActivityTitle;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_updatePauseTitle;
- (id)initWithMomentShareStatusPresentation:(id)a0;

@end
