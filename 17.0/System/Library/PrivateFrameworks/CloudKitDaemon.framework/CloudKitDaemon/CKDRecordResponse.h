@class NSString, CKRecordID, CKRecord;

@interface CKDRecordResponse : NSObject

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) NSString *etag;

- (id)CKPropertiesDescription;
- (id)description;
- (id)initWithRecordID:(id)a0 record:(id)a1 etag:(id)a2;
- (void).cxx_destruct;

@end
