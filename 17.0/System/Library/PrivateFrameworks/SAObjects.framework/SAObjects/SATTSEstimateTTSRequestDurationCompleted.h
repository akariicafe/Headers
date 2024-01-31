@class NSArray;

@interface SATTSEstimateTTSRequestDurationCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *durations;

+ (id)estimateTTSRequestDurationCompleted;
+ (id)estimateTTSRequestDurationCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
