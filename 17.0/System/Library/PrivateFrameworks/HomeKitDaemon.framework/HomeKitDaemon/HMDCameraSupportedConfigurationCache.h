@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject

@property (readonly, getter=isValid) BOOL valid;
@property (retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration;

- (void).cxx_destruct;

@end
