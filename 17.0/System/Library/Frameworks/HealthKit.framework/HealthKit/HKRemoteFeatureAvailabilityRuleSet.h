@class NSSet, NSMutableDictionary;

@interface HKRemoteFeatureAvailabilityRuleSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *conditions;
@property (retain, nonatomic) NSSet *supportedConditions;

- (void)_parseRulesFromRawValue:(id)a0 dataSource:(id)a1;
- (id)initWithRawValue:(id)a0 dataSource:(id)a1 supportedConditions:(id)a2;
- (void).cxx_destruct;
- (id)evaluateAll;

@end
