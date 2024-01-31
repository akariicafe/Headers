@class BRCItemID, NSString, CKRecordID, BRCClientZone, BRCProgress, NSNumber, CKRecord;

@interface BRCUpload : NSObject <BRCTransfer> {
    BRCClientZone *_clientZone;
}

@property (readonly, nonatomic) long long throttleID;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) CKRecordID *secondaryRecordID;
@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) NSString *stageID;
@property (readonly, nonatomic) NSNumber *transferID;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) BRCProgress *progress;
@property (nonatomic) BOOL progressPublished;
@property (nonatomic) unsigned long long doneSize;
@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) CKRecord *secondaryRecord;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0 stageID:(id)a1 transferSize:(unsigned long long)a2;

@end
