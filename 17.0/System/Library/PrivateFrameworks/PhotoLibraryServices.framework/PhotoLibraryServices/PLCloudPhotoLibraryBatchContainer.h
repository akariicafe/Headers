@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (void)incrementRetryCount;
- (id)batchesSplitForError;
- (id)lastAddedRecord;

@end
