@class SearchUIImageView, NUIContainerBoxView, SearchUILabel, NUIContainerStackView, UIImageView, SFVerticalLayoutCardSection;

@interface SearchUIVerticalLayoutCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *footnoteLabel;
@property (retain, nonatomic) NUIContainerBoxView *thumbnailOverlayContainer;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) SearchUILabel *thumbnailOverlayLabel;
@property (retain, nonatomic) SearchUIImageView *thumbnailOverlayImageView;
@property (retain, nonatomic) SFVerticalLayoutCardSection *section;
@property (nonatomic) BOOL useAppIconMetrics;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)setupContentView;
- (void)buildThumbnailOverlayContainerIfNecessary;
- (id)highlightReferenceView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateThumbnailOverlayContainerWithText:(id)a0;

@end
