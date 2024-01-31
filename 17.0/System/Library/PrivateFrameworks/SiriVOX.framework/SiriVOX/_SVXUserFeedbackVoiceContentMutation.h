@class NSString, SVXUserFeedbackVoiceContent;

@interface _SVXUserFeedbackVoiceContentMutation : NSObject <SVXUserFeedbackVoiceContentMutating> {
    SVXUserFeedbackVoiceContent *_baseModel;
    NSString *_text;
    BOOL _isPhonetic;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasText : 1; unsigned char hasIsPhonetic : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)generate;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setIsPhonetic:(BOOL)a0;

@end
