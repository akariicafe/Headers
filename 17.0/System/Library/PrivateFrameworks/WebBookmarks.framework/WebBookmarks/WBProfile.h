@class NSData, NSString, NSArray, WBSNamedColorOption, WebBookmark, NSDictionary, NSMutableDictionary, WBSCRDTPosition;

@interface WBProfile : NSObject <NSCopying, NSMutableCopying, WBBookmarkRepresentable, WBSProfileMetadataProviding> {
    id /* block */ _titleProvider;
    NSMutableDictionary *_settingsDictionary;
}

@property (class, readonly, copy, nonatomic) NSArray *availableSymbolImageNames;

@property (readonly, nonatomic) int databaseIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) WBSNamedColorOption *color;
@property (copy, nonatomic) NSString *customFavoritesFolderServerID;
@property (readonly, copy, nonatomic) NSString *identifierForExtensions;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, copy, nonatomic) NSData *startPageSectionsDataRepresentation;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *serverID;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)settingForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1;
- (Class)_copyClassIsMutable:(BOOL)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isMutable:(BOOL)a1;
- (id)_defaultSettingForKey:(id)a0;
- (id)differenceFromProfile:(id)a0;
- (id)initWithBookmark:(id)a0 kind:(long long)a1;
- (id)initWithTitle:(id)a0 symbolImageName:(id)a1 favoritesFolderServerID:(id)a2 deviceIdentifier:(id)a3;

@end
