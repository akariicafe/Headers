@class NSArray, UIImpactFeedbackGenerator, NSString;
@protocol NCNotificationListRevealCoordinatorDelegate;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>

@property (nonatomic) int revealState;
@property (nonatomic) double revealPercentage;
@property (nonatomic, getter=isSectionRevealed) BOOL sectionRevealed;
@property (nonatomic, getter=isSectionRevealedStateLocked) BOOL sectionRevealedStateLocked;
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared;
@property (weak, nonatomic) id<NCNotificationListRevealCoordinatorDelegate> delegate;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed;
@property (nonatomic) unsigned long long indexForReveal;
@property (retain, nonatomic) NSArray *subLists;
@property (nonatomic) double interactionTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationListViewDidEndDecelerating:(id)a0;
- (BOOL)_isRevealed;
- (void)_releaseHaptic;
- (double)_updateRevealPercentageForNotificationListView:(id)a0;
- (void)_performHaptic;
- (id)_revealListView;
- (BOOL)_isRevealSectionVisibleForListView:(id)a0;
- (void)notificationListWillBeginDragging:(id)a0;
- (void)notificationListViewWillEndDragging:(id)a0 withTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)_refetchSubListViews;
- (id)_stringForRevealState:(int)a0;
- (void)_prepareHaptic;
- (void)_performRevealForSubviewsIfNecessary;
- (double)_settlingYPositionForReveal;
- (void)notificationListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)_revealSectionHasContent;
- (void).cxx_destruct;
- (void)notificationListDidScroll:(id)a0;
- (BOOL)_shouldAllowNotificationListRevealTransition;
- (BOOL)_shouldAllowNotificationListReveal;

@end
