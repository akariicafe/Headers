@class NSData;

@interface FTMutableTextToSpeechSpeechFeatureInputWave : FTTextToSpeechSpeechFeatureInputWave

@property (nonatomic) int sample_rate;
@property (copy, nonatomic) NSData *pcm_data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pcm_data:(id /* block */)a0;

@end
