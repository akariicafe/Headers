@class NSArray, NSString, WBSCRDTPosition;

@interface WBMutableTabGroup : WBTabGroup

@property (nonatomic) int identifier;
@property (copy, nonatomic) NSArray *deletedTabs;
@property (nonatomic) long long kind;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (copy, nonatomic) id /* block */ displayTitleProvider;
@property (copy, nonatomic) NSString *lastSelectedTabUUID;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *profileIdentifier;
@property (copy, nonatomic) NSString *deviceUUIDString;

+ (id)privateTabGroup;
+ (id)localTabGroup;
+ (id)unnamedTabGroupWithDeviceIdentifier:(id)a0;
+ (id)localTabGroupWithUUID:(id)a0;
+ (id)unnamedTabGroupWithUUID:(id)a0 profileIdentifier:(id)a1 deviceIdentifier:(id)a2;

- (void)deleteTabs:(id)a0;
- (void)setProfileIdentifier:(id)a0;
- (void)setIdentifier:(int)a0;
- (void)setKind:(long long)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSyncable:(BOOL)a0;
- (id)mutableTabWithUUID:(id)a0;
- (void)setTitle:(id)a0;
- (void)markBackgroundImageAsModified;
- (void)appendTabs:(id)a0;
- (void)insertTabs:(id)a0 afterTab:(id)a1;
- (void)removeTab:(id)a0;
- (void)reorderTab:(id)a0 afterTab:(id)a1;
- (void)setDisplayTitleProvider:(id /* block */)a0;
- (void)setLastSelectedTabUUID:(id)a0;
- (void)setTabs:(id)a0;
- (void)setDeletedTabs:(id)a0;
- (void)_fixLastSelectedTabIfNeeded;
- (void)_performWithMutableTabs:(id /* block */)a0;
- (void)clearDeletedTabs;
- (void)clearTabs;
- (id)deletedTabs;
- (id)initWithBookmark:(id)a0 tabs:(id)a1 lastSelectedTabUUID:(id)a2;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1 profileIdentifier:(id)a2;
- (void)mergeWithTabGroup:(id)a0;
- (void)truncateToNumberOfTabs:(unsigned long long)a0;
- (void)updateLastSelectedTab;

@end
