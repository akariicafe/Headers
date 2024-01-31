@class WBSPerSitePreference, NSString, WBSDomainAllowListManager, WBSPerSitePreferencesSQLiteStore;

@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSDomainAllowListManager *_domainAllowListManager;
}

@property (readonly, nonatomic) WBSPerSitePreference *autoplayPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (id)preferences;
- (void)prepareForTermination;
- (id)valuesForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void).cxx_destruct;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferenceNameForPreference:(id)a0;
- (void)getAutoplayPreferenceValueForDomain:(id)a0 withTimeout:(double)a1 fallbackValue:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithPerSitePreferencesStore:(id)a0 allowListManager:(id)a1;
- (void)setAutoplayPreferenceValue:(long long)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;

@end
