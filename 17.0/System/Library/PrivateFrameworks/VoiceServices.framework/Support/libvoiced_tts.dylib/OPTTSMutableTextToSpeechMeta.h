@class OPTTSTextToSpeechVoice, OPTTSTextToSpeechResource;

@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (copy, nonatomic) OPTTSTextToSpeechVoice *voice;
@property (copy, nonatomic) OPTTSTextToSpeechResource *resource;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
