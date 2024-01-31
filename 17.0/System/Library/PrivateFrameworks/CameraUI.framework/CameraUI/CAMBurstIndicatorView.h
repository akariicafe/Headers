@class UILabel, UIView;

@interface CAMBurstIndicatorView : UIView

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UILabel *_countLabel;
@property (readonly, nonatomic) long long _numberOfPhotos;
@property (nonatomic) long long layoutStyle;

- (id)initWithLayoutStyle:(long long)a0;
- (void)reset;
- (void)_performCaptureAnimation;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCountLabelWithNumberOfPhotos;
- (long long)incrementWithCaptureAnimation:(BOOL)a0;
- (void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)a0;
- (void)finishIncrementingWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateAttributes;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
