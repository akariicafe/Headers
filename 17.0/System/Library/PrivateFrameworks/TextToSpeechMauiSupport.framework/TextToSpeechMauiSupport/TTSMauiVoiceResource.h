@class NSString, TTSRuleset, NSData;

@interface TTSMauiVoiceResource : NSObject

@property (nonatomic) struct _VE_HSAFE { void *pHandleData; unsigned int u32Check; } voiceResourceHandle;
@property (retain, nonatomic) TTSRuleset *ruleSet;
@property (retain, nonatomic) NSString *resourceName;
@property (retain, nonatomic) NSString *resourceString;
@property (retain, nonatomic) NSData *resourceData;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
