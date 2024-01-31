@class NSSet, NSPredicate;

@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) WFContextualActionFilteringBehavior *matchAllFiles;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *matchingTypes;
@property (readonly, nonatomic) NSPredicate *inClientPredicate;
@property (readonly, nonatomic) NSPredicate *daemonPredicate;

+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1 daemonPredicate:(id)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMatchingTypes:(id)a0 inClientPredicate:(id)a1 daemonPredicate:(id)a2;

@end
