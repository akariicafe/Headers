@class NSString, CKRecord, NSDate;

@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {
    BOOL _compressNewData;
}

@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) NSString *cloudRecordName;
@property (readonly, nonatomic) NSDate *cloudRecordModificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arrayOfCKRecordsFromArray:(id)a0;
+ (id)arrayOfEncryptedRecordsFromArray:(id)a0;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithCKRecord:(id)a0 isNewlyCreatedRecord:(BOOL)a1;

@end
