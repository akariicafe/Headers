@class WBSProfilePreferenceManager, _SFAppInfoOverlayPreferenceManager, _SFGeolocationPermissionManager, SFWebExtensionsController, WBSAutomaticReaderActivationManager, WBSLockdownModePreferenceManager, NSMutableDictionary, _SFContentBlockersPreferenceManager, _SFRequestDesktopSitePreferenceManager, _SFUserMediaPermissionController, _SFPageZoomPreferenceManager;
@protocol WBSProfileProviding;

@interface _SFPerSitePreferencesVendor : NSObject {
    NSMutableDictionary *_preferenceToManager;
    SFWebExtensionsController *_extensionsController;
}

@property (readonly, nonatomic) id<WBSProfileProviding> profileProvider;
@property (readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager;
@property (readonly, nonatomic) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager;
@property (readonly, nonatomic) _SFUserMediaPermissionController *sharedUserMediaPermissionController;
@property (readonly, nonatomic) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager;
@property (readonly, nonatomic) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomPreferenceManager;
@property (readonly, nonatomic) _SFAppInfoOverlayPreferenceManager *appInfoOverlayPreferenceManager;
@property (readonly, nonatomic) WBSLockdownModePreferenceManager *lockdownModePreferenceManager;
@property (readonly, nonatomic) WBSProfilePreferenceManager *profilePreferenceManager;

- (void)dealloc;
- (id)initWithExtensionsController:(id)a0 profileProvider:(id)a1;
- (id)managerForPreference:(id)a0;
- (void).cxx_destruct;

@end
