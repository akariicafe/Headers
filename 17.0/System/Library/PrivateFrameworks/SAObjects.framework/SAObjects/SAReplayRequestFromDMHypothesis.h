@class NSData;

@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (copy, nonatomic) NSData *dmHypothesis;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
