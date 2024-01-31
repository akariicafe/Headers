@class UIView, NSString, NSArray, CADisplayLink, UIImageView, MLULookupItem, NSDictionary, UIViewController, UIPreviewInteractionController, UIGestureRecognizer;
@protocol UIPreviewItemDelegate;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver> {
    MLULookupItem *_lookupItem;
    UIPreviewInteractionController *_previewInteractionController;
    UIView *_previewIndicatorView;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    CADisplayLink *_previewIndicatorDisplayLink;
    double _lastPreviewIndicatorAnimationTimestamp;
    double _previewIndicatorAnimationTargetAlpha;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previewIndicatorBoundingRect;
    BOOL _previewIndicatorUsesStandardAnimation;
    BOOL _contentManagedByClient;
    UIPreviewItemController *_strongSelf;
}

@property (weak, nonatomic) id<UIPreviewItemDelegate> delegate;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *previewData;
@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) BOOL interactionInProgress;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)interactionProgressDidUpdate:(id)a0;
- (id)init;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopInteraction;
- (BOOL)_isMobileSafariRestricted;
- (BOOL)_shouldCancelPreviewWithNegativeFeedback;
- (void)clearPreviewIndicator;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)a0;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)a0;
- (void)preparePreviewIndicatorViewInSourceView:(id)a0 updateScreen:(BOOL)a1;
- (void)previewInteractionController:(id)a0 didDismissViewController:(id)a1 committing:(BOOL)a2;
- (void)previewInteractionController:(id)a0 interactionProgress:(id)a1 forRevealAtLocation:(struct CGPoint { double x0; double x1; })a2 inSourceView:(id)a3 containerView:(id)a4;
- (void)previewInteractionController:(id)a0 performCommitForPreviewViewController:(id)a1 committedViewController:(id)a2;
- (void)previewInteractionController:(id)a0 performCustomCommitForPreviewViewController:(id)a1 completion:(id /* block */)a2;
- (BOOL)previewInteractionController:(id)a0 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (id)previewInteractionController:(id)a0 viewControllerForPreviewingAtPosition:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 presentingViewController:(id *)a3;
- (void)previewInteractionController:(id)a0 willPresentViewController:(id)a1 forPosition:(struct CGPoint { double x0; double x1; })a2 inSourceView:(id)a3;
- (BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)a0;
- (id)previewViewControllerForPosition:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1 documentProperties:(id)a2;
- (void)setupPreviewIndicatorInSourceView:(id)a0;
- (void)startInteraction;
- (void)updatePreviewIndicatorAnimation:(id)a0;

@end
