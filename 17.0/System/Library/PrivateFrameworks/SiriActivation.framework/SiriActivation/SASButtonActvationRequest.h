@interface SASButtonActvationRequest : SASActivationRequest

@property (nonatomic) long long buttonIdentifier;

- (BOOL)isButtonRequest;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isHoldToTalkSource;
- (BOOL)isTestingRequest;
- (BOOL)isVoiceRequest;

@end
