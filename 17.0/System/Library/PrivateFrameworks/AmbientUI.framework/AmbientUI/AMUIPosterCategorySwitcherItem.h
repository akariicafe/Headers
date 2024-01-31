@class NSUUID, NSString, PRSPosterConfiguration, UIView, AMUIPosterViewController, AMUIPhotosLabelView, NSObject, NSLayoutConstraint, UIViewController;
@protocol OS_dispatch_queue, AMUIPosterCategorySwitcherItemDelegate, NSObject;

@interface AMUIPosterCategorySwitcherItem : NSObject <AMUISwitcherItem, AMUIPosterViewControllerDelegate> {
    UIView *_itemView;
    int _appearState;
    double _presentationProgress;
    NSUUID *_lastInstanceIdentifier;
    NSLayoutConstraint *_labelTopConstraint;
    NSLayoutConstraint *_labelBottomConstraint;
    NSLayoutConstraint *_labelLeftConstraint;
    NSLayoutConstraint *_labelRightConstraint;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _titleLabelVisible;
    BOOL _titleLabelOnTopEdge;
    PRSPosterConfiguration *_configuration;
    AMUIPosterViewController *_posterViewController;
    AMUIPhotosLabelView *_titleLabelView;
    id<AMUIPosterCategorySwitcherItemDelegate> _delegate;
}

@property (readonly, nonatomic) UIView *itemView;
@property (readonly, nonatomic) id<NSObject> identifier;
@property (readonly, nonatomic) UIViewController *itemViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)_updateClipping;
- (void)_updateContentMode;
- (void)_updateTitleLabelVisibility;
- (void)_noteWindowWillRotate:(id)a0;
- (void)_updateLabelConstraintsForInterfaceOrientation:(long long)a0;
- (void)posterViewController:(id)a0 didRequestInlineAuthenticationWithUnlockDestination:(id)a1;
- (void)posterViewController:(id)a0 relinquishExtensionInstanceIdentifier:(id)a1;
- (void)posterViewController:(id)a0 setChromeVisibility:(BOOL)a1 withAnimationSettings:(id)a2 animationFence:(id)a3;
- (BOOL)posterViewControllerHasInlineAuthenticated:(id)a0;
- (BOOL)posterViewControllerIsAuthenticated:(id)a0;
- (id)posterViewControllerRequestExtensionInstanceIdentifier:(id)a0;
- (void)switcher:(id)a0 didMoveToWindow:(id)a1;
- (void)switcher:(id)a0 updateItemForPresentationProgress:(double)a1;
- (void)switcher:(id)a0 willMoveToWindow:(id)a1;
- (void)switcherItemDidAppear:(id)a0;
- (void)switcherItemDidDisappear:(id)a0;
- (void)switcherItemWillAppear:(id)a0;
- (void)switcherItemWillDisappear:(id)a0;

@end
