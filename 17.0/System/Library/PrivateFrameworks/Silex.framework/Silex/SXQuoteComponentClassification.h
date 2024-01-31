@interface SXQuoteComponentClassification : SXDefaultTextComponentClassification

+ (id)roleString;
+ (int)role;
+ (id)typeString;

- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)layoutRules;

@end
