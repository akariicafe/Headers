@class _UIOrderedLayoutArrangement, NSArray, _UIAlignedLayoutArrangement, NSMutableArray;

@interface UIStackView : UIView {
    NSMutableArray *_mutableLayoutArrangements;
    _UIOrderedLayoutArrangement *_distributionArrangement;
    _UIAlignedLayoutArrangement *_alignmentArrangement;
    BOOL _didRequestTallestBaselineViewForFirst;
    BOOL _didRequestTallestBaselineViewForLast;
    BOOL _viewForFirstBaselineLayoutDidChange;
    BOOL _viewForLastBaselineLayoutDidChange;
}

@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;

+ (Class)layerClass;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (id)viewForLastBaselineLayout;
- (void)setOpaque:(BOOL)a0;
- (void)addArrangedSubview:(id)a0;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (void)setArrangedSubviews:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)description;
- (void).cxx_destruct;
- (double)_calculatedIntrinsicHeight;
- (id)initWithCoder:(id)a0;
- (BOOL)_ola_isCandidateForMultilineTextWidthDisambiguationWhenArranged;
- (id)_baselineViewForFirst:(BOOL)a0;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)a0;
- (BOOL)_hasLayoutArrangements;
- (id)_mutableLayoutArrangements;
- (double)_proportionalFillLengthForOrderedArrangement:(id)a0 relevantParentAxis:(long long)a1;
- (BOOL)_recordBaselineLoweringInfo;
- (BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2 hasIntentionallyCollapsedHeight:(BOOL *)a3;
- (void)_vendedBaselineViewDidMoveForFirst:(BOOL)a0;
- (void)_vendedBaselineViewParametersDidChange;
- (double)customSpacingAfterView:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;

@end
