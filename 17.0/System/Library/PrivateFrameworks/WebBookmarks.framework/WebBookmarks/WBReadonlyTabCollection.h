@class NSArray, NSString, WBTabCollection, WBBrowserState;

@interface WBReadonlyTabCollection : NSObject <WBStateProvider> {
    WBTabCollection *_collection;
}

@property (readonly, nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (readonly, copy, nonatomic) NSArray *windowStates;
@property (readonly, nonatomic) int windowsFolderSpecialID;
@property (readonly, copy, nonatomic) NSArray *windows;
@property (readonly, copy, nonatomic) NSArray *profiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *namedTabGroupsInDefaultProfile;
@property (readonly, copy, nonatomic) NSArray *allNamedTabGroupsUnsorted;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (nonatomic) unsigned long long maximumTabsPerGroup;

- (id)windowStateWithUUID:(id)a0;
- (id)tabGroupWithUUID:(id)a0;
- (id)windowWithUUID:(id)a0;
- (id)init;
- (id)devicesForProfile:(id)a0;
- (id)tabWithUUID:(id)a0;
- (id)namedTabGroupsForProfileWithIdentifier:(id)a0;
- (id)tabsForTabGroup:(id)a0;
- (void)waitForPendingChanges;
- (void).cxx_destruct;
- (void)disableSuddenTerminationForPendingChanges;

@end
