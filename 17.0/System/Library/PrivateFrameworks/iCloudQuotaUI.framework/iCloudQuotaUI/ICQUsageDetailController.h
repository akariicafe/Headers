@class NSMutableArray, NSMutableDictionary, ICQUsageStorageController;

@interface ICQUsageDetailController : PSEditableListController {
    BOOL _showingAll;
    NSMutableArray *_documentsGroup;
}

@property (readonly, nonatomic) NSMutableDictionary *mediaCache;
@property (weak, nonatomic) ICQUsageStorageController *storageController;

+ (id)mediaGroups;
+ (void)setupSpecifier:(id)a0 forMediaGroups:(id)a1;
+ (BOOL)hasMediaForGroups:(id)a0;
+ (id)mpKeyTranslations;
+ (float)totalSizeForGroups:(id)a0;

- (BOOL)hasMedia;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)showMore:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)needsToShowToolbarInPrefsAppRoot;
- (id)size:(id)a0;
- (BOOL)isAppController;
- (void)confirmAppDeletion;
- (id)copyMediaSpecifiers;
- (void)deleteApp;
- (id)documentsAndDataSpecifiers;
- (id)dynamicSize:(id)a0;
- (BOOL)removeMediaEntry:(id)a0 inSection:(long long)a1;
- (BOOL)updateSizesAfterDeletingMediaKind:(id)a0 deletedSection:(BOOL)a1 shouldPop:(BOOL)a2;

@end
