@interface APUICardRequestSatisfactionCriteria : NSObject

+ (id)compactSatisfactionCriteria;
+ (id)customIntentSatisfactionCriteria;
+ (id)generalSatisfactionCriteria;

- (BOOL)canSatisfyCardRequest:(id)a0;
- (unsigned long long)servicePriorityForRequest:(id)a0;

@end
