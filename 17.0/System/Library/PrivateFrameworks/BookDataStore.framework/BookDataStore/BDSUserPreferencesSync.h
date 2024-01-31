@class NSArray;

@interface BDSUserPreferencesSync : NSObject

@property (class, readonly, nonatomic) NSArray *syncedPreferenceKeys;

+ (void)copyChangedGroupPreferencesToLocalContainer;
+ (void)copyChangedLocalPreferencesToGroupContainer;
+ (void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)a0 container:(id)a1 groupName:(id)a2 groupContainer:(id)a3;
+ (id)objectFromGroupPreferencesForKey:(id)a0;

@end
