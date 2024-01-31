@interface SYContentItemManager : NSObject

+ (id)sharedManager;

- (void)navigateToContentItem:(id)a0 completion:(id /* block */)a1;
- (void)_navigateToURL:(id)a0 completion:(id /* block */)a1;
- (void)_navigateToUserActivity:(id)a0 completion:(id /* block */)a1;
- (void)fetchLinkableContentItemsWithCompletion:(id /* block */)a0;

@end
