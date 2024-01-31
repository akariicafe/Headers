@class NSString;

@interface CLFMessagesSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFMessagesSettings *sharedInstance;

@property (retain, nonatomic) NSString *communicationLimit;
@property (nonatomic) BOOL conversationDetailsEnabled;
@property (nonatomic) BOOL emojiKeyboardEnabled;
@property (retain, nonatomic) NSString *incomingCommunicationLimit;
@property (nonatomic) BOOL softwareKeyboardEnabled;
@property (nonatomic) BOOL tapToSpeakEnabled;
@property (nonatomic) BOOL videoRecordingEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
