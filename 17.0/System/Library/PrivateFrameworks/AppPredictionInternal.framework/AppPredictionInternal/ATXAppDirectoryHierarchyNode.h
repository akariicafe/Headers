@class NSMutableArray;

@interface ATXAppDirectoryHierarchyNode : NSObject

@property (weak, nonatomic) ATXAppDirectoryHierarchyNode *parent;
@property (readonly, nonatomic) NSMutableArray *children;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSMutableArray *appBundleIDs;
@property (readonly, nonatomic) unsigned long long categoryID;

+ (id)dynamicCategoriesForAppBundleIDs:(id)a0 screenTimeMappings:(id)a1 iTunesMappings:(id)a2;
+ (id)initializeHierarchyForAppBundleIDs:(id)a0 screenTimeMappings:(id)a1 iTunesMappings:(id)a2;
+ (id)lazyGetNodeForCategoryID:(id)a0 inDictionary:(id)a1;

- (void).cxx_destruct;
- (id)_allNodes;
- (BOOL)_isRoot;
- (void)_addAppBundleID:(id)a0;
- (void)_addChild:(id)a0;
- (id)_allAppBundleIDs;
- (id)_categoryDictionary;
- (void)_computeSize;
- (void)_displayTree;
- (void)_displayTreeWithCurrString:(id)a0;
- (unsigned long long)_enabledNodeCount;
- (void)_preorderTraverseWithBlock:(id /* block */)a0;
- (id)initWithCategoryID:(unsigned long long)a0;

@end
