@class NSSet, NSString, AFVoiceInfo;

@interface AssistantVoiceViewModel : NSObject

@property (nonatomic) BOOL spinningOnLanguage;
@property (copy, nonatomic) NSSet *languageOptions;
@property (copy, nonatomic) NSString *selectedLanguage;
@property (copy, nonatomic) NSString *languageGroupFooterText;
@property (copy, nonatomic) NSString *voiceVariationToSpin;
@property (copy, nonatomic) NSString *voiceVariationToCheckMark;
@property (nonatomic) BOOL shouldShowVoiceVariationGroup;
@property (copy, nonatomic) NSString *voiceVariationGroupFooterText;
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;

- (void).cxx_destruct;

@end
