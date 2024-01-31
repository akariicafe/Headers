@class NSString, HDAttachmentReference, HDCloudSyncCodableAttachmentReference;

@interface HDCloudSyncAttachmentReferenceRecord : HDCloudSyncRecord {
    HDCloudSyncCodableAttachmentReference *_underlyingReference;
}

@property (readonly, copy, nonatomic) NSString *referenceIdentifier;
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) HDAttachmentReference *attachmentReference;

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isAttachmentReferenceRecord:(id)a0;
+ (BOOL)isAttachmentReferenceRecordID:(id)a0;
+ (id)recordIDForReferenceIdentifier:(id)a0 zoneID:(id)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initWithAttachmentReference:(id)a0 zoneID:(id)a1;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
