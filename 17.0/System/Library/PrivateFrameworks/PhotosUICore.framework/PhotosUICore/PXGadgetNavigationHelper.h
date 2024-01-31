@class PXGadgetNavigationItem, NSTimer;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject

@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer;
@property (weak, nonatomic) id<PXGadgetNavigationHelperDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingNavigation;

- (void)navigateToSharedAlbumInviteWithUUID:(id)a0 animated:(BOOL)a1;
- (void)startPendingNavigationTimer;
- (void)navigateToInvitationCMMWithUUID:(id)a0 animated:(BOOL)a1;
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)_pendingNavigationInvalidationTimerFired:(id)a0;
- (void)navigateToGadgetInHorizontalGadget:(id)a0 animated:(BOOL)a1;
- (void)invalidateAnyPendingNavigation;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)a0;
- (void)navigateToSectionWithGadgetType:(unsigned long long)a0 andGadget:(id)a1 animated:(BOOL)a2;
- (void)navigateToGadgetWithTypeSurveyCongratulationsWithGadgetType:(unsigned long long)a0;
- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)navigateToFirstGadgetMatchingCriteria:(id /* block */)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)_navigateToGadget:(id)a0 animated:(BOOL)a1 navigationBlock:(id /* block */)a2;
- (void)navigateIfNeeded;
- (void)navigateToFirstGadgetAndFirstNestedGadget:(BOOL)a0;
- (void)_stopPendingNavigationTimer;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)a0;
- (void)navigateToSharedAlbumInvitesAnimated:(BOOL)a0;

@end
