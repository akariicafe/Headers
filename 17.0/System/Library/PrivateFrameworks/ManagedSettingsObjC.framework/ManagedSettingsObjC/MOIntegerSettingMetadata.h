@class NSNumber;

@interface MOIntegerSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) long long lowerBound;
@property (readonly, nonatomic) long long upperBound;
@property (readonly, nonatomic) NSNumber *defaultValue;

- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;
- (long long)_combine:(long long)a0 with:(long long)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultInt:(long long)a0 combineOperator:(long long)a1 lowerBound:(long long)a2 upperBound:(long long)a3 isPublic:(BOOL)a4;

@end
