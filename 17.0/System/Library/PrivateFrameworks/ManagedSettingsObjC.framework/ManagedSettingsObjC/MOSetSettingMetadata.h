@class NSSet;

@interface MOSetSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) unsigned long long maximumCount;
@property (readonly, nonatomic) NSSet *defaultValue;

- (id)sanitizePersistableValue:(id)a0;
- (id)valueFromPersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultSet:(id)a0 combineOperator:(long long)a1 maximumCount:(unsigned long long)a2 isPublic:(BOOL)a3;

@end
