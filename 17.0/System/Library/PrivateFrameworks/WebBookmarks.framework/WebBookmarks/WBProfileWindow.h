@class WBTabGroup, NSString, WBTabGroupManager, WBWindowState;
@protocol WBProfileWindowDelegate;

@interface WBProfileWindow : NSObject <WBTabGroupManagerObserver> {
    WBTabGroupManager *_tabGroupManager;
    WBWindowState *_windowState;
}

@property (copy, nonatomic) NSString *activeProfileIdentifier;
@property (copy, nonatomic) NSString *activeTabGroupUUID;
@property (nonatomic) BOOL canSwitchProfiles;
@property (weak, nonatomic) id<WBProfileWindowDelegate> delegate;
@property (readonly, nonatomic) BOOL isInDefaultProfile;
@property (copy, nonatomic) id /* block */ unnamedTabGroupDisplayTitleProvider;
@property (readonly, copy, nonatomic) WBTabGroup *unnamedTabGroupForActiveProfile;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willClose;
- (void)dealloc;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (id)initWithWindowState:(id)a0 tabGroupManager:(id)a1 preferredProfileIdentifier:(id)a2 deviceName:(id)a3;
- (void)_attachLocalGroupToDefaultProfileIfNeeded;
- (void)_attachUnnamedTabGroupToProfileWithIdentifier:(id)a0;
- (id /* block */)_displayTitleProviderForTabGroupWithUUID:(id)a0;
- (id)_existingUnnamedTabGroupForProfileWithIdentifier:(id)a0;
- (id)_findOrCreateUnnamedTabGroupForProfile:(id)a0;
- (BOOL)_isProfileActive:(id)a0;
- (id)_lastActiveTabGroupForProfile:(id)a0;
- (void)_selectPreferredProfileIfNeeded:(id)a0;
- (id)initWithWindowState:(id)a0 tabGroupManager:(id)a1 deviceName:(id)a2;

@end
