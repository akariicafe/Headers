@class HDCloudSyncCodableDeviceKeyValue;

@interface HDCloudSyncDeviceKeyValueRecord : HDCloudSyncRecord

@property (copy, nonatomic) HDCloudSyncCodableDeviceKeyValue *underlyingDeviceKeyValue;

+ (id)recordType;
+ (id)fieldsForUnprotectedSerialization;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isDeviceKeyValueRecord:(id)a0;
+ (BOOL)isDeviceKeyValueRecordID:(id)a0;
+ (BOOL)requiresEncryptedSchemaVersion;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)syncIdentity;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)codableDeviceKeyValueEntry;
- (id)deviceContextRecordID;
- (id)deviceKeyValueEntry:(id *)a0;
- (id)initInZone:(id)a0 deviceKeyValueEntry:(id)a1 deviceContextRecord:(id)a2 UUID:(id)a3;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)updateDeviceKeyValueEntry:(id)a0;

@end
