@class NSSet, DNDSBypassSettingsRecord, NSString;

@interface DNDSSenderConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSSet *allowedContactTypes;
@property (readonly, copy, nonatomic) NSSet *deniedContactTypes;
@property (readonly, copy, nonatomic) NSSet *allowedContactGroups;
@property (readonly, copy, nonatomic) NSSet *deniedContactGroups;
@property (readonly, copy, nonatomic) NSSet *allowedContacts;
@property (readonly, copy, nonatomic) NSSet *deniedContacts;
@property (readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)_initWithAllowedContactTypes:(id)a0 deniedContactTypes:(id)a1 allowedContactGroups:(id)a2 deniedContactGroups:(id)a3 allowedContacts:(id)a4 deniedContacts:(id)a5 phoneCallBypassSettings:(id)a6;
- (id)init;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
