@interface NSLayoutDimension : NSLayoutAnchor

- (id)plus:(double)a0;
- (BOOL)validateOtherAttribute:(long long)a0;
- (BOOL)isCompatibleWithAnchor:(id)a0;
- (id)constraintEqualToAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintEqualToAnchor:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)constraintEqualToConstant:(double)a0;
- (id)constraintGreaterThanOrEqualToAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintGreaterThanOrEqualToConstant:(double)a0;
- (id)constraintLessThanOrEqualToAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintLessThanOrEqualToAnchor:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)constraintLessThanOrEqualToConstant:(double)a0;
- (id)minusDimension:(id)a0;
- (id)anchorByAddingConstant:(double)a0;
- (id)anchorByAddingDimension:(id)a0;
- (id)anchorByMultiplyingByConstant:(double)a0;
- (id)anchorBySubtractingDimension:(id)a0;
- (id)constraintGreaterThanOrEqualToAnchor:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)plusDimension:(id)a0;
- (id)ruleEqualToConstant:(double)a0;
- (id)ruleEqualToConstant:(double)a0 priority:(float)a1 identifier:(id)a2;
- (id)ruleGreaterThanOrEqualToConstant:(double)a0;
- (id)ruleGreaterThanOrEqualToConstant:(double)a0 priority:(float)a1 identifier:(id)a2;
- (id)ruleLessThanOrEqualToConstant:(double)a0;
- (id)ruleLessThanOrEqualToConstant:(double)a0 priority:(float)a1 identifier:(id)a2;
- (id)times:(double)a0;

@end
