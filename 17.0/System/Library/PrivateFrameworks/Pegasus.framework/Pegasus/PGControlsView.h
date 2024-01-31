@class UIView, NSString, PGPrerollIndicatorView, PGButtonView, PGControlsViewModel, NSArray, PGProgressIndicator, PGCABackdropLayerView, PGDisplayLink, UIActivityIndicatorView, PGLayoutContainerView;

@interface PGControlsView : PGLayoutContainerView <PGButtonViewDelegate> {
    PGControlsViewModel *_viewModel;
    PGButtonView *_restoreButton;
    PGButtonView *_cancelButton;
    PGButtonView *_skipBackButton;
    PGButtonView *_actionButton;
    PGButtonView *_skipForwardButton;
    PGButtonView *_liveIndicatorBadgeButton;
    UIActivityIndicatorView *_contentLoadingIndicator;
    UIView *_contentLoadingIndicatorContainerView;
    PGLayoutContainerView *_hidableItemsLayoutContainerView;
    PGCABackdropLayerView *_captureOnlyView;
    PGProgressIndicator *_progressIndicator;
    PGPrerollIndicatorView *_prerollIndicatorView;
    UIView *_dimmingView;
    NSArray *_allButtons;
    NSString *_groupNameBase;
    PGDisplayLink *_displayLinkForProgressUpdates;
}

@property (nonatomic) BOOL prefersControlsHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)updateProgress;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)PG_backdropGroupLeader;
- (BOOL)PG_preferredVisibilityForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_prerollIndicatorFrameWithScaling:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressIndicatorFrameWithScaling:(double)a0;
- (BOOL)_showsDimmingView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonView:(id)a0 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonView:(id)a0 titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)buttonViewDidReceiveTouchUpInside:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)updateControlsAlpha;
- (void)updateControlsHidden;
- (void)viewModelDidUpdateValuesFromOldValues:(id)a0;

@end
