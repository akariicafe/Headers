@class UIImage, UIImageView, UIActivityIndicatorView;
@protocol STSLoadMoreFooterDelegate;

@interface STSLoadMoreFooter : UICollectionReusableView {
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_providerIconView;
}

@property (weak, nonatomic) id<STSLoadMoreFooterDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) UIImage *searchProviderImage;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handleLogoTap:(id)a0;

@end
