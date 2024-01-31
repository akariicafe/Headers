@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

+ (id)publisherForGroups:(id)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)new;

- (id)reader;
- (id)init;
- (void)dealloc;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;

@end
