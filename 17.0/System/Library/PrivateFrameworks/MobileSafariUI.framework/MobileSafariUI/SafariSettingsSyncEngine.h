@class WBSStartPageSectionManager;
@protocol WBSUserDefaultObservation;

@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    id<WBSUserDefaultObservation> _wallpaperDefaultsObservation;
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

- (id)init;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)a0;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibility;
- (void)_backgroundImageChanged:(id)a0;
- (void)_customizationPaletteWasDismissed:(id)a0;
- (void).cxx_destruct;
- (id)_sectionIdentifierToSettingName:(id)a0;
- (void)_didUpdateStartPageVisibility:(id)a0;
- (id)startPageSectionsManager;
- (BOOL)syncEnabled;
- (void)_didUpdateStartPageSectionOrder:(id)a0;
- (void)_cloudSettingsDidUpdateOnServer:(id)a0;

@end
