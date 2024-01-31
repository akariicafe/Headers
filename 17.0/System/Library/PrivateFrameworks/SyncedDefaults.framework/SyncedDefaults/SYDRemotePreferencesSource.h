@interface SYDRemotePreferencesSource : NSObject

+ (id)SYDRemotePreferencesSourceDidChangeNotification;
+ (id)SYDRemotePreferencesSourceConfigurationDidChangeNotification;
+ (id)SYDUbiquitousKeyValueStoreDidChangeExternallyNotification;
+ (void)migrateSyncedDefaultsForBundleIdentifier:(id)a0;

- (void)registerForSynchronizedDefaults;
- (void)scheduleRemoteSynchronization;
- (unsigned char)_synchronizeForced:(unsigned char)a0;
- (long long)maximumTotalDataLength;
- (long long)maximumKeyLength;
- (long long)maximumKeyCount;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3;
- (id)objectForKey:(id)a0 error:(id *)a1;
- (void)ping;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2;
- (void *)getValueForKey:(struct __CFString { } *)a0;
- (void)setDefaultsConfiguration:(id)a0;
- (long long)maximumDataLengthPerKey;
- (id)initWithApplicationID:(struct __CFString { } *)a0 shared:(BOOL)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)removeObjectForKey:(id)a0 error:(id *)a1;
- (void)unregisterForSynchronizedDefaults;
- (struct __CFDictionary { } *)copyDictionary;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4;
- (void)updateConfiguration;
- (void)synchronizationWithCompletionHandler:(id /* block */)a0;
- (unsigned char)hasExternalChanges;
- (id)copyExternalChangesWithChangeCount:(long long *)a0;
- (void)discardExternalChangesForChangeCount:(long long)a0;
- (id)dictionaryRepresentationWithError:(id *)a0;
- (void)setValue:(void *)a0 forKey:(struct __CFString { } *)a1;
- (void)dealloc;
- (unsigned char)synchronizeForced:(unsigned char)a0;
- (id)initWithApplicationID:(struct __CFString { } *)a0 storeID:(struct __CFString { } *)a1 shared:(BOOL)a2 additionalSource:(BOOL)a3 containerPath:(struct __CFString { } *)a4 storeType:(long long)a5;
- (unsigned char)synchronize;

@end
