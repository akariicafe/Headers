@class ATXHomeScreenConfigCache, NSArray;

@interface ATXWidgetsAndFoldersConfigurationProvider : NSObject {
    ATXHomeScreenConfigCache *_cache;
    NSArray *_pages;
    NSArray *_homePageFolders;
}

- (id)init;
- (void).cxx_destruct;
- (void)cacheHomeScreenConfigurationsIfNecessary;
- (unsigned long long)globalAllPagesFolderCount;
- (unsigned long long)globalAllPagesWidgetCount;
- (unsigned long long)homePageFolderCountBucket;
- (unsigned long long)homePageWidgetCountBucket;

@end
