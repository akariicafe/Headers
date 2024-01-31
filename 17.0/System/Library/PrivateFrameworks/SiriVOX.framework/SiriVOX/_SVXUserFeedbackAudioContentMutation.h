@class NSString, NSURL, SVXUserFeedbackAudioContent;

@interface _SVXUserFeedbackAudioContentMutation : NSObject <SVXUserFeedbackAudioContentMutating> {
    SVXUserFeedbackAudioContent *_baseModel;
    NSURL *_itemURL;
    unsigned long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasItemURL : 1; unsigned char hasNumberOfLoops : 1; unsigned char hasFadeInDuration : 1; unsigned char hasFadeOutDuration : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setItemURL:(id)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)generate;
- (void).cxx_destruct;
- (void)setFadeInDuration:(double)a0;
- (void)setNumberOfLoops:(unsigned long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
