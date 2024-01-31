@class UILabel, UIImageView, UILayoutGuide;
@protocol MUCuratedCollectionSummary;

@interface MUCuratedCollectionSummaryView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    UILayoutGuide *_layoutGuide;
}

@property (retain, nonatomic) id<MUCuratedCollectionSummary> viewModel;

- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)publisherString;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (void)_updateImageViewForInterfaceStyle;

@end
