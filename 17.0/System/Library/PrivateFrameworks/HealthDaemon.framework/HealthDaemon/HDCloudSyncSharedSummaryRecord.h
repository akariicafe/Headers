@class HDCloudSyncCodableSharedSummaryRecord, NSUUID, NSString, NSArray, NSData;

@interface HDCloudSyncSharedSummaryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableSharedSummaryRecord *_underlyingSummaryRecord;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *package;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *compatibilityVersion;
@property (readonly, copy, nonatomic) NSArray *objectTypes;
@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers;
@property (readonly, copy, nonatomic) NSData *summaryData;

+ (id)recordType;
+ (BOOL)hasFutureSchema:(id)a0;
+ (BOOL)isSummaryRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0 UUID:(id)a1;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)shouldSerializeUnderlyingMessageAsProtected;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 UUID:(id)a1 package:(id)a2 name:(id)a3 version:(id)a4 compatibilityVersion:(id)a5 objectTypes:(id)a6 authorizationIdentifiers:(id)a7 summaryData:(id)a8;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end
