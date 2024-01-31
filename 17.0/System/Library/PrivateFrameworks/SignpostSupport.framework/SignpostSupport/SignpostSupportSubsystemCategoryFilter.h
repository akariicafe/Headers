@class NSPredicate, NSMutableDictionary;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) NSMutableDictionary *subsystemsDict;
@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotSubsystem;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (void)addEntry:(id)a0;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (void)addFilter:(id)a0;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addSubsystem:(id)a0 category:(id)a1;
- (void)_fixupToSupportFramerateCalculation;
- (id)_initWithEntries:(id)a0;
- (id)_predicateEquivalentWithIsSimplified:(BOOL)a0;
- (id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)a0;
- (id)liveStreamingPredicate;
- (BOOL)matchesSubsystem:(id)a0 category:(id)a1;

@end
