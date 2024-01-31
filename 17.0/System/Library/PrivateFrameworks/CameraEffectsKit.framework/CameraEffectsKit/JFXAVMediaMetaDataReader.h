@class AVMetadataItem, NSString, NSError, AVAssetReaderOutputMetadataAdaptor;

@interface JFXAVMediaMetaDataReader : JFXAVMediaDataReader <JFXMediaMetadataReader>

@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (retain, nonatomic) AVMetadataItem *currentMetadataItem;
@property (retain, nonatomic) AVMetadataItem *nextMetadataItem;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } readableTimeRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long signPostID;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)JFX_preloadData;
- (void)cancelReadingForReaderReset;
- (id)createAssetReaderTrackOutput;
- (void)didUpdateReadingRange;
- (BOOL)hasRemainingAvailableData;
- (id)metadataForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)readAheadToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)readAndDiscardRemainingAvailableData;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTimeOfCurrentData;

@end
