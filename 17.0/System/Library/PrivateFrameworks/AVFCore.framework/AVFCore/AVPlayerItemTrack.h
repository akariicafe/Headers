@class NSArray, AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (void)_transferVideoEnhancementOptionsToFig;
- (id)_playerItem;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (unsigned long long)hash;
- (void)_transferEnabledToFig;
- (void)_transferHapticVolumeToFig;
- (void)dealloc;
- (int)effectiveEQPreset;
- (id)_weakReferenceToPlayerItem;
- (float)hapticVolume;
- (void)_transferDisableColorMatchingToFig;
- (void)addOutput:(id)a0;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)removeOutput:(id)a0;
- (BOOL)disableColorMatching;
- (id)fallbackTrack;
- (id)description;
- (id)videoEnhancementFilterOptions;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)_transferLoudnessInfoToFig;
- (id)loudnessInfo;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (int)trackID;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)setLoudnessInfo:(id)a0;
- (long long)activeHapticChannelIndex;
- (void)setHapticVolume:(float)a0;
- (id)effectiveLoudnessInfo;
- (void)setMutesHaptics:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (BOOL)mutesHaptics;
- (void)_transferMutesHapticsToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;

@end
