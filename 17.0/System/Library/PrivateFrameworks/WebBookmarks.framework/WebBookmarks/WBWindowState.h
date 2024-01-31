@class NSMutableSet, NSString, NSDictionary, WBMutableTabGroup, NSDate, NSMutableDictionary, NSSet;

@interface WBWindowState : NSObject <NSCopying, NSSecureCoding, WBSerializable> {
    NSMutableDictionary *_profilesToActiveTabGroups;
    NSMutableSet *_unnamedTabGroupUUIDs;
    WBMutableTabGroup *_unnamedTabGroupForRestoration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL prefersSidebarVisible;
@property (nonatomic) int identifier;
@property (copy, nonatomic) NSString *activeTabGroupUUID;
@property (retain, nonatomic) NSDate *dateClosed;
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, nonatomic) WBMutableTabGroup *localTabGroup;
@property (readonly, nonatomic) WBMutableTabGroup *privateTabGroup;
@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSMutableDictionary *tabGroupsToActiveTabs;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (readonly, nonatomic) BOOL isFavoritesBarHidden;
@property (readonly, nonatomic) BOOL isMinimized;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) BOOL isTabBarHidden;
@property (nonatomic) BOOL newlyCreated;
@property (retain, nonatomic) NSString *activeProfileIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *profilesToActiveTabGroups;
@property (readonly, copy, nonatomic) NSSet *unnamedTabGroupUUIDs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 localTabGroup:(id)a1 privateTabGroup:(id)a2;
- (void)removeUnnamedTabGroupUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllActiveTabUUIDs;
- (void)addUnnamedTabGroupUUID:(id)a0;
- (id)initWithUUID:(id)a0 sceneID:(id)a1;
- (id)activeTabGroupUUIDForProfileWithIdentifier:(id)a0;
- (id)activeTabUUIDForTabGroupWithUUID:(id)a0;
- (void)removeActiveTabGroupUUIDForProfileWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)localOrUnnamedTabGroupForRestoration:(BOOL)a0 inProfileWithIdentifier:(id)a1 deviceIdentifier:(id)a2;
- (void)removeActiveTabUUIDForTabGroupWithUUID:(id)a0;
- (void)setActiveTabUUID:(id)a0 forTabGroupWithUUID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 activeTabGroupUUID:(id)a1 localTabGroup:(id)a2 privateTabGroup:(id)a3 sceneID:(id)a4 windowID:(int)a5;
- (void)setActiveTabGroupUUID:(id)a0 forProfileWithIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
