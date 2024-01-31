@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (id)init;
- (void)dealloc;
- (id)_attachedAdaptor;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)description;
- (id)mediaType;
- (id)_asset;
- (void)_setAttachedAdaptor:(id)a0;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (id)_figAssetReaderExtractionOptions;
- (id)_formatDescriptions;
- (BOOL)_trimsSampleDurations;
- (BOOL)appliesPreferredTrackTransform;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;
- (BOOL)limitsImageQueueCapacityToOneFrame;
- (void)setLimitsImageQueueCapacityToOneFrame:(BOOL)a0;

@end
