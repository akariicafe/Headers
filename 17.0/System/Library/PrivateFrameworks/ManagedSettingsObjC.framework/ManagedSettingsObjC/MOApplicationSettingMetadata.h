@class MOApplication;

@interface MOApplicationSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) MOApplication *defaultValue;

- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultApplication:(id)a0 combineOperator:(long long)a1 isPublic:(BOOL)a2;

@end
