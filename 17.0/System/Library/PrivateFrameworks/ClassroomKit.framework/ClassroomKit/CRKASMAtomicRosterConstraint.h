@class NSUUID;

@interface CRKASMAtomicRosterConstraint : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id /* block */ rosterEvaluator;

+ (id)constraintWithRosterEvaluator:(id /* block */)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 rosterEvaluator:(id /* block */)a1;
- (BOOL)isFulfilledByRoster:(id)a0;

@end
