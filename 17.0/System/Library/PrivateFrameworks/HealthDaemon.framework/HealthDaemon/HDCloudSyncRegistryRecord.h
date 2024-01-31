@class NSSet, NSArray, NSString, NSDate, HKProfileIdentifier, HDCloudSyncCodableRegistry;

@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableRegistry *_underlyingRegistry;
}

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;
@property (retain, nonatomic) NSSet *disabledSyncIdentities;
@property (readonly, copy, nonatomic) NSSet *ownerIdentifiers;
@property (readonly, copy, nonatomic) NSSet *syncIdentities;
@property (readonly, copy, nonatomic) NSArray *childHeaderRecordIDs;
@property (nonatomic) BOOL deleted;
@property (copy, nonatomic) NSString *displayFirstName;
@property (copy, nonatomic) NSString *displayLastName;
@property (copy, nonatomic) NSDate *displayNameModificationDate;
@property (copy, nonatomic) HKProfileIdentifier *ownerProfileIdentifier;
@property (copy, nonatomic) HKProfileIdentifier *sharedProfileIdentifier;

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isRegistryRecord:(id)a0;
+ (BOOL)isRegistryRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)requiresUnderlyingMessage;
+ (id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)addStoreIdentifier:(id)a0 ownerIdentifier:(id)a1 syncIdentity:(id)a2;
- (id)initInZone:(id)a0 ownerProfileIdentifier:(id)a1;
- (id)initInZone:(id)a0 ownerProfileIdentifier:(id)a1 sharedProfileIdentifier:(id)a2;
- (id)printDescription;
- (void)removeStoreIdentifier:(id)a0 ownerIdentifier:(id)a1 syncIdentity:(id)a2;
- (id)serializeUnderlyingMessage;
- (id)storeIdentifiersForOwnerIdentifier:(id)a0;
- (id)storeIdentifiersForSyncIdentity:(id)a0;

@end
