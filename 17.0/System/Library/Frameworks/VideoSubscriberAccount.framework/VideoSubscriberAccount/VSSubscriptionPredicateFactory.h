@class VSAppInstallationInfoCenter;

@interface VSSubscriptionPredicateFactory : NSObject

@property (retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter;

+ (id)_subscriptionSourceKindPredicateTemplateValues;
+ (id)_subscriptionPredicateTemplateValues;
+ (id)_subscriptionSourcePredicateTemplateValues;

- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)a0 toAttributeKeysInEntity:(id)a1;
- (id)allowedSubscriptionsPredicateForTask:(id)a0;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)_predicateTemplateForSourceIdentifier:(id)a0;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)_predicateTemplateForRequestKind:(long long)a0 fromTask:(id)a1;
- (void).cxx_destruct;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)a0 toAttributeKeysInEntity:(id)a1;
- (id)_predicateTemplateForAppPredicate:(id)a0 withTask:(id)a1;
- (id)_topLevelAccessPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)_predicateTemplateForSourceKind:(long long)a0;
- (id)subscriptionFetchPredicateForTask:(id)a0 withOptions:(id)a1;
- (id)_predicateTemplateForSourceOfTask:(id)a0;

@end
