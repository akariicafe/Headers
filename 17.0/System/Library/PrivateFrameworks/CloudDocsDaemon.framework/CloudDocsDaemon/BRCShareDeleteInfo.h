@class CKRecordID, CKRecord;

@interface BRCShareDeleteInfo : NSObject

@property (readonly, nonatomic) CKRecordID *shareID;
@property (readonly, nonatomic) CKRecord *emptyRecord;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithShareID:(id)a0 emptyRecord:(id)a1;

@end
