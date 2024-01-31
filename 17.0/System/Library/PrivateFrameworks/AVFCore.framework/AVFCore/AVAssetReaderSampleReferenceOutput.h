@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (BOOL)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;

@end
