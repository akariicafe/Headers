@class NSString, CKTranscriptOverlayTransitionContext, UIVisualEffectView, NSDictionary, CKMessageEditingView, UIView;
@protocol CKMessageEditingViewControllerInteractionDelegate, CKTranscriptOverlayTransitionDelegate;

@interface CKMessageEditingViewController : UIViewController <CKMessageEditingViewDelegate, CKTranscriptOverlayViewControllerProtocol>

@property (retain, nonatomic) CKTranscriptOverlayTransitionContext *transitionContext;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) BOOL animatingIn;
@property (nonatomic) BOOL animatingOut;
@property (retain, nonatomic) UIVisualEffectView *transcriptOverlayView;
@property (retain, nonatomic) CKMessageEditingView *messageEditingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editedMessageAchorPosition;
@property (nonatomic) double viewHeightForEditedMessageAnchorPosition;
@property (retain, nonatomic) NSDictionary *proofreadingInfo;
@property (weak, nonatomic) id<CKTranscriptOverlayTransitionDelegate> transcriptOverlayTransitionDelegate;
@property (weak, nonatomic) id<CKMessageEditingViewControllerInteractionDelegate> interactionDelegate;
@property (readonly, nonatomic) UIView *balloonViewForAlignment;
@property (nonatomic) double entryViewOffset;
@property (readonly, nonatomic) BOOL wantsBackingTranscriptToIgnoreContentOffsetChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)_animateIn;
- (void)_animateOutWithState:(long long)a0;
- (void)_applyProofreadingIfNecessary;
- (void)_informDelegateOfUpdatedBalloonViewFrame;
- (void)_requestDismissal;
- (void)configureForInitialAppearance;
- (void)dismissAndRejectChanges;
- (void)dismissIfNoChanges;
- (id)initWithTransitionContext:(id)a0;
- (char)messageEditingColor;
- (BOOL)messageEditingViewBalloonHasTail;
- (void)messageEditingViewConfirmButtonSelected:(id)a0;
- (void)messageEditingViewDidUpdateBalloonViewContent:(id)a0;
- (void)messageEditingViewDidUpdateBalloonViewFrame:(id)a0;
- (double)messageEditingViewDismissAnimationBalloonMaxWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })messageEditingViewDismissAnimationContentInsets;
- (void)messageEditingViewRejectButtonSelected:(id)a0;
- (void)transcriptContentInsetsDidChange;
- (void)transcriptOverlayTapGestureRecognized:(id)a0;

@end
