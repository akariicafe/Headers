@class NSString, NSMutableArray, NSArray;
@protocol NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsGroupDelegate;

@interface NCNotificationListSupplementaryViewsGroup : NCNotificationListPresentableGroup <NCNotificationListSupplementaryHostingViewControllerDelegate, NCNotificationListCellActionProviding>

@property (retain, nonatomic) NSMutableArray *orderedCells;
@property (weak, nonatomic) id<NCNotificationListPresentableGroupDelegate, NCNotificationListSupplementaryViewsGroupDelegate> delegate;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSArray *supplementaryViewControllers;
@property (readonly, copy, nonatomic) NSArray *hostingViewControllers;
@property (copy, nonatomic) id /* block */ viewControllerSortComparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentableTypes;

- (id)_configurationAtIndex:(unsigned long long)a0;
- (BOOL)shouldShowDefaultActionForNotificationListCell:(id)a0;
- (id)_hostingViewControllerForCell:(id)a0;
- (void)updateSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (id)headerText;
- (id)init;
- (void)toggleGroupedState;
- (id)supplementaryActionsForNotificationListCell:(id)a0;
- (BOOL)shouldContinuePresentingActionButtonsForNotificationListCell:(id)a0;
- (id)clearAllText;
- (void)supplementaryHostingViewControllerWasTapped:(id)a0;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (id)defaultActionForNotificationListCell:(id)a0;
- (BOOL)shouldVerticallyStackActionButtonsForNotificationListCell:(id)a0;
- (void)notificationListCell:(id)a0 didBeginRevealingActionsForSwipeInteraction:(id)a1;
- (id)_logDescription;
- (id)hostingPlatterViewForSupplementaryViewController:(id)a0;
- (unsigned long long)count;
- (BOOL)shouldImmediatelyReveal;
- (unsigned long long)_indexOfHostingViewController:(id)a0;
- (BOOL)containsSupplementaryViewController:(id)a0;
- (void)removeSupplementaryViewController:(id)a0;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)_clearCell:(id)a0;
- (void)_updateSupplementaryViewController:(id)a0 withConfiguration:(id)a1 existingIndex:(unsigned long long)a2 proposedIndex:(unsigned long long)a3;
- (id)_hostingViewControllerAtIndex:(unsigned long long)a0;
- (BOOL)shouldShowSupplementaryActionsForNotificationListCell:(id)a0;
- (void)insertSupplementaryViewController:(id)a0 withConfiguration:(id)a1;
- (void)updatePositionIfNeededForSupplementaryViewController:(id)a0;
- (void)clearAll;
- (BOOL)_shouldAllowHostedViewControllersUserInteraction;
- (void).cxx_destruct;
- (void)recycleView:(id)a0;
- (void)_updateHostingViewController:(id)a0 cell:(id)a1 withConfiguration:(id)a2;
- (void)_updateUserInteraction;
- (id)_clearActionForCell:(id)a0;
- (unsigned long long)_sortedIndexForViewController:(id)a0;
- (id)_cellAtIndex:(unsigned long long)a0;
- (unsigned long long)_existingIndexMatchingSupplementaryViewController:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (id)_configurationForCell:(id)a0;
- (void)_removeSupplementaryViewControllerAtIndex:(unsigned long long)a0;
- (void)notificationListCell:(id)a0 didBeginHidingActionsForSwipeInteraction:(id)a1;
- (void)supplementaryHostingViewControllerPreferredContentSizeChanged:(id)a0;
- (id)_supplementaryViewControllerAtIndex:(unsigned long long)a0;
- (void)_matchStyleOfCell:(id)a0 toHostingViewController:(id)a1;

@end
