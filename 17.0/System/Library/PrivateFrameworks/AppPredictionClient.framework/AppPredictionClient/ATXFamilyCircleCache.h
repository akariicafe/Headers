@interface ATXFamilyCircleCache : NSObject

+ (id)cachedDefaultsKey;
+ (id)lastFetchDateDefaultsKey;

- (id)_fetchFamilyCircleWithUserDefaults:(id)a0;
- (id)fetchFamilyCircle;
- (BOOL)hasiCloudFamily;
- (id)_requestUpdatedFamilyCircle;

@end
