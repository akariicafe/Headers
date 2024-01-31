@class NSString, UIViewController, PKBannerPresentationManager;
@protocol BNPresentableObserving, PKBannerViewController, BNPresentableContext, SBUISystemApertureElement;

@interface PKBannerPresentable : NSObject <PKBannerViewControllerPresentable, BNPresentable, BNHostedContentProviding, SBUISystemApertureElementProviding> {
    PKBannerPresentationManager *_manager;
    NSString *_requestIdentifier;
    BOOL _posted;
    BOOL _revoked;
    BOOL _needsRevoke;
    id /* block */ _factory;
    UIViewController<PKBannerViewController, BNPresentableObserving, SBUISystemApertureElement> *_viewController;
    id /* block */ _didStartHandler;
    id /* block */ _didFinishHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, weak, nonatomic) id<SBUISystemApertureElement> systemApertureElement;

- (id)init;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)revoke;

@end
