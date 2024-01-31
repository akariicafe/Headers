@class _UIInterfaceActionImagePropertyView, NSSet, NSArray, NSString, _UIInterfaceActionLabelsPropertyView;

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver>

@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView;
@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView;
@property (readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView;
@property (retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible;
@property (retain, nonatomic) NSSet *displayedViews;
@property (readonly, nonatomic) NSArray *displayedViewsSpacingConstraints;
@property (readonly, nonatomic) NSArray *displayedViewsPositioningConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_activateDisplayedViewsConstraints;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToDisplayedViews;
- (void)_arrangeDisplayedViews;
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)a0;
- (id)_constraintForVerticallyCenteringLabelsView;
- (id)_constraintsForHorizontallyCenteringLabelsView;
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)a0;
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)a0;
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)a0;
- (BOOL)_displayedViewsConstraintsNeedsLoading;
- (BOOL)_hasLoadedContents;
- (id)_horizontalEdgeReference;
- (void)_invalidateDisplayedViewsConstraints;
- (BOOL)_isDisplayingLeadingImageView;
- (BOOL)_isDisplayingTrailingImageView;
- (void)_loadConstraintsForDisplayedViews;
- (void)_loadConstraintsForLabelsAndImagesDisplay;
- (void)_loadConstraintsForLabelsOnlyDisplay;
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
- (void)_reloadViewsToDisplayWhenContentsVisible;
- (void)_removeAllDisplayedViews;
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)loadContents;
- (void)updateContentsInsertedIntoHierarchy;

@end
