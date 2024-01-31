@class SearchUICardSectionView, NSString, NUIContainerBoxView;

@interface SearchUICardSectionCollectionViewCell : SearchUICollectionViewCell <VRXInteractionDelegate>

@property (retain) NUIContainerBoxView *boxView;
@property (retain) SearchUICardSectionView *cardSectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRowModel:(id)a0;
- (void)returnKeyPressed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightFrame;
- (BOOL)setupManualFocus;
- (id)leadingView;
- (void).cxx_destruct;
- (id)viewForForcedFocus;
- (void)removeManualFocus;
- (void)setDelegate:(id)a0;
- (BOOL)needsInternalFocus;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)leadingTextView;
- (id)embeddedViewController;
- (void)createButtons:(id)a0 :(id /* block */)a1;
- (BOOL)highlightFrameMatchesHighlightView;
- (id)highlightReferenceView;
- (id)sizingView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
