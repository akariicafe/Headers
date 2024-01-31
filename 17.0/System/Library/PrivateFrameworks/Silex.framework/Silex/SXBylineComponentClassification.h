@interface SXBylineComponentClassification : SXDefaultTextComponentClassification

+ (id)accessibilityContextualLabel;
+ (id)roleString;
+ (int)role;
+ (id)typeString;

- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)textRules;

@end
