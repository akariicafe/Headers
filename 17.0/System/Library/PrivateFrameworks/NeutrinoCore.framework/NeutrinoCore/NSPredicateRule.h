@class NSPredicate;

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

+ (BOOL)supportsSecureCoding;

- (id)initWithPredicate:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
