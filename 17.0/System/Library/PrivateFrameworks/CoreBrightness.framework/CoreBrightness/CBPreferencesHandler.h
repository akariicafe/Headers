@interface CBPreferencesHandler : NSObject

+ (void)consistencyCheckForUser:(id)a0;
+ (id)copyNestedPreferenceForKey1:(id)a0 key2:(id)a1;
+ (id)copyNestedPreferenceForKey1:(id)a0 key2:(id)a1 key3:(id)a2;
+ (struct __CFDictionary { } *)copyPreferenceDictionaryForUser:(id)a0;
+ (id)copyPreferenceForAllUsersForKey:(id)a0;
+ (id)copyPreferenceForAllUsersMultiple:(id)a0;
+ (id)copyPreferenceForUser:(id)a0 forKey:(id)a1;
+ (BOOL)migrateNestedPreferenceForAllUsersWithKey1:(id)a0 key2:(id)a1 toKey:(id)a2;
+ (BOOL)storeNestedPreferenceForAllUsersWithKey1:(id)a0 key2:(id)a1 key3:(id)a2 andValue:(id)a3;
+ (BOOL)storePreferenceForAllUsersForKey:(id)a0 andValue:(id)a1;
+ (BOOL)storePreferenceForAllUsersMultiple:(id)a0;
+ (BOOL)storePreferenceForUser:(id)a0 withKey:(id)a1 andValue:(id)a2;

@end
