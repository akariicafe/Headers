@class NSArray, HKHealthStore, NSString, SOSLegacyContactsManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface SOSContactsManager : NSObject {
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSArray *medicalIDEmergencyContacts;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } medicalIDEmergencyContactsMutex;
@property (retain, nonatomic) NSString *activeSafetyMonitorSessionPrimaryHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *safetyMonitorSessionInitialStateSemaphore;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } safetyMonitorSessionHandleMutex;
@property (readonly, nonatomic) BOOL SOSContactsExist;
@property (readonly, nonatomic) SOSLegacyContactsManager *legacyContactsManager;

+ (void)preloadContactStoreIfNecessary;
+ (BOOL)authorizedToUseContactStore;
+ (id)contactStore;

- (id)sosDestinationsContainsPhoneNumber:(id)a0 sosRecipients:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_fetchMedicalIDEmergencyContacts;
- (id)initWithHealthStore:(id)a0;
- (void)_medicalContactsDidChange;
- (void)SOSContactsWithTimeout:(double)a0 andCompletion:(id /* block */)a1;
- (id)SOSContactDestinations;
- (BOOL)_isEmergencyNumber:(id)a0;
- (void)_fetchSafetyMonitorSessionHandle;
- (id)_userDefaults;
- (id)phoneNumbersToMessage;
- (void)_medicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (void)refreshCurrentEmergencyContacts;
- (BOOL)isPhoneNumberEqual:(id)a0 toNumber:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasValidContactsToMessage;
- (void)_waitForMedicalIDInitialState;
- (void)_waitForSafetyMonitorInitialState;
- (void)_updateWithSafetyMonitorSessionState:(id)a0 isActiveDevice:(BOOL)a1 error:(id)a2;
- (id)SOSContactRecipients;

@end
