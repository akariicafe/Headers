@class NSString, UIActivityIndicatorView, UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol UIPrintPreviewDelegate;

@interface UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *loadingProgressView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *checkmarkImageView;
@property (retain, nonatomic) UIView *checkmarkBackgroundImageView;
@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) UIView *pageLabelAndChekmarkView;
@property (retain, nonatomic) UIView *pageLabelBackgroundBlurView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (weak, nonatomic) id<UIPrintPreviewDelegate> printPreviewDelegate;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long pageIndex;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)layoutSubviews;
- (id)accessibilityValue;
- (void)setThumbnailImage:(id)a0;
- (void)handleTap:(id)a0;
- (long long)pageLabelFormat;
- (void)addPageLabelAndImageView:(BOOL)a0;
- (BOOL)locationInTapTargetOfPageLabelBadge:(struct CGPoint { double x0; double x1; })a0;
- (void)pageBadgeTapped:(id)a0;
- (id)pageLabelText:(long long)a0;
- (void)setInRange:(BOOL)a0 animated:(BOOL)a1;
- (void)showThumbnailProgressSpinner;

@end
