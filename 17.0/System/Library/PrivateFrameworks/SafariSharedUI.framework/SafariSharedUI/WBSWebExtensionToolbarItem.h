@class WBSSafariExtensionStateObserver, NSString, UIImage, NSURL, WBSWebExtensionData, NSMutableDictionary, WBSWebExtensionsController, NSMutableSet, WKWebView;

@interface WBSWebExtensionToolbarItem : NSObject <WKNavigationDelegate> {
    NSMutableDictionary *_tabIdentifierToTitleMap;
    NSURL *_popupURL;
    NSMutableDictionary *_tabIdentifierToPopupURLMap;
    BOOL _enabled;
    NSMutableDictionary *_tabIdentifierToEnabledMap;
    UIImage *_runtimeIcon;
    NSMutableDictionary *_tabIdentifierToIconMap;
    WBSWebExtensionsController *_extensionsController;
    WBSSafariExtensionStateObserver *_extensionStateObserver;
    NSString *_badgeText;
    NSMutableDictionary *_tabIdentifierToBadgeTextMap;
    NSMutableDictionary *_tabIdentifierToDNRBlockedCountMap;
    BOOL _hasUpdatedBadgeForAllTabs;
    NSMutableSet *_tabIdentifiersWithUpdatedBadgeText;
}

@property (readonly, nonatomic) WBSWebExtensionData *webExtension;
@property (readonly, nonatomic) WKWebView *popupWebView;
@property (readonly, nonatomic) BOOL showingExtensionPopup;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webViewDidDisableInspectorBrowserDomain:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)_webViewDidEnableInspectorBrowserDomain:(id)a0;
- (void)didViewBadgeInTabWithIdentifier:(id)a0;
- (BOOL)hasUpdatedBadgeTextInTabWithIdentifier:(id)a0;
- (BOOL)shouldRequestAccessForTab:(id)a0;
- (id)initWithWebExtension:(id)a0 extensionsController:(id)a1 label:(id)a2 popupURL:(id)a3 image:(id)a4;
- (id)badgeTextForTabWithIdentifier:(id)a0;
- (id)iconForTabWithIdentifier:(id)a0;
- (BOOL)isEnabledForTabWithIdentifier:(id)a0;
- (id)popupURLForTabWithIdentifier:(id)a0;
- (void)clearStateForTabWithIdentifier:(id)a0;
- (void)clearBlockedResourceCounts;
- (void)didSelectTab:(id)a0;
- (void)increaseBlockedResourcesCountByAmount:(id)a0 forTabWithIdentifier:(id)a1;
- (void)setBadgeText:(id)a0 forTabWithIdentifier:(id)a1;
- (void)setEnabled:(BOOL)a0 forTabWithIdentifier:(id)a1;
- (void)setIcon:(id)a0 forTabWithIdentifier:(id)a1;
- (void)setPopupURL:(id)a0 forTabWithIdentifier:(id)a1;
- (void)setTitle:(id)a0 forTabWithIdentifier:(id)a1;
- (id)titleForTabWithIdentifier:(id)a0;

@end
