@class NSString, NSArray, NSURL, WebBookmark, NSSet, NSDictionary, NSMutableDictionary, WBTab, NSMutableArray, WBSCRDTPosition;

@interface WBTabGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable> {
    NSArray *_cachedImmutableTabs;
    NSMutableArray *_deletedTabs;
    NSMutableDictionary *_tabsByUUID;
    id /* block */ _displayTitleProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id /* block */ displayTitleProvider;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (nonatomic) long long kind;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic, getter=_isMutable) BOOL isMutable;
@property (readonly, nonatomic, getter=_tabClass) Class tabClass;
@property (readonly, copy, nonatomic) NSArray *overflowRemoteTabs;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) BOOL hasDynamicTitle;
@property (readonly, copy, nonatomic) NSString *lastSelectedTabUUID;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic, getter=isUnnamed) BOOL unnamed;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSURL *representativeURL;
@property (readonly, nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isNamed) BOOL named;
@property (readonly, nonatomic) BOOL usesGlobalPinnedTabs;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, copy, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, copy, nonatomic) NSSet *emptyTabsUUIDSet;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) WBTab *lastPinnedTab;
@property (readonly, nonatomic) BOOL supportsTabGroupFavorites;
@property (readonly, nonatomic) BOOL supportsDeviceTabs;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly, nonatomic, getter=isInDefaultProfile) BOOL inDefaultProfile;
@property (readonly, copy, nonatomic) NSString *debugSyncDescription;
@property (readonly, copy, nonatomic) NSString *debugRecursiveSyncDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)tabWithUUID:(id)a0;
- (BOOL)isIdentical:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1;
- (BOOL)isTabPinnable:(id)a0;
- (id)lastPinnedTabExcluding:(id)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isMutable:(BOOL)a1;
- (void)_updateCachedImmutableTabsIfNeeded;
- (void)_updateTabLookupTable;
- (void)detectDuplicatedTabs;
- (BOOL)hasSameKindAsTabGroup:(id)a0;
- (id)initWithBookmark:(id)a0 lastSelectedTabUUID:(id)a1;
- (id)initWithBookmark:(id)a0 lastSelectedTabUUID:(id)a1 kind:(long long)a2;
- (id)initWithTitle:(id)a0 uuid:(id)a1 deviceIdentifier:(id)a2;
- (BOOL)tabsAreIdentical:(id)a0;

@end
