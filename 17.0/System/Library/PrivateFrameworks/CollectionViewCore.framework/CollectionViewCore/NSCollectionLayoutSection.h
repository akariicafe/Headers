@class UICollectionLayoutSectionOrthogonalScrollingProperties, NSArray, NSIndexSet, NSCollectionLayoutGroup, NSDictionary;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying> {
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
    UICollectionLayoutSectionOrthogonalScrollingProperties *_orthogonalScrollingProperties;
}

@property (copy, nonatomic) NSCollectionLayoutGroup *group;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (readonly, nonatomic) NSDictionary *decorationItemssDict;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic, getter=_callback) id<_UICollectionLayoutSectionCallback> callback;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double _cornerRadius;
@property (nonatomic, getter=_clipsContentToBounds, setter=_setClipsContentToBounds:) BOOL _clipsContentToBounds;
@property (nonatomic, getter=_excludesBoundarySupplementariesFromClipping, setter=_setExcludesBoundarySupplementariesFromClipping:) BOOL _excludesBoundarySupplementariesFromClipping;
@property (nonatomic, getter=_clipsBackgroundDecorationsToContent, setter=_setClipsBackgroundDecorationsToContent:) BOOL _clipsBackgroundDecorationsToContent;
@property (nonatomic, getter=_clippingInsets, setter=_setClippingInsets:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _clippingInsets;
@property (nonatomic, getter=_preBoundaryPadding, setter=_setPreBoundaryPadding:) double _preBoundaryPadding;
@property (nonatomic, getter=_postBoundaryPadding, setter=_setPostBoundaryPadding:) double _postBoundaryPadding;
@property (nonatomic) BOOL prefersListSolver;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long contentInsetsReference;
@property (nonatomic) long long supplementaryContentInsetsReference;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (readonly, nonatomic) UICollectionLayoutSectionOrthogonalScrollingProperties *orthogonalScrollingProperties;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) BOOL supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsInvalidationHandler;
@property (copy, nonatomic) NSArray *decorationItems;

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)a0;

- (void)_didEndSwiping;
- (double)_alignedContentMarginGivenMargin:(double)a0;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)a0;
- (void)_willBeginSwiping;
- (BOOL)_hasBackgroundDecorationItem;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)a0;
- (id)_backgroundDecorationViewsRequiringCustomViewClassRegistration;
- (BOOL)_isEmptySection;
- (BOOL)_pinnedSupplementariesShouldOverlap;
- (void)_updateStyleForSwipeActionsConfiguration:(id)a0;
- (id)_orthogonalScrollingProperties;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (id)decorationItemsDict;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (id)_descriptionProperties;
- (BOOL)_hasVisibleItemsHandler;
- (id)initWithLayoutGroup:(id)a0;
- (id)description;
- (id)_auxillaryItemForElementKind:(id)a0 category:(unsigned long long)a1;
- (BOOL)_wantsSwipeActions;
- (void).cxx_destruct;
- (id)_preferredContainerBackgroundColor;
- (BOOL)_wantsBandSelectionVisuals;
- (BOOL)isEqual:(id)a0;
- (BOOL)_containsBackgroundDecorationItem:(id)a0;
- (double)_paddingToBoundarySupplementaries;
- (BOOL)shouldRestrictOrthogonalAxisDuringInteractiveMovement;
- (id)initWithGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 contentInsetsReference:(long long)a2 supplementaryItems:(id)a3 boundarySupplementaryItems:(id)a4 pinnedSupplementaryItemIndexes:(id)a5 interGroupSpacing:(double)a6 visibleItemsInvalidationHandler:(id /* block */)a7 supplementariesFollowInsets:(BOOL)a8 decorationItems:(id)a9 orthogonalScrollingBehavior:(long long)a10 isEmptySection:(BOOL)a11 prefersListSolver:(BOOL)a12;
- (BOOL)scrollsOrthogonally;
- (BOOL)_containsEstimatedSizeElement;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)a0;

@end
