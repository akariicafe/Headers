@class BRFileObjectID, CKRecordID, CKRecord, BRCClientZone, BRCProgress, NSError, GSPermanentStorage;

@interface BRCDownloadVersion : BRCDownload {
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    BOOL _sharedZone;
}

@property (readonly, nonatomic) GSPermanentStorage *storage;
@property (retain, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) NSError *gsError;
@property (readonly, nonatomic) BOOL isLoser;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;

- (int)kind;
- (id)description;
- (void).cxx_destruct;
- (id)_stageContentWithSession:(id)a0 error:(id *)a1;
- (id)secondaryRecord;
- (id)_stageWithSession:(id)a0 creationInfo:(id *)a1 error:(id *)a2;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etag:(id)a2 isLoser:(BOOL)a3;
- (id)secondaryRecordID;
- (void)setSecondaryRecord:(id)a0;

@end
