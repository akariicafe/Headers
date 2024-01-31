@class NSString, NSMutableDictionary, NSData, NSURL, NSMutableSet;

@interface DNDSSyncEngineMetadataStore : NSObject <DNDSSyncEngineMetadataStoring> {
    NSData *_metadata;
    NSMutableDictionary *_systemFieldsByRecordID;
    NSURL *_url;
    NSString *_userRecordID;
    long long _accountStatus;
    BOOL _encryptionAvailable;
    NSMutableSet *_zoneNames;
}

@property (copy, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *userRecordID;
@property (nonatomic) long long accountStatus;
@property (nonatomic, getter=isEncryptionAvailable) BOOL encryptionAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_write;
- (id)recordWithID:(id)a0;
- (void)purge;
- (void)_read;
- (id)zoneNames;
- (void)addRecord:(id)a0;
- (id)initWithURL:(id)a0;
- (id)recordIDsWithZoneID:(id)a0;
- (id)init;
- (void)removeRecordsWithZoneID:(id)a0;
- (void)_removeSystemFieldsForRecordID:(id)a0;
- (void)_updateSystemFieldsForRecord:(id)a0;
- (BOOL)removeZoneName:(id)a0;
- (id)_decodeRecordIDFromData:(id)a0;
- (void).cxx_destruct;
- (void)removeRecordWithID:(id)a0;
- (BOOL)addZoneName:(id)a0;
- (id)_encodedRecordIDFromRecordID:(id)a0;
- (id)_encodedSystemFieldsFromRecord:(id)a0;

@end
