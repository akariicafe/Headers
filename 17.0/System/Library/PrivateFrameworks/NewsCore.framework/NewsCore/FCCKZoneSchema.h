@class NSString, NSDictionary, NSArray, CKRecordZoneID;

@interface FCCKZoneSchema : NSObject {
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
    BOOL _isDefaultZone;
    BOOL _supportsRecordNameEncryption;
    BOOL _supportsRecordFieldEncryption;
    BOOL _shouldUseZoneWidePCS;
    BOOL _shouldUseSecureContainer;
    NSString *_clientZoneName;
    NSString *_serverZoneName;
    CKRecordZoneID *_clientZoneID;
    CKRecordZoneID *_serverZoneID;
    NSArray *_staticRecordNamesEligibleForMigration;
}

- (id)init;
- (void).cxx_destruct;

@end
