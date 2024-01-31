@class NSString, UITapGestureRecognizer, UIWindow, PXContextualNotification, _PXContextualNotificationCenterUpdatingView, NSMutableSet, UIPanGestureRecognizer;

@interface PXContextualNotificationCenter : NSObject <UIGestureRecognizerDelegate>

@property (class, readonly, nonatomic) PXContextualNotificationCenter *defaultCenter;

@property (readonly, nonatomic) NSMutableSet *contextualNotifications;
@property (readonly, nonatomic) NSMutableSet *contextualNotificationsNeedingUpdate;
@property (retain, nonatomic) _PXContextualNotificationCenterUpdatingView *containerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) PXContextualNotification *pannedContextualNotification;
@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_handleTapGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithWindow:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_handlePanGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)_contextualNotificationAtLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 isInsideDismissArea:(BOOL *)a2 isInsidePassthroughArea:(BOOL *)a3;
- (void)_updateAppearanceStateForContextualNotification:(id)a0;
- (void)_updateContainerView;
- (void)invalidateContextualNotification:(id)a0;
- (void)updateContextualNotificationsIfNeeded;

@end
