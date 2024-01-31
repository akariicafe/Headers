@class NSBundle, NSDictionary, NSArray, NSMutableArray, NSNumber;

@interface NTKPlistPigmentEditOptionLoader : NSObject

@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) NSDictionary *sharedConfigs;
@property (retain, nonatomic) NSArray *sortedAdditionalPlistFiles;
@property (retain, nonatomic) NSMutableArray *bundlePlistsFromFacesWithoutBundle;
@property (retain, nonatomic) NSArray *plistFiles;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL includesAllDeviceSpecificColors;
@property (nonatomic) BOOL ignoreSensitiveUIItems;
@property (retain, nonatomic) NSNumber *sku;
@property (retain, nonatomic) NSNumber *clhs;
@property (retain, nonatomic) NSNumber *family;
@property (retain, nonatomic) NSArray *additionalBundles;

+ (long long)compareColorFileNames:(id)a0 otherFileName:(id)a1 fileExtension:(id)a2;
+ (long long)compareSeasonName:(id)a0 otherSeasonName:(id)a1;
+ (long long)compareSeasonWithoutYear:(id)a0 otherSeasonNameWithoutYear:(id)a1;
+ (BOOL)containsReservedKey:(id)a0 inDictionary:(id)a1;
+ (BOOL)containsSeasonNamePrefix:(id)a0;
+ (id)extractNameFromFullFileName:(id)a0 fileExtension:(id)a1;
+ (long long)extractYearFromSeasonName:(id)a0;
+ (id)indexForSeasonName:(id)a0;
+ (id)modifyContentRootForImplicitCollectionsIfNeeded:(id)a0;
+ (id)seasonNames;
+ (id)sortedCollectionNamesFromCollections:(id)a0;
+ (id)sortedColorFileNames:(id)a0;
+ (id)sortedUniqueOptionNamesFromCollections:(id)a0;

- (id)init;
- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidPigment:(id)a0;
- (id)itemsFromNode:(id)a0 collectionName:(id)a1 applyingConfig:(id)a2 plistSuffix:(id)a3 bundle:(id)a4;
- (id)loadNestedCollectionsFromNode:(id)a0 parent:(id)a1 config:(id)a2 plistSuffix:(id)a3 bundle:(id)a4;
- (id)alternativePropertyNamesForProperty:(id)a0 inNode:(id)a1;
- (id)alternativePropertyNamesForProperty:(id)a0 inNode:(id)a1 includesAllDeviceSpecificColors:(BOOL)a2;
- (void)applyConfigurationOnEditOption:(id)a0 configuration:(id)a1;
- (id)colorOptionsFromItemsDictionary:(id)a0 collectionName:(id)a1 applyConfig:(id)a2 plistSuffix:(id)a3 bundle:(id)a4;
- (id)colorOptionsFromPListItems:(id)a0 collectionName:(id)a1 applyConfig:(id)a2 plistSuffix:(id)a3 bundle:(id)a4;
- (id)configurationFromNode:(id)a0;
- (id)configurationFromNode:(id)a0 collectionName:(id)a1;
- (id)configurationWithName:(id)a0 fromNode:(id)a1 collectionName:(id)a2;
- (id)copyItemsApplyingConfiguration:(id)a0 configuration:(id)a1;
- (id)discoverCollectionWithName:(id)a0 contentRoot:(id)a1 collectionsRoot:(id)a2 discoveredCollections:(id)a3 privateDiscoveredCollections:(id)a4 discoveredInvalidCollections:(id)a5 invalidDependecies:(id)a6 hasCycle:(out BOOL *)a7 plistSuffix:(id)a8 bundle:(id)a9;
- (void)enumerateColorEditOptionFilesInBundle:(id)a0 sorted:(BOOL)a1 block:(id /* block */)a2;
- (id)extractSuffixFromFileName:(id)a0;
- (BOOL)hasFileLevelSensitiveUIConfig:(id)a0;
- (id)importedCollectionsFromImports:(id)a0 propertyName:(id)a1 sharedCollectionsRoot:(id)a2 parent:(id)a3 discoveredCollections:(id)a4 privateDiscoveredCollections:(id)a5 discoveredInvalidCollections:(id)a6 invalidDependencies:(id)a7 hasCycle:(out BOOL *)a8 plistSuffix:(id)a9 bundle:(id)a10;
- (id)importedCollectionsWithNode:(id)a0 sharedCollectionsRoot:(id)a1 parent:(id)a2 discoveredCollections:(id)a3 privateDiscoveredCollections:(id)a4 discoveredInvalidCollections:(id)a5 invalidDependencies:(id)a6 hasCycle:(out BOOL *)a7 plistSuffix:(id)a8 bundle:(id)a9;
- (id)initWithPlistFiles:(id)a0;
- (id)loadFaceCollectionForAllSlotsForDomain:(id)a0 propertyList:(id)a1 bundle:(id)a2 sharedCollections:(id)a3;
- (id)loadFaceCollectionForDomain:(id)a0 contentRoot:(id)a1 faceCollectionsRoot:(id)a2 sharedCollections:(id)a3 plistSuffix:(id)a4 bundle:(id)a5;
- (id)loadFaceCollectionForDomain:(id)a0 mainBundle:(id)a1 faceBundle:(id)a2 additionalBundles:(id)a3 sharedCollections:(id)a4;
- (id)loadPropertyListFromFile:(id)a0;
- (id)loadSharedCollections;
- (id)loadSharedCollectionsInMainBundle:(id)a0 additionalBundles:(id)a1;
- (id)loadSharedCollectionsWithPropertyList:(id)a0 bundle:(id)a1;
- (id)loadSharedConfigWithPropertyList:(id)a0 bundle:(id)a1;
- (void)mergeCollections:(id)a0 withCollections:(id)a1;
- (void)mergeConfigs:(id)a0 withConfigs:(id)a1;
- (id)parseColorOptionsForDomain:(id)a0 bundle:(id)a1;
- (id)parseColorOptionsForDomain:(id)a0 bundle:(id)a1 sharedCollections:(id)a2;
- (id)plistFacesWithoutFaceBundle;
- (id)skuFileLevel:(id)a0;
- (id)sortedColorPListBundles:(id)a0;
- (id)sortedPlistFilesWithMainBundle:(id)a0 faceBundle:(id)a1 additionalBundles:(id)a2;

@end
