@class NSData;

@interface OPTTSMutableTextToSpeechVoiceResource : OPTTSTextToSpeechVoiceResource

@property (nonatomic) long long type;
@property (copy, nonatomic) NSData *data;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)data:(id /* block */)a0;

@end
