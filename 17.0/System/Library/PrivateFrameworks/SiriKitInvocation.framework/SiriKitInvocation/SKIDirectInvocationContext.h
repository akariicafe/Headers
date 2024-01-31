@class NSString;

@interface SKIDirectInvocationContext : NSObject

@property (nonatomic, getter=isVoiceTriggerEnabled) BOOL voiceTriggerEnabled;
@property (nonatomic, getter=isTextToSpeechEnabled) BOOL textToSpeechEnabled;
@property (nonatomic, getter=isEyesFree) BOOL eyesFree;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;
@property (copy, nonatomic) NSString *responseMode;

+ (id)contextForAnnounceNotifications;
+ (id)contextForCarPlayDirectAction;

- (id)init;
- (void).cxx_destruct;

@end
