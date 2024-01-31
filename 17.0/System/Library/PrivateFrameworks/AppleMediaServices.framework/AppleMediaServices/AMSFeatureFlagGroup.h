@class NSString, NSMutableArray, NSArray;

@interface AMSFeatureFlagGroup : NSObject

@property (retain, nonatomic) NSMutableArray *mutableFlags;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *flags;

+ (BOOL)disableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)allFlagGroups;
+ (BOOL)setFlagGroupWithName:(id)a0 enabled:(BOOL)a1 error:(id *)a2;
+ (id)fetchFlagGroupWithName:(id)a0;
+ (id)flagGroupWithName:(id)a0 includingHidden:(BOOL)a1;
+ (void)resetAllFlagGroups;
+ (BOOL)enableFlagGroupWithName:(id)a0 error:(id *)a1;
+ (id)_normalizedFlagGroupsFromFlagGroups:(id)a0;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1;
+ (id)allFlagGroupsIncludingHidden:(BOOL)a0 searchDirectory:(id)a1;
+ (id)groupsFromDomainData:(id)a0 domain:(id)a1 mutableFeatures:(id)a2 profileFeatures:(id)a3 includesHidden:(BOOL)a4;

- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)a0;
- (id)_developmentFlags;
- (void)appendFlag:(id)a0;
- (void)reset;
- (BOOL)isGroupTypeEnabled:(long long)a0;
- (id)_groupKeyForDevelopmentPhase:(long long)a0;
- (void)setGroupType:(long long)a0 enabled:(BOOL)a1;
- (id)initWithName:(id)a0;
- (id)developmentFlags;
- (void)activateITFEs;
- (id)_testableFlags;
- (id)flagsForType:(long long)a0;
- (id)testableFlags;
- (id)activateFlagsIfNeededForType:(long long)a0;
- (id)_completedFlags;
- (void).cxx_destruct;
- (void)setFlagsForDevelopmentPhase:(long long)a0 enabled:(BOOL)a1;
- (id)flagsForDevelopmentPhase:(long long)a0;
- (id)completedFlags;
- (id)initWithName:(id)a0 domain:(id)a1;
- (id)allITFEs;
- (id)fetchAllGroupKeys;
- (id)_groupKeyForType:(long long)a0;
- (BOOL)isDevelopmentPhaseEnabled:(long long)a0;

@end
