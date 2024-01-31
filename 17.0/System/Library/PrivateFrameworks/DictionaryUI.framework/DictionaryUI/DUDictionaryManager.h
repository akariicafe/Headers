@class NSArray;

@interface DUDictionaryManager : NSObject {
    BOOL _initiallyEmptyAssets;
}

@property (readonly) NSArray *availableDefinitionDictionaries;

+ (id)assetManager;

- (id)init;
- (void).cxx_destruct;
- (id)_allAvailableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (id)_definitionValuesForTerm:(id)a0;
- (id)_dictionaryAssetType;
- (BOOL)_hasDefinitionForTerm:(id)a0;
- (long long)_compareOrderOfDictionary:(id)a0 withDictionary:(id)a1;
- (void)_downloadDictionaryAssetCatalogWithTimeout:(long long)a0 completion:(id /* block */)a1;
- (void)_migrateInstalledStateForNewDictionaries:(id)a0;

@end
