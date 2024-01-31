@class NSString;

@interface _NSPredicateRule : NSPredicateRule {
    NSString *_fact;
    double _grade;
    BOOL _asserting;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithPredicate:(id)a0 fact:(id)a1 grade:(double)a2 asserting:(BOOL)a3;
- (void)performActionWithSystem:(id)a0;

@end
