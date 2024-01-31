@interface ATXDemoAppLibraryProvider : NSObject

+ (id)demoSuggestionsAndRecents;
+ (BOOL)isAppLibraryDemoModeEnabled;
+ (id)_parseCategory:(id)a0 realCategories:(id)a1;
+ (id)loadCategoriesFromDisk;
+ (id)demoAppLibraryPath;
+ (id)bundleIdsForCategoryWithName:(id)a0 in:(id)a1;
+ (id)demoAppCategoriesForRealAppCategories:(id)a0;

@end
