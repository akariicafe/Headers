@class NSString;

@interface DKComponentPredicate : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL exactMatch;

+ (id)componentPredicateMatchingComponentIdentity:(id)a0;
+ (id)componentPredicateWithDomain:(id)a0 exactMatch:(BOOL)a1;
+ (id)componentPredicateWithType:(id)a0 identifier:(id)a1;

- (unsigned long long)hash;
- (id)initWithType:(id)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(id)a0 exactMatch:(BOOL)a1;
- (BOOL)isEqualToComponentPredicate:(id)a0;
- (BOOL)matchesComponentIdentity:(id)a0;

@end
