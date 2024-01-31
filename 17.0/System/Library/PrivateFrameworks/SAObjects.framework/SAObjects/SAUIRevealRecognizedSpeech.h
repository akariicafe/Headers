@class SASRecognition, NSString;

@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *speechRecognizedAceId;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
