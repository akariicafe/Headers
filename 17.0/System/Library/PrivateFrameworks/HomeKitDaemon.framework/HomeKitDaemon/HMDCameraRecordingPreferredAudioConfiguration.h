@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject

@property (readonly) NSNumber *bitRate;
@property (readonly) long long sampleRate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSampleRate:(long long)a0 bitRate:(id)a1;

@end
