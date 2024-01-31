@class NSIndexSet, BRCProgress, BRCServerZone;

@interface BRCDownloadContent : BRCDownload {
    BRCServerZone *_zone;
    BOOL _isFinderBookmark;
}

@property (readonly, nonatomic) BOOL liveItemIsPackage;
@property (readonly, nonatomic) unsigned int liveDocumentID;
@property (readonly, nonatomic) unsigned long long liveFileID;
@property (readonly, nonatomic) NSIndexSet *desiredIndices;
@property (readonly, nonatomic) BOOL isLoser;
@property (readonly, nonatomic) BOOL isDocumentModifiedByOtherUser;
@property (readonly, nonatomic) BOOL requiresTwoPhase;
@property (retain, nonatomic) BRCProgress *progress;

- (int)kind;
- (void)setProgress:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_prepareSecondStageWithSession:(id)a0 manifest:(id)a1 package:(id)a2 error:(id *)a3;
- (BOOL)_stageWithSession:(id)a0 error:(id *)a1;
- (BOOL)_stageWithSession:(id)a0 manifest:(id)a1 package:(id)a2 xattrsPackage:(id)a3 error:(id *)a4;
- (id)etagIfLoser;
- (id)initWithDocument:(id)a0 stageID:(id)a1 etagIfLoser:(id)a2;

@end
