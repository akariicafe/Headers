@class NSSet, NSPredicate;

@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer>

@property (readonly, nonatomic) unsigned long long _compoundPredicateType;
@property (readonly, nonatomic) BOOL _wantsNotEqual;
@property (readonly, nonatomic) NSSet *uniquePidSet;
@property (readonly, nonatomic) NSPredicate *predicateEquivalent;

- (id)init;
- (void).cxx_destruct;
- (void)addUniquePIDNumber:(id)a0;
- (void)addUniquePIDNumberSet:(id)a0;
- (BOOL)passesUniquePIDNumber:(id)a0;

@end
