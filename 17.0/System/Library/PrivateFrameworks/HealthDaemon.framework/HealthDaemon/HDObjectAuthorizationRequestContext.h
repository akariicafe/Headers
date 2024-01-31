@class NSArray, HKObjectAuthorizationPromptSessionMetadata;

@interface HDObjectAuthorizationRequestContext : NSObject

@property (nonatomic) BOOL persistSession;
@property (nonatomic) BOOL promptWithNoSamples;
@property (nonatomic) BOOL promptWithAllSamples;
@property (readonly, copy, nonatomic) NSArray *samples;
@property (readonly, copy, nonatomic) HKObjectAuthorizationPromptSessionMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithSamples:(id)a0 metadata:(id)a1;

@end
