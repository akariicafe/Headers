@class HKSynchronousObserverSet, NSString, HDProfile, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, _HDPeriodicCountryMonitorNanoSyncManagerProviding, HKRegulatoryDomainProvider;

@interface HDPeriodicCountryMonitor : NSObject <HDDiagnosticObject, HDNanoSyncManagerObserver> {
    HDProfile *_profile;
    id<_HDPeriodicCountryMonitorNanoSyncManagerProviding> _nanoSyncManager;
    id /* block */ _countryCodeProvider;
    HKSynchronousObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    BOOL _lock_shouldBypassNextBuildVersionLimit;
    id<HKRegulatoryDomainProvider> _countryCodeManager;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (readonly, copy, nonatomic) NSDate *lastCheckAttemptDate;
@property (readonly, copy, nonatomic) NSString *lastFetchAttemptBuild;
@property (readonly, copy, nonatomic) NSDate *lastFetchAttemptDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enqueueMaintenanceFetch;
- (void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)a0;
- (void)registerObserver:(id)a0;
- (id)diagnosticDescription;
- (void)_recordSuccessfulFetchForCurrentPairedBuilds;
- (void)unregisterObserver:(id)a0;
- (id)initWithProfile:(id)a0 nanoSyncManager:(id)a1 countryCodeProvider:(id /* block */)a2 userDefaults:(id)a3;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 nanoSyncManager:(id)a1;
- (void)nanoSyncManager:(id)a0 pairedDevicesChanged:(id)a1;

@end
