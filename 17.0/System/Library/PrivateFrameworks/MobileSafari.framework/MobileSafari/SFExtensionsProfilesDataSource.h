@class NSDictionary, WBTabGroupManager, SFSafariProfileDelegate;

@interface SFExtensionsProfilesDataSource : NSObject {
    SFSafariProfileDelegate *_sharedProfileDelegate;
}

@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, nonatomic) NSDictionary *profileServerIDToWebExtensionsControllers;
@property (readonly, nonatomic) NSDictionary *profileServerIDToContentBlockerManagers;

- (void).cxx_destruct;
- (id)initWithTabGroupManager:(id)a0;

@end
