@class NUIContainerBoxView, SearchUIImageView, SearchUILabel, NUIContainerStackView, SearchUINewsCardGradientView;

@interface SearchUINewsCardSectionView : SearchUICardSectionView

@property (retain) NUIContainerStackView *contentView;
@property (retain) NUIContainerBoxView *baseBoxView;
@property (retain) NUIContainerBoxView *textContentBoxView;
@property (retain) NUIContainerStackView *textContentStackView;
@property (retain) SearchUINewsCardGradientView *gradientView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *providerImageView;
@property (retain) SearchUILabel *providerLabel;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property BOOL overlaysTextInImage;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })largeThumbnailSize;
- (id)setupContentView;
- (id)highlightReferenceView;
- (double)minThumbnailBottomSpacing;
- (double)providerImageVerticalOffset;
- (double)providerImageVerticalSizeDelta;
- (struct CGSize { double x0; double x1; })smallThumbnailSize;
- (double)stackViewVerticalSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInset;
- (void)updateLayoutForCardSection:(id)a0;

@end
