@class NSMutableSet, NSMutableDictionary;

@interface AXBaseSettings : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _domainNamesToSynchronizeLock;
}

@property (retain, nonatomic) NSMutableSet *registeredPreferenceKeys;
@property (retain, nonatomic) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;

- (double)doubleValueForPreferenceKey:(id)a0 defaultValue:(double)a1;
- (id)valueForPreferenceKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_synchronizeIfNecessaryForPreferenceKey:(id)a0 domainName:(id)a1;
- (id)notificationNameForPreferenceKey:(id)a0;
- (void)unregisterUpdateBlockForRetrieveSelector:(SEL)a0 withListenerID:(id)a1;
- (id)allDomainNamesForPreferenceKey:(id)a0;
- (id)_userDefaultsStoreForDomainName:(id)a0;
- (id)domainNameForPreferenceKey:(id)a0;
- (void)_registerForNotification:(id)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)willPerformUpdateBlocksForPreferenceKey:(id)a0;
- (id)objectValueForPreferenceKey:(id)a0 ofClass:(Class)a1 defaultValue:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)postNotificationForPreferenceKey:(id)a0;
- (void)clearExistingValueForPreferenceWithSelector:(SEL)a0;
- (void)willPostNotificationForPreferenceKey:(id)a0 value:(id)a1;
- (BOOL)hasExistingValueForPreferenceWithSelector:(SEL)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)_handlePreferenceChangedWithNotificationName:(id)a0;
- (BOOL)boolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (long long)integerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)_switchFromRootUserIfNecessary:(id /* block */)a0;

@end
