@class NSString, SASSpeechRecognized, AFSpeechInfo;

@interface _AFSpeechInfoMutation : NSObject <AFSpeechInfoMutating> {
    AFSpeechInfo *_base;
    SASSpeechRecognized *_speechRecognizedCommand;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSpeechRecognizedCommand : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getSpeechRecognizedCommand;
- (void)setSpeechRecognizedCommand:(id)a0;

@end
