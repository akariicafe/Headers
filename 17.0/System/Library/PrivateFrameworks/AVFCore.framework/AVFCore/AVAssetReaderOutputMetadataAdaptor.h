@class AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptorInternal;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)a0;
- (int)addExtractionForOutput:(id)a0 figAssetReader:(struct OpaqueFigAssetReader { } *)a1 options:(id)a2 withOutputExtactionID:(int *)a3;
- (id)nextTimedMetadataGroup;

@end
