@class NSString, NCNotificationListCoalescingControlsView;
@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@interface NCNotificationListCoalescingControlsCell : UIView <NCNotificationListCoalescingControlsViewDelegate, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping>

@property (retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView;
@property (nonatomic) BOOL shouldShowCoalescingControls;
@property (nonatomic, getter=isFooterCell) BOOL footerCell;
@property (retain, nonatomic) NSString *clearAllText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;
@property (copy, nonatomic) NSString *materialGroupNameBase;

+ (double)coalescingControlsCellHeightShowingCoalescingControls:(BOOL)a0;

- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void).cxx_destruct;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsView:(id)a0 didTransitionToClearState:(BOOL)a1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)a0;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)a0;

@end
