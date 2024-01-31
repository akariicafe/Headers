@class SVXUserFeedbackAudioContent, NSString, SVXUserFeedback, SVXUserFeedbackVoiceContent;

@interface _SVXUserFeedbackMutation : NSObject <SVXUserFeedbackMutating> {
    SVXUserFeedback *_baseModel;
    NSString *_identifier;
    long long _contentType;
    SVXUserFeedbackAudioContent *_audioContent;
    SVXUserFeedbackVoiceContent *_voiceContent;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasContentType : 1; unsigned char hasAudioContent : 1; unsigned char hasVoiceContent : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentType:(long long)a0;
- (id)init;
- (void)setIdentifier:(id)a0;
- (id)generate;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setAudioContent:(id)a0;
- (void)setVoiceContent:(id)a0;

@end
