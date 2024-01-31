@class NSString, CSAudioPowerMeter;

@interface CSAudioPowerProvider : NSObject <CSAudioPowerService> {
    CSAudioPowerMeter *_powerMeter;
    float _cachedAvgPower;
    float _cachedPeakPower;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)processAudioChunk:(id)a0;
- (void).cxx_destruct;
- (void)getAudioPowerUpdateWithCompletion:(id /* block */)a0;
- (void)processAudioChunkForTV:(id)a0;

@end
