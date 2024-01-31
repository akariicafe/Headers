@class NSString;

@interface FFMinimumPhaseInReleaseSubscription : FFSubscription

@property (readonly, nonatomic) NSString *targetRelease;
@property (readonly, nonatomic) NSString *minimumPhase;

+ (id)decodeFromDictionary:(id)a0;
+ (id)mergeSubscriptions:(id)a0;

- (void).cxx_destruct;
- (id)encodeToDictionary;
- (id)initWithPhase:(id)a0 targetRelease:(id)a1;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inAlreadyLockedConfiguration:(id)a2;
- (BOOL)matchesFeature:(id)a0 inDomain:(id)a1 inConfiguration:(id)a2;
- (BOOL)matchesFeatureWithState:(id)a0 inConfigurationOfUnknownLockState:(id)a1;
- (id)nameOfClass;

@end
