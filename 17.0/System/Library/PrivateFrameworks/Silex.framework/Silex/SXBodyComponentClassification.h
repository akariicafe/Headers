@interface SXBodyComponentClassification : SXDefaultTextComponentClassification

+ (id)roleString;
+ (int)role;
+ (id)typeString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)layoutRules;
- (id)textRules;
- (BOOL)accessibilitySkippedDuringReadAll;

@end
