@class NSArray, NSString, SBHIconImageCache, NSMutableArray, SBHLibraryIndicatorIconSettings;

@interface SBHLibraryCategoryStackView : UIView <SBHIconImageCacheObserver, BSDescriptionProviding> {
    NSMutableArray *_podBackgroundViews;
    NSMutableArray *_iconImageViews;
    SBHLibraryIndicatorIconSettings *_iconSettings;
    SBHIconImageCache *_iconImageCache;
}

@property (nonatomic) unsigned long long numberOfCategories;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (copy, nonatomic) NSArray *innerIcons;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (copy, nonatomic) NSString *backdropGroupNamespace;
@property (nonatomic, getter=isInnerIconImageInfoFrozen) BOOL innerIconImageInfoFrozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)iconImageCache:(id)a0 didUpdateImageForIcon:(id)a1;
- (id)succinctDescriptionBuilder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleContentFrame;
- (void)_appendConfiguredPodBackgroundView;
- (double)_innerIconEdgeSpacingFraction;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_innerIconImageInfo;
- (double)_innerIconInterSpacingFraction;
- (void)_reconfigurePodBackgroundViews;
- (void)_removeLastPodBackgroundView;
- (id)_scalingAnimationSettingsForStackedViewAtIndex:(unsigned long long)a0 scale:(out double *)a1;
- (void)_updateIconImageViewAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateIconImageViewsAnimated:(BOOL)a0;
- (double)alphaForStackedViewAtIndex:(unsigned long long)a0;
- (id)backgroundViewForIndex:(unsigned long long)a0 compatibleWithTraitCollection:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForStackedViewAtIndex:(unsigned long long)a0;
- (id)matchingCategoryStackView;
- (void)setInnerIcons:(id)a0 animated:(BOOL)a1;

@end
