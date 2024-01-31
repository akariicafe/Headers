@class SASRecognition, NSNumber, NSString;

@interface SARDRunNLXRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *asrOutput;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (copy, nonatomic) NSString *userId;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
