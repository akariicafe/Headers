@class UIImageView, NSArray;

@interface PKImageSequenceView : UIView {
    BOOL _isAnimating;
    unsigned long long _animationContext;
    unsigned long long _activeImageIndex;
    UIImageView *_imageView;
    UIImageView *_fadeInImageView;
    NSArray *_images;
}

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)_finishedTransitionToImage:(id)a0;
- (void)_transitionToImage:(id)a0 immedately:(BOOL)a1 fast:(BOOL)a2;
- (id)initWitImages:(id)a0;
- (void)updateImages:(id)a0;

@end
