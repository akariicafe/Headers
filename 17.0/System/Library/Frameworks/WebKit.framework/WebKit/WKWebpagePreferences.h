@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[152]; } data; } _websitePolicies;
    struct unique_ptr<WebKit::WebPagePreferencesLockdownModeObserver, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct __compressed_pair<WebKit::WebPagePreferencesLockdownModeObserver *, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct WebPagePreferencesLockdownModeObserver *__value_; } __ptr_; } _lockdownModeObserver;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (id)init;
- (id)_activeContentRuleListActionPatterns;
- (void)dealloc;
- (void)_setAutoplayPolicy:(long long)a0;
- (unsigned long long)_modalContainerObservationPolicy;
- (void)_setCaptivePortalModeEnabled:(BOOL)a0;
- (void)_setWebsiteDataStore:(id)a0;
- (void)_setNetworkConnectionIntegrityEnabled:(BOOL)a0;
- (unsigned long long)_mouseEventPolicy;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (unsigned long long)_colorSchemePreference;
- (BOOL)_allowPrivacyProxy;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (id)_websiteDataStore;
- (id).cxx_construct;
- (id)_userContentController;
- (void)_setAllowPrivacyProxy:(BOOL)a0;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (void)_setCustomUserAgent:(id)a0;
- (BOOL)_captivePortalModeEnabled;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (void)_setUserContentController:(id)a0;
- (BOOL)_networkConnectionIntegrityEnabled;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (void).cxx_destruct;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)a0;
- (BOOL)_contentBlockersEnabled;
- (unsigned long long)_allowedAutoplayQuirks;
- (void)_setCustomHeaderFields:(id)a0;
- (void)_setContentRuleListsEnabled:(BOOL)a0 exceptions:(id)a1;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (id)_customUserAgent;
- (id)_customHeaderFields;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (unsigned long long)_popUpPolicy;
- (id)_customNavigatorPlatform;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (long long)_autoplayPolicy;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;

@end
