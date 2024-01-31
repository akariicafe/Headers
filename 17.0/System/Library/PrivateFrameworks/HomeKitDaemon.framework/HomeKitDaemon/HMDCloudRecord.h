@class NSUUID, NSString, CKRecordID, NSData, HMDCloudZone, CKRecord;

@interface HMDCloudRecord : HMFObject

@property (retain, nonatomic) NSUUID *objectID;
@property (nonatomic) BOOL decryptionFailed;
@property (nonatomic) BOOL encryptionFailed;
@property (nonatomic) BOOL controllerIdentifierChanged;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) NSString *recordName;
@property (weak, nonatomic) HMDCloudZone *cloudZone;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSData *cachedData;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=isRecordCreated) BOOL recordCreated;
@property (readonly, nonatomic, getter=isRecordCached) BOOL recordCached;
@property (readonly) unsigned long long objectEncoding;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (id)shortDescription;
- (void)clearData;
- (id)description;
- (void).cxx_destruct;
- (BOOL)encodeObjectChange:(id)a0;
- (id)extractObjectChange;
- (id)initWithObjectID:(id)a0 recordName:(id)a1 cloudZone:(id)a2;

@end
