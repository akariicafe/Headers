@class UIWindow, NSString, MPAVRoutingViewController, UIView, UIButton;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIButton *_dismissBackgroundButton;
    UIButton *_dismissControlsViewButton;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;
    id /* block */ _completionHandler;
}

@property (nonatomic, setter=setAVItemType:) long long avItemType;
@property (nonatomic) BOOL mirroringOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithAVItemType:(long long)a0;
- (void)showInView:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_animateControls:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_cancelButtonAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cancelButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_controlsViewFrame;
- (struct CGSize { double x0; double x1; })_maxRoutingViewSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_routingViewFrame;
- (void)_updateDismissButtonText;
- (void)_updateRoutingSheetFrame;
- (void)routingViewController:(id)a0 didPickRoute:(id)a1;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)a0;
- (void)routingViewControllerDidUpdateContents:(id)a0;

@end
