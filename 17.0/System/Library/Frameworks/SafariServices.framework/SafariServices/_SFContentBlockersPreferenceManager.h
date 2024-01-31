@class NSString, SFWebExtensionsController;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver> {
    SFWebExtensionsController *_extensionsController;
}

@property (readonly, nonatomic) BOOL hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)contentBlockerManagerExtensionListDidChange:(id)a0;
- (void)_checkForContentBlockers;
- (id)initWithPerSitePreferencesStore:(id)a0 extensionsController:(id)a1;

@end
