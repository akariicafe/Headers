@class NSString, SFImage, NUIContainerBoxView, SearchUIFeatheredBlurView, SearchUILabel, NUIContainerStackView, SFHeroCardSection, SearchUIButtonItemStackView, SearchUIImageView, UIVisualEffectView;

@interface SearchUIHeroCardSectionView : SearchUICardSectionView <TLKImageViewDelegate, NUIContainerViewDelegate>

@property (retain) SearchUIImageView *backgroundImageView;
@property (retain) SearchUIImageView *thumbnailImageView;
@property (retain) SearchUIImageView *punchoutIndicatorImageView;
@property (retain) NUIContainerStackView *thumbnailAndLabelsStackView;
@property (retain) NUIContainerStackView *labelsStackView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;
@property (retain) NUIContainerStackView *containerStackView;
@property (retain) NUIContainerStackView *buttonStackView;
@property (retain) SFImage *currentImage;
@property (readonly, nonatomic) SFHeroCardSection *section;
@property (retain) NUIContainerBoxView *contentView;
@property (retain, nonatomic) SearchUIButtonItemStackView *buttonItemStackView;
@property (retain) UIVisualEffectView *punchoutIndicatorBackgroundBlurView;
@property (retain) SearchUIFeatheredBlurView *blurEffectView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)defaultSeparatorStyleForRowModel:(id)a0;
+ (BOOL)fillsBackgroundWithContentForRowModel:(id)a0;
+ (BOOL)showsBackgroundImageViewForRowModel:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (BOOL)hasBackground;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)didUpdateWithImage:(id)a0;
- (void)didFailToLoadImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)buttonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)setupContentView;
- (id)highlightReferenceView;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (BOOL)showBackgroundImageView;
- (void)showGradientAnimated:(BOOL)a0;
- (void)updateButtonsForCardSection:(id)a0;
- (void)updatePunchoutIconForRowModel:(id)a0;
- (void)updatePunchoutImageWithBundleIdentifier:(id)a0;
- (void)updateWithButtonViews:(id)a0 visible:(BOOL)a1 addBackground:(BOOL)a2 animate:(BOOL)a3;
- (void)updateWithPunchoutImage:(id)a0;

@end
