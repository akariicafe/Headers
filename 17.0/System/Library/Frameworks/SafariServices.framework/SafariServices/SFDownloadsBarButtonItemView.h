@class UIProgressView, NSString, backgroundNotificationObserver, _SFDownloadsIconView, needsDeferredContentUpdate, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <UIPointerInteractionDelegate, SFDeferrableUpdateView> {
    UIProgressView *_progressView;
    struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate *x0; BOOL x1; BOOL sceneIsForeground; } deferrableUpdateViewState;
    _SFDownloadsIconView *_iconView;
}

@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithBarButtonItem:(id)a0;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)setEnabled:(BOOL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_barButtonHitRect;
- (void).cxx_destruct;
- (void)updateContents;
- (void)layoutSubviews;
- (void)_updateIcon;
- (void)didMoveToWindow;
- (void)pulse;
- (void)_buttonPressed;
- (void)_installSubviews;

@end
