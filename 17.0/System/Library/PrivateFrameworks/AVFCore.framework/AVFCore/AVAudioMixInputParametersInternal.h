@class NSString, AVAudioMixEffectParameters, AVMutableScheduledAudioParameters;

@interface AVAudioMixInputParametersInternal : NSObject {
    int trackID;
    AVMutableScheduledAudioParameters *scheduledAudioParameters;
    NSString *audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap { } *tap;
    AVAudioMixEffectParameters *effectParameters;
}

@end
