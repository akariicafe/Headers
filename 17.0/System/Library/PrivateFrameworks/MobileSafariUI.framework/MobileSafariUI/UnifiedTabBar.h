@class NSArray, NSString, ReorderingAutoscroller, UIView;
@protocol _SFNavigationIntentHandling, TabCollectionViewDelegate;

@interface UnifiedTabBar : SFUnifiedTabBar <TabCollectionView, TabCollectionViewDragDropSupport>

@property (weak, nonatomic) id<TabCollectionViewDelegate> delegate;
@property (weak) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) long long itemDragContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property (readonly, nonatomic) unsigned long long layoutAxes;
@property (readonly, nonatomic) BOOL supportsDropTransitionToItemView;
@property (readonly, nonatomic) BOOL canDragOntoActiveTab;
@property (readonly, nonatomic) BOOL hidesInactiveTabs;
@property (readonly, nonatomic) BOOL lastDecelerationWasInterrupted;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItem:(id)a0;
- (id)targetedPreviewForDismissingMenuForItem:(id)a0;
- (void)activateItem:(id)a0;
- (id)viewForItem:(id)a0;
- (void)didEndShowingContextMenuForItem:(id)a0;
- (id)targetedDragPreviewForLiftingItem:(id)a0;
- (id)targetedDragPreviewForDroppingItem:(id)a0;
- (id)targetItemForDropAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)willBeginShowingContextMenuForItem:(id)a0;
- (id)itemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canCloseItem:(id)a0;
- (void)closeItem:(id)a0;
- (void)didSelectItem:(id)a0;
- (id)newSearchField;
- (void)cleanUpDragPreviewForItem:(id)a0;
- (unsigned long long)contextMenuOptionsForItem:(id)a0;
- (id)dragPreviewForItem:(id)a0 pinned:(BOOL)a1;
- (void)performDropWithNavigationIntent:(id)a0;
- (BOOL)shouldPinItemsDroppedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldSpringLoadItem:(id)a0;

@end
