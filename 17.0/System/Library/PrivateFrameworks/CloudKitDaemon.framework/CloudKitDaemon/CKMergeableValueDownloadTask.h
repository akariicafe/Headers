@class NSString, CKMergeableValueID, CKRecord, CKMergeableRecordValue;

@interface CKMergeableValueDownloadTask : NSObject

@property (retain, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) CKMergeableValueID *mergeableValueID;
@property (retain, nonatomic) CKMergeableRecordValue *recordValue;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
