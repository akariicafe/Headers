@class NSUUID, HDCloudSyncCodableAttachmentManagementRecord;

@interface HDCloudSyncAttachmentManagementRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentManagementRecord *_underlyingAttachmentManagementRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)recordType;
+ (BOOL)isAttachmentManagementRecordID:(id)a0;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isAttachmentManagementRecord:(id)a0;
+ (id)recordIDForZoneID:(id)a0;
+ (BOOL)requiresUnderlyingMessage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZoneID:(id)a0;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
