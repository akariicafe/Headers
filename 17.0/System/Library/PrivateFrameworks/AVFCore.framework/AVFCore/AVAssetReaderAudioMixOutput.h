@class NSArray, NSDictionary, NSString, AVAudioMix, AVAssetReaderAudioMixOutputInternal;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property (readonly, nonatomic) NSArray *audioTracks;
@property (readonly, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) AVAudioMix *audioMix;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)a0 audioSettings:(id)a1;

- (id)_audioTimePitchAlgorithmForTrack:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_audioCurvesForTrack:(id)a0;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)description;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0 forTrack:(id)a1;
- (void)_setAudioTimePitchAlgorithm:(id)a0 forTrack:(id)a1;
- (id)mediaType;
- (id)_asset;
- (id)initWithAudioTracks:(id)a0 audioSettings:(id)a1;
- (struct opaqueMTAudioProcessingTap { } *)_audioTapProcessorForTrack:(id)a0;
- (void)_setAudioCurves:(id)a0 forTrack:(id)a1;

@end
