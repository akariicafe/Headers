@class NUIContainerBoxView, NSString, TLKAuxilliaryTextView, SearchUIHomeScreenAppIconView;

@interface SearchUIAppIconCardSectionView : SearchUICardSectionView <SearchUIHomeScreenEngagementDelegate, NUIContainerViewDelegate>

@property (retain) NUIContainerBoxView *contentView;
@property (retain) SearchUIHomeScreenAppIconView *appIconView;
@property (retain) TLKAuxilliaryTextView *folderLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)returnKeyPressed;
- (BOOL)setupManualFocus;
- (void)didUpdateKeyboardFocusToResult:(id)a0 cardSection:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)viewForForcedFocus;
- (void)removeManualFocus;
- (BOOL)needsInternalFocus;
- (id)setupContentView;
- (void)willRemoveIcon:(id)a0;

@end
