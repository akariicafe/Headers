@class PSListController;

@interface PSBundleController : NSObject {
    PSListController *_parent;
}

- (void)load;
- (void)unload;
- (id)init;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void).cxx_destruct;
- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0;

@end
