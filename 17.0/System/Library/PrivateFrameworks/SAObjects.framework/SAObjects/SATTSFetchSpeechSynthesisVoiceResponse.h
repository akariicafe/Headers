@class NSArray;

@interface SATTSFetchSpeechSynthesisVoiceResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *voiceKeyList;

+ (id)fetchSpeechSynthesisVoiceResponse;
+ (id)fetchSpeechSynthesisVoiceResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
