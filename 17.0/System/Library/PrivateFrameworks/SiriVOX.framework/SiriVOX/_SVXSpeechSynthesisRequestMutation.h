@class NSString, NSDictionary, SVXSpeechSynthesisAudio, SVXSpeechSynthesisRequest;

@interface _SVXSpeechSynthesisRequestMutation : NSObject <SVXSpeechSynthesisRequestMutating> {
    SVXSpeechSynthesisRequest *_baseModel;
    long long _priority;
    unsigned long long _options;
    NSString *_speakableText;
    NSDictionary *_speakableContext;
    NSString *_localizationKey;
    SVXSpeechSynthesisAudio *_presynthesizedAudio;
    NSString *_streamID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPriority : 1; unsigned char hasOptions : 1; unsigned char hasSpeakableText : 1; unsigned char hasSpeakableContext : 1; unsigned char hasLocalizationKey : 1; unsigned char hasPresynthesizedAudio : 1; unsigned char hasStreamID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setOptions:(unsigned long long)a0;
- (void)setLocalizationKey:(id)a0;
- (id)generate;
- (void)setPriority:(long long)a0;
- (void).cxx_destruct;
- (void)setSpeakableText:(id)a0;
- (void)setStreamID:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setPresynthesizedAudio:(id)a0;
- (void)setSpeakableContext:(id)a0;

@end
