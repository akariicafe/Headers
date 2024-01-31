@class NSString, AFSetAudioSessionActiveContext, AFSpeechRequestOptions;

@interface _AFSetAudioSessionActiveContextMutation : NSObject <AFSetAudioSessionActiveContextMutating> {
    AFSetAudioSessionActiveContext *_base;
    unsigned long long _options;
    long long _reason;
    AFSpeechRequestOptions *_speechRequestOptions;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOptions : 1; unsigned char hasReason : 1; unsigned char hasSpeechRequestOptions : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (BOOL)isDirty;
- (void)setReason:(long long)a0;
- (void).cxx_destruct;
- (void)setSpeechRequestOptions:(id)a0;
- (unsigned long long)getOptions;
- (long long)getReason;
- (id)getSpeechRequestOptions;

@end
