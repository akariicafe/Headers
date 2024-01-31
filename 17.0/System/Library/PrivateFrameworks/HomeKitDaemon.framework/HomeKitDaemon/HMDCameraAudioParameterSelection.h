@class HMDBitRateSetting, NSArray, HMDSupportedRTPConfiguration, HMDCameraAudioParameterCombination, HMDAudioCodecGroup, HMDSupportedAudioStreamConfiguration, HMDStreamingCapabilities, HMDAudioSampleRate, HMDSelectedAudioParameters, NSNumber;

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelection

@property (readonly, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (retain, nonatomic) HMDSelectedAudioParameters *selectedAudioParameters;
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities;
@property (readonly, nonatomic) NSArray *audioCodecsPreference;
@property (readonly, nonatomic) NSArray *bitrateSettingsPreference;
@property (readonly, nonatomic) NSArray *sampleRatesPreference;
@property (readonly, nonatomic) NSArray *validAudioParameterCombinations;
@property (retain, nonatomic) HMDAudioCodecGroup *selectedCodecGroupType;
@property (retain, nonatomic) HMDBitRateSetting *selectedBitRateSetting;
@property (retain, nonatomic) HMDAudioSampleRate *selectedSampleRate;
@property (retain, nonatomic) NSNumber *selectedAudioChannelCount;
@property (retain, nonatomic) HMDCameraAudioParameterCombination *selectedAudioParameterCombination;
@property (retain, nonatomic) NSNumber *comfortNoiseSupported;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_generateAllCombinations:(id)a0;
- (BOOL)_selectParametersFromCodec:(id)a0 bitRateSettings:(id)a1 sampleRates:(id)a2 audioChannelCount:(id)a3;
- (id)createSRTPParamters;
- (id)createSelectedAudioParameters;
- (id)initWithSessionID:(id)a0 supportedAudioConfiguration:(id)a1 supportedRTPConfiguration:(id)a2 streamingCapabilities:(id)a3;
- (BOOL)selectAudioParameters;

@end
