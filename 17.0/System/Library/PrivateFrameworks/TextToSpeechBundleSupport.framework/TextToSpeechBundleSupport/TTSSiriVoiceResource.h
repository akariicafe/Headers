@class NSString, TTSRuleset, NSData;

@interface TTSSiriVoiceResource : NSObject

@property (nonatomic) struct shared_ptr<SiriTTS::VoiceResource> { struct VoiceResource *__ptr_; struct __shared_weak_count *__cntrl_; } siriVoiceResource;
@property (retain, nonatomic) TTSRuleset *ruleSet;
@property (retain, nonatomic) NSString *resourceName;
@property (retain, nonatomic) NSString *resourceString;
@property (retain, nonatomic) NSData *resourceData;
@property (nonatomic) unsigned long long type;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
