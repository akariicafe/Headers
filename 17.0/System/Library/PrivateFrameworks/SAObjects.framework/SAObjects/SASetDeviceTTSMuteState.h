@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand

@property (nonatomic) BOOL textToSpeechIsMuted;

+ (id)setDeviceTTSMuteState;
+ (id)setDeviceTTSMuteStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
