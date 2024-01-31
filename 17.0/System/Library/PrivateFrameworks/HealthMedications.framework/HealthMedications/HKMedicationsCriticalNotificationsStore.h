@class NSUserDefaults;

@interface HKMedicationsCriticalNotificationsStore : NSObject {
    NSUserDefaults *_medicationsUserDefaults;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (long long)identifiersCount;
- (void)addMedications:(id)a0;
- (void)setMedications:(id)a0;
- (id)_getIdentifiersSetFromMedications:(id)a0;
- (id)_lock_getIdentifiersSet;
- (void)_lock_removeMedication:(id)a0;
- (void)_lock_syncUserDefaultUpdateToNanoPreferences:(id /* block */)a0;
- (void)_lock_writeToUserDefaultsWithNewIdentifier:(id)a0;
- (BOOL)containsAtLeastOneOfIdentifiers:(id)a0;
- (BOOL)containsAtLeastOneOfMedications:(id)a0;
- (void)removeMedication:(id)a0;

@end
