@class NSData, NSString, NSArray;

@interface SASStartSpeechDictation : SASStartSpeech

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (nonatomic) BOOL autoPunctuation;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSString *fieldId;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *keyboardReturnKey;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) BOOL saveRequestAudio;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) BOOL speakerIndependentRecognition;

+ (id)startSpeechDictation;
+ (id)startSpeechDictationWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
