@class NSDictionary, MOUserSafetyScanningPolicy;

@interface MOUserSafetyScanningPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long interventionCombineOperator;
@property (readonly, nonatomic) NSDictionary *rankedInterventionTypes;
@property (readonly, nonatomic) unsigned long long maximumApplicationCount;
@property (readonly, nonatomic) MOUserSafetyScanningPolicy *defaultValue;

- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (void).cxx_destruct;
- (id)persistableValueFromValue:(id)a0;
- (id)_combine:(id)a0 with:(id)a1;
- (id)_combineInterventionType:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultPolicy:(id)a0 interventionCombineOperator:(long long)a1 rankedInterventionTypes:(id)a2 maximumApplicationCount:(unsigned long long)a3 isPublic:(BOOL)a4;

@end
