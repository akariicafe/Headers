@class NSNumber, NSString, WBSWebExtensionData, _SFWebExtensionActivity, _SFWebExtensionSettingsAlertItem, _SFWebExtensionPopupViewController, UIViewController;
@protocol WBSWebExtensionTab, WBSWebExtensionWindow;

@interface SFWebExtensionPageMenuController : WBSWebExtensionToolbarItem <WBSWebExtensionToolbarItemImplementation, WKUIDelegate> {
    WBSWebExtensionData *_webExtension;
    UIViewController *_parentViewController;
    _SFWebExtensionPopupViewController *_popupViewController;
    id<WBSWebExtensionTab> _tab;
    _SFWebExtensionSettingsAlertItem *_alertItem;
    _SFWebExtensionActivity *_activityItem;
    NSNumber *_tabIdentifier;
}

@property (readonly, nonatomic) id<WBSWebExtensionWindow> windowDisplayingPopupWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageViewForWarningTriangleImage:(id)a0;
+ (id)badgeViewForText:(id)a0;

- (id)initWithExtension:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;
- (void)webViewDidClose:(id)a0;
- (BOOL)showingExtensionPopup;
- (id)webExtension;
- (id)activityForTab:(id)a0;
- (void)_createTabWithURL:(id)a0;
- (void)_loadWebExtensionPopupURL:(id)a0 parentViewController:(id)a1 popoverSourceInfo:(id)a2 forTab:(id)a3;
- (id)alertItemForTab:(id)a0;
- (void)didSetBadgeText:(id)a0 forTabWithIdentifier:(id)a1;
- (void)didSetEnabledState:(BOOL)a0 forTabWithIdentifier:(id)a1;
- (void)didSetIcon:(id)a0 forTabWithIdentifier:(id)a1;
- (void)dismissPopupImmediatelyIfNecessary;
- (id)iconForTab:(id)a0;
- (id)iconForTab:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)performActionForTab:(id)a0 parentViewController:(id)a1 popoverSourceInfo:(id)a2;
- (void)popupDidNavigateRequestingNewWindowToURL:(id)a0;
- (id)popupWebView;
- (BOOL)shouldShowWarningTriangleImageForTab:(id)a0;
- (void)showPopupForTab:(id)a0 parentViewController:(id)a1 popoverSourceInfo:(id)a2;

@end
