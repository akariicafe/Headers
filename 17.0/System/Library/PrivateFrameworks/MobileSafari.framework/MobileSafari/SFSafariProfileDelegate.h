@class NSString, SFExtensionsProfilesDataSource;

@interface SFSafariProfileDelegate : NSObject <SFWebExtensionControllerProfileDelegate, SFContentBlockerManagerDelegate> {
    SFExtensionsProfilesDataSource *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)sfWebExtensionsControllersContentBlockerManagersForAllProfiles:(id)a0;
- (void)enumerateContentBlockerManagersUsingBlock:(id /* block */)a0;
- (id)sfWebExtensionsController:(id)a0 forProfileServerID:(id)a1;
- (id)sfWebExtensionsControllerAllProfileExtensionsControllers:(id)a0;
- (id)sfWebExtensionsControllerContentBlockerManager:(id)a0 forProfileServerID:(id)a1;
- (id)sfWebExtensionsControllerTabGroupManager:(id)a0;
- (id)sfWebExtensionsControllersForAllProfiles:(id)a0;

@end
