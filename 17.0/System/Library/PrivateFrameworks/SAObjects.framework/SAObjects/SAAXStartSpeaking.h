@interface SAAXStartSpeaking : SADomainCommand

+ (id)startSpeaking;
+ (id)startSpeakingWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
