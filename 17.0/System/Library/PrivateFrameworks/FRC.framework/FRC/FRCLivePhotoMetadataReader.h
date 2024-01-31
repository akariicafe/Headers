@class AVAssetReaderOutputMetadataAdaptor, NSMutableArray;

@interface FRCLivePhotoMetadataReader : NSObject {
    AVAssetReaderOutputMetadataAdaptor *_metadataOutputAdaptor;
    unsigned long long _frameIndex;
    long long _previousDisplacement;
    unsigned long long _recipe;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _droppingThreshold;
    unsigned long long _totalFrames;
    unsigned long long _initialOriginalPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _initialTime;
    unsigned int _metadataVersion;
    NSMutableArray *_metadataList;
}

@property (nonatomic) BOOL verbose;
@property (nonatomic) BOOL printMetadata;
@property (readonly, nonatomic) unsigned long long numberOfMetadataFrames;
@property (readonly, nonatomic) unsigned long long numberOfDroppedFrames;
@property (readonly, nonatomic) unsigned long long numberOfInterpolatedFrames;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } burstDropTime;
@property (readonly, nonatomic) long long ptsMismatches;
@property (readonly, nonatomic) BOOL stillImageTransformAvailble;
@property (readonly, nonatomic) BOOL stillImageTransformReferenceDimensionsAvailable;

- (id)init;
- (void).cxx_destruct;
- (void)readLivePhotoMetadataFromAsset:(id)a0;
- (id)createMetadataAdaptorForAsset:(id)a0;
- (id)createMetadataEntryForV3Metadata:(struct { unsigned short x0; float x1[9]; unsigned long long x2; unsigned long long x3; unsigned char x4; char x5; unsigned char x6; char x7[13]; } *)a0 frameIndex:(unsigned long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 isIDR:(BOOL)a3 noRecipeGap:(BOOL)a4;
- (void)parseStillImageMetadata:(id)a0;
- (unsigned long long)preParseMetadata;
- (void)printMetadata:(id)a0 withVideoFrame:(id)a1;
- (void)printMetadataListWithVideoTimingInfo:(id)a0;
- (BOOL)processLivePhotoMetadataItem:(id)a0 isIDR:(BOOL)a1 recipeAvailable:(BOOL)a2;

@end
