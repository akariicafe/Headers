@class HDCloudSyncCodableDeviceContext;

@interface HDCloudSyncDeviceContextRecord : HDCloudSyncRecord {
    HDCloudSyncCodableDeviceContext *_underlyingDeviceContext;
}

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isDeviceContextRecord:(id)a0;
+ (BOOL)isDeviceContextRecordID:(id)a0;
+ (BOOL)requiresEncryptedSchemaVersion;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)updateDeviceContextWithContext:(id)a0;
- (id)codableDeviceContext;
- (id)deviceContext:(id *)a0;
- (id)deviceContextWithError:(id *)a0;
- (id)initInZone:(id)a0 deviceContext:(id)a1 UUID:(id)a2;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
