@class MSVABTestGenerator, MSVTrialExperiment, MPCPlaybackEngine, ICEnvironmentMonitor, MPPlaybackUserDefaults;

@interface MPCAudioAssetTypeSelector : NSObject

@property (retain, nonatomic) MPPlaybackUserDefaults *defaults;
@property (retain, nonatomic) ICEnvironmentMonitor *environmentMonitor;
@property (readonly, nonatomic) MSVABTestGenerator *outcomeGenerator;
@property (readonly, nonatomic) BOOL spatialIsAutomatic;
@property (readonly, nonatomic) BOOL prefersSpatialOverLossless;
@property (readonly, nonatomic) BOOL prefersHighResolutionLossless;
@property (readonly, nonatomic) BOOL prefersLossless;
@property (readonly, nonatomic) BOOL prefersHighQualityStereo;
@property (readonly, nonatomic) BOOL prefersLowQualityStereo;
@property (readonly, nonatomic) BOOL networkBandwidthIsHigh;
@property (retain, nonatomic) MSVTrialExperiment *trialExperiment;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) BOOL spatialIsAlwaysOn;
@property (readonly, nonatomic) BOOL spatialIsOff;

- (id)initWithPlaybackEngine:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)environmentDescription;
- (id)preferredAudioAssetTypeForItem:(id)a0;
- (id)audioFormatMatchingAudioAssetType:(long long)a0 formats:(id)a1 route:(id)a2;
- (unsigned long long)audioFormatPreference;
- (id)descriptionForTiers:(unsigned long long)a0;
- (id)descriptionForTraits:(unsigned long long)a0;
- (id)experimentDescription;
- (void)handleExperimentDidReceiveUpdateNotification:(id)a0;
- (id)initWithPlaybackEngine:(id)a0 userDefaults:(id)a1 environmentMonitor:(id)a2;
- (long long)nextAssetTypeOutcomeWithIsStartItem:(BOOL)a0;
- (id)preferencesDescription;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)a0 isStartItem:(BOOL)a1;
- (id)preferredAudioAssetTypeForSongWithTrait:(unsigned long long)a0 isStartItem:(BOOL)a1 supportsVocalAttenuation:(BOOL)a2;
- (id)preferredAudioFormatForAudioFormats:(id)a0 route:(id)a1;
- (id)preferredPlayerAudioFormatForItem:(id)a0 route:(id)a1;
- (BOOL)prefersSpatialOverStereo:(id)a0;
- (long long)tierMatchingAudioAssetType:(long long)a0;
- (void)updateOutcomeGenerator;
- (void)updateProbabilityOfProgressiveDownloadAssets:(float)a0;
- (BOOL)userPrefersMultichannelAudioOverStereo:(id)a0;

@end
