@class NSString, NSMutableSet;
@protocol CalPreferencesStore;

@interface CalPreferences : NSObject {
    id<CalPreferencesStore> _store;
    NSString *_domain;
    BOOL _readOnly;
    NSMutableSet *_registeredNotificationsToReflect;
}

+ (id)log;

- (void)_preferenceChangedExternally:(id)a0;
- (id)initWithDomain:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setIntegerPreference:(id)a0 value:(long long)a1 notificationName:(id)a2;
- (void)_preferenceChangedInternally:(id)a0;
- (void)_synchronizePreferences;
- (id)initWithDomain:(id)a0 readOnly:(BOOL)a1;
- (void)removePreference:(id)a0 notificationName:(id)a1;
- (id)initWithDomain:(id)a0 store:(id)a1 readOnly:(BOOL)a2;
- (id)getValueForPreference:(id)a0 expectedClass:(Class)a1;
- (id)initWithDomain:(id)a0 store:(id)a1;
- (void)registerReflectionForPreferenceWithNotificationName:(id)a0;
- (void)setBooleanPreference:(id)a0 value:(BOOL)a1 notificationName:(id)a2;
- (void).cxx_destruct;
- (BOOL)getBooleanPreference:(id)a0 defaultValue:(BOOL)a1;
- (void)setValueForPreference:(id)a0 value:(id)a1 notificationName:(id)a2;
- (long long)getIntegerPreference:(id)a0 defaultValue:(long long)a1;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)a0;

@end
