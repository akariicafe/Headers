@class AFVoiceInfo, NSLocale;

@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) AFVoiceInfo *outputVoiceInfo;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) unsigned int audioSessionID;

+ (id)configurationWithLocale:(id)a0;
+ (id)configurationWithAudioSessionID:(unsigned int)a0;
+ (id)configurationWithOutputVoiceInfo:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocale:(id)a0 outputVoiceInfo:(id)a1 audioSessionID:(unsigned int)a2;

@end
