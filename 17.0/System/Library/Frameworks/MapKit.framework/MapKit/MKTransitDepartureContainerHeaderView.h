@class MKTransitDepartureContainerHeaderViewModel, UILayoutGuide, UIImageView, NSLayoutConstraint, _MKUILabel, MKTransitInfoLabelView;

@interface MKTransitDepartureContainerHeaderView : MKViewWithHairline {
    MKTransitInfoLabelView *_containerArtworkView;
    _MKUILabel *_containerTitleLabel;
    UIImageView *_incidentImageView;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_artworkToTitleLabelHorizontalSpacingConstraint;
}

@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateAppearance;

@end
