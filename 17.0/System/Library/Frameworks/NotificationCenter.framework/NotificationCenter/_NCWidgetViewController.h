@class NSString, NSMapTable, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIView, NSObject, UIViewController;
@protocol OS_dispatch_queue, NCWidgetProvidingPrivate;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, NCSizeObservingViewDelegate> {
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialBounds;
    BOOL _snapshotTimestampsEnabled;
    BOOL _clientUsesAutolayout;
    struct { unsigned char implementsPerformUpdateWithCompletionHandler : 1; unsigned char implementsMarginInsets : 1; unsigned char implementsActiveDisplayModeDidChange : 1; unsigned char implementsDidBecomeForeground : 1; unsigned char implementsVisibleFrameDidChange : 1; } _contentProvidingViewControllerFlags;
}

@property (retain, nonatomic, getter=_contentView, setter=_setContentView:) UIView *contentView;
@property (nonatomic, getter=_clientMarginInsets, setter=_setClientMarginInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } clientMarginInsets;
@property (nonatomic, getter=_initialLayoutMargins, setter=_setInitialLayoutMargins:) struct UIEdgeInsets { double top; double left; double bottom; double right; } initialLayoutMargins;
@property (retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController;
@property (copy, nonatomic, getter=_widgetIdentifier) NSString *widgetIdentifier;
@property (copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier;
@property (nonatomic, getter=_visibilityState, setter=_setVisibilityState:) long long visibilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (void)_reduceTransparencyDidChange:(id)a0;

- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)delayed:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)__openTransactionForAppearanceCallWithState:(int)a0 withIdentifier:(id)a1;
- (void)__performUpdateWithReplyHandler:(id /* block */)a0;
- (void)__requestEncodedLayerTreeToURL:(id)a0 withCodingImageFormat:(id)a1 withReplyHandler:(id /* block */)a2;
- (void)__setActiveDisplayMode:(long long)a0;
- (void)__setMaximumSize:(struct CGSize { double x0; double x1; })a0 forDisplayMode:(long long)a1;
- (void)__updateLayoutMargins:(id)a0;
- (void)__updateVisibilityState:(long long)a0;
- (void)__updateVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withReplyHandler:(id /* block */)a1;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_clientLargestSupportedDisplayModeDidChange;
- (double)_clientPreferredContentHeight;
- (double)_clientPreferredContentHeightPermittingAutolayout:(BOOL)a0 didUseFittingSize:(BOOL *)a1;
- (void)_closeTransactionWithAppearState:(int)a0;
- (double)_effectiveHeightForRequestedHeight:(double)a0;
- (void)_encodeLayerTreeToURL:(id)a0 withCodingImageFormat:(id)a1 withReplyHandler:(id /* block */)a2;
- (void)_enqueueProxyRequest:(id /* block */)a0;
- (void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
- (void)_performUpdateWithCompletionHandler:(id /* block */)a0;
- (void)_processInputItems:(id)a0 initialActiveDisplayMode:(long long *)a1;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)a0;
- (void)_setActiveDisplayMode:(long long)a0 unconditionallyNotifyingContentProvidingViewController:(BOOL)a1;
- (void)_setContentProvidingViewController:(id)a0;
- (void)_setMaximumWidth:(double)a0 forDisplayMode:(long long)a1;
- (void)_setVisibilityState:(long long)a0 force:(BOOL)a1;
- (BOOL)_setVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_widgetExtensionContext;

@end
