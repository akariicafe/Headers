@class PXCMMPosterHeaderViewModel, NSString, PXCMMImageView, PXCMMPosterHeaderViewSpec, PXGradientView, UILabel, UIImageView;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver> {
    PXCMMPosterHeaderViewSpec *_spec;
    PXCMMImageView *_imageView;
    PXGradientView *_topGradientView;
    PXGradientView *_bottomGradientView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    UIImageView *_statusCheckmark;
}

@property (readonly, nonatomic) long long presentationStyle;
@property (retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForWidth:(double)a0 traitCollection:(id)a1 screen:(id)a2;
+ (void)preheatSharedValuesForPresentationStyle:(long long)a0;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)_updateSubtitle;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_performLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateStatusString;
- (id)initWithPresentationStyle:(long long)a0;
- (BOOL)test_showStatusCheckmark;
- (id)test_statusString;
- (id)test_subtitle;
- (id)test_title;

@end
