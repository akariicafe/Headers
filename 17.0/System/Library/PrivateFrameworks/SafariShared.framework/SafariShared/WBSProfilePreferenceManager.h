@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;
@protocol WBSProfileProviding;

@interface WBSProfilePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate>

@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly, nonatomic) id<WBSProfileProviding> profileProvider;
@property (readonly, nonatomic) WBSPerSitePreference *profilePreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)preferences;
- (id)valuesForPreference:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferenceNameForPreference:(id)a0;
- (id)initWithPerSitePreferencesStore:(id)a0 profileProvider:(id)a1;
- (void)didRemoveProfileWithIdentifier:(id)a0 hasMultipleProfiles:(BOOL)a1;
- (void)getProfilePreferenceValueForDomain:(id)a0 withTimeout:(double)a1 fallbackValue:(id)a2 usingBlock:(id /* block */)a3;
- (BOOL)hasDynamicPreferenceValues;
- (id)identifierForProfilePreferenceForDomain:(id)a0;
- (BOOL)preferenceDoesNotHaveForOtherWebsitesDefault:(id)a0;
- (void)setProfilePreferenceValue:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldDeleteUnrecognizedPreference;

@end
