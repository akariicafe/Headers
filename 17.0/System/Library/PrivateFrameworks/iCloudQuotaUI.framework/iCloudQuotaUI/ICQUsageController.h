@class PSSpecifier, ICQCloudStorageGroupController, NSMutableArray;

@interface ICQUsageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    NSMutableArray *_storageSpecifiers;
    PSSpecifier *_storageUsedSpecifier;
    PSSpecifier *_storageAvailableSpecifier;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)usageStorageSpecifiers;

@end
