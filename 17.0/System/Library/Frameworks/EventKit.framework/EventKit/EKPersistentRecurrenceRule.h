@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;

- (void)setCount:(unsigned long long)a0;
- (id)owner;
- (long long)interval;
- (void)setOwner:(id)a0;
- (id)endDate;
- (void)setInterval:(long long)a0;
- (unsigned long long)count;
- (id)specifier;
- (int)entityType;
- (void)setUUID:(id)a0;
- (id)description;
- (void)setSpecifier:(id)a0;
- (void)setEndDate:(id)a0;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (void)setCachedEndDate:(id)a0;
- (void)setCachedEndDateTimeZone:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setFrequencyRaw:(int)a0;

@end
