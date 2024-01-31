@class NSString;

@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand

@property (copy, nonatomic) NSString *response;

+ (id)answerRerouteSuggestionWithDictionary:(id)a0 context:(id)a1;
+ (id)answerRerouteSuggestion;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
