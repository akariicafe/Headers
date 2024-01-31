@class NSSet, NSPredicate;

@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSSet *processNameSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (id)init;
- (void).cxx_destruct;
- (void)addProcessName:(id)a0;
- (void)addProcessNameSet:(id)a0;
- (BOOL)passesProcessName:(id)a0;

@end
