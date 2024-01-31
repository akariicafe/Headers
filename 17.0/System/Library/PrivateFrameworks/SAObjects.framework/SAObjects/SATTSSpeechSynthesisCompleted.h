@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand

@property (nonatomic) long long totalPacketNumber;

+ (id)speechSynthesisCompleted;
+ (id)speechSynthesisCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
