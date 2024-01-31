@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMapTable;
@protocol PTEditingServerDataSource, PTEditingServerDelegate;

@interface PTUIEditingServer : NSObject <PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, PTChoiceRowDataSource> {
    id<PTEditingServerDataSource> _dataSource;
    id<PTEditingServerDelegate> _delegate;
    NSDictionary *_domainInfoByID;
    NSDictionary *_testRecipeInfoByID;
    NSArray *_domainGroupNames;
    NSMutableDictionary *_domainIDsByGroupName;
    NSMutableDictionary *_rootSettingsByDomainID;
    NSMutableDictionary *_proxyDefinitionsByDomainID;
    NSMutableDictionary *_testRecipeIDsByDomainID;
    NSMapTable *_moduleControllerByDomainID;
}

@property (nonatomic) BOOL forRemoteEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void).cxx_destruct;
- (long long)choiceRow:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)choiceRow:(id)a0 shortTitleForRow:(long long)a1 inSection:(long long)a2;
- (id)choiceRow:(id)a0 titleForRow:(long long)a1 inSection:(long long)a2;
- (id)choiceRow:(id)a0 titleForSection:(long long)a1;
- (id)choiceRow:(id)a0 valueForRow:(long long)a1 inSection:(long long)a2;
- (long long)numberOfSectionsForChoiceRow:(id)a0;
- (void)settingsDidRestoreDefaults:(id)a0;
- (void)settingsWillRestoreDefaults:(id)a0;
- (void)_enumerateDomainsWithOneOrMoreTestRecipesUsingBlock:(id /* block */)a0;
- (id)_loadRootSettingsOrProxyForDomainID:(id)a0;
- (id)_recipeIDForRow:(long long)a0 inSection:(long long)a1;
- (id)_settingsDomainGroupModule:(id)a0;
- (id)_settingsDomainRow:(id)a0;
- (id)_settingsGroupRow:(id)a0;
- (id)_settingsSection;
- (id)_testRecipeSection;
- (id)displayNameForDomainID:(id)a0;
- (id)domainGroupNames;
- (id)domainIDForRootSettings:(id)a0;
- (id)domainIDsInGroup:(id)a0;
- (id)groupNameForDomainID:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 forRemoteEditing:(BOOL)a2;
- (void)proxyDefinitionChanged:(id)a0;
- (void)reloadDomains;
- (void)reloadTestRecipes;
- (id)rootSettingsForDomainID:(id)a0;
- (id)settingsEditingModule;
- (id)testRecipeIDsForDomainID:(id)a0;
- (id)testRecipeSelectionModule;
- (id)titleForTestRecipeID:(id)a0;

@end
