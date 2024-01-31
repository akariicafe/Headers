@class NSNumber;

@interface SASStartAsrOnServerRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSNumber *runCamFtm;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
