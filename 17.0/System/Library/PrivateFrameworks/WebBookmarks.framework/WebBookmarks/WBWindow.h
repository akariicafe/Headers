@class WBTabGroup, NSString, NSDictionary, WBMutableTabGroup, NSDate, WebBookmark;

@interface WBWindow : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) int identifier;
@property (retain, nonatomic) WBTabGroup *activeTabGroup;
@property (retain, nonatomic) NSDate *dateClosed;
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, nonatomic) WBMutableTabGroup *localTabGroup;
@property (readonly, nonatomic) WBMutableTabGroup *privateTabGroup;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSDictionary *tabGroupsToActiveTabs;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (readonly, nonatomic) BOOL isFavoritesBarHidden;
@property (readonly, nonatomic) BOOL isMinimized;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL prefersSidebarVisible;
@property (readonly, nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) BOOL isTabBarHidden;

- (id)initWithUUID:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 localTabGroup:(id)a1 privateTabGroup:(id)a2;
- (unsigned long long)hash;
- (void)removeAllActiveTabUUIDs;
- (id)initWithUUID:(id)a0 sceneID:(id)a1;
- (id)description;
- (id)activeTabUUIDForTabGroupWithUUID:(id)a0;
- (void).cxx_destruct;
- (void)removeActiveTabUUIDForTabGroupWithUUID:(id)a0;
- (void)setActiveTabUUID:(id)a0 forTabGroupWithUUID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmark:(id)a0;
- (void)_updateExtraAttributesUsingBlock:(id /* block */)a0;
- (id)initWithBookmark:(id)a0 activeTabGroup:(id)a1 localTabGroup:(id)a2 privateTabGroup:(id)a3;
- (id)initWithUUID:(id)a0 activeTabGroup:(id)a1 localTabGroup:(id)a2 privateTabGroup:(id)a3 sceneID:(id)a4;
- (void)updateActiveTabGroup;

@end
