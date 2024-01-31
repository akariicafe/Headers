@interface AssistantUtilities : NSObject

+ (id)numberFormatter;
+ (BOOL)deviceIsiPod;
+ (BOOL)deviceIsiPhone;
+ (BOOL)assistantEnabled;
+ (BOOL)isVoiceTriggerEnabled;
+ (id)assistantLanguage;
+ (BOOL)deviceIsClass:(struct __CFString { } *)a0;
+ (BOOL)deviceIsVision;
+ (void)disableVoiceTrigger;
+ (void)disableVoiceTriggerAndSiriEnrollmentForCurrentLanguage;
+ (void)enableVoiceTrigger;
+ (BOOL)isHardwareButtonTrigger;
+ (BOOL)needsTrainingData:(BOOL)a0;
+ (BOOL)shouldShowCompactVoiceTriggerSpecifier;

@end
