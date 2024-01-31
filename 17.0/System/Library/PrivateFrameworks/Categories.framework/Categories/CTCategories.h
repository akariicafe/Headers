@class NSArray, NSString, NSLock;

@interface CTCategories : NSObject {
    NSString *_indexVersionId;
    NSLock *_lookupLock;
}

@property (class, readonly) CTCategories *sharedCategories;

@property (readonly, copy) NSArray *availableCategoryIDs;

+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)a0;
+ (void)initialize;
+ (id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)a0;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)a0;
+ (long long)currentIOSDevice;

- (id)init;
- (void)categoryForBundleID:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)categoriesForDomainURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)emptyCache;
- (void)categoryForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoryForDomainName:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unCategorizedDomainsFromDomains:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_emptySharedCache:(id)a0;
- (void)categoriesForDomainNames:(id)a0 completionHandler:(id /* block */)a1;
- (void)categoriesForBundleIDs:(id)a0 platform:(id)a1 completionHandler:(id /* block */)a2;
- (void)categoryForDomainURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;

@end
