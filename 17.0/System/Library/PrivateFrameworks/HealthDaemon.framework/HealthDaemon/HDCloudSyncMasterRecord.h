@class NSSet;

@interface HDCloudSyncMasterRecord : HDCloudSyncRecord

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;

+ (id)recordType;
+ (BOOL)isMasterRecord:(id)a0;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isMasterRecordID:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)recordWithCKRecord:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInSyncCircle:(id)a0 disabledOwnerIdentifiers:(id)a1;
- (id)initInZone:(id)a0 disabledOwnerIdentifiers:(id)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
