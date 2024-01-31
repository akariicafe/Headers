@class HKObserverSet, NSString, HKHealthStore, NSUUID, HKTaskServerProxyProvider;
@protocol HKKeyValueDomainObserver;

@interface HKKeyValueDomain : NSObject <_HKXPCExportable> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKKeyValueDomainObserver> *_observers;
}

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *domainName;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)emergencyDefaultsDomainWithHealthStore:(id)a0;
+ (id)healthAppDefaultsDomainWithHealthStore:(id)a0;
+ (id)healthArticlesDefaultsDomainWithHealthStore:(id)a0;
+ (id)heartRhythmDefaultsDomainWithHealthStore:(id)a0;
+ (id)safetyDefaultsDomainWithHealthStore:(id)a0;
+ (id)safetyDefaultsLocalDomainWithHealthStore:(id)a0;

- (id)exportedInterface;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (id)remoteInterface;
- (void)setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (void)connectionInvalidated;
- (void)stringForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (void)removeValuesForKeys:(id)a0 completion:(id /* block */)a1;
- (id)_dataFromPropertyListValue:(id)a0 error:(id *)a1;
- (void)_handleAutomaticProxyReconnection;
- (void)_observeKeyValueDomainChanges:(BOOL)a0 completion:(id /* block */)a1;
- (id)_propertyListValueFromData:(id)a0 error:(id *)a1;
- (void)_registerFirstObserverWithCompletion:(id /* block */)a0;
- (void)_startObservation:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_synchronouslyRegisterToObserveKeyValueDomainChanges:(id *)a0;
- (void)_unregisterLastObserver;
- (void)allValuesWithCompletion:(id /* block */)a0;
- (id)allValuesWithError:(id *)a0;
- (void)clientRemote_didUpdate;
- (void)dataForKey:(id)a0 completion:(id /* block */)a1;
- (void)dateForKey:(id)a0 completion:(id /* block */)a1;
- (id)dateForKey:(id)a0 error:(id *)a1;
- (id)hkhr_electrocardiogramRecordingFirstOnboardingCompletedDateWithError:(id *)a0;
- (id)initWithCategory:(long long)a0 domainName:(id)a1 healthStore:(id)a2;
- (void)numberForKey:(id)a0 completion:(id /* block */)a1;
- (id)numberForKey:(id)a0 error:(id *)a1;
- (void)propertyListValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)propertyListValueForKey:(id)a0 error:(id *)a1;
- (void)setData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setDate:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setNumber:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setPropertyListValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)setPropertyListValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setValueForAllKeys:(id)a0 completion:(id /* block */)a1;
- (void)setValuesWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)startObservation:(id)a0;
- (void)stopObservation:(id)a0;
- (void)unitTest_startObservation:(id)a0 withCompletion:(id /* block */)a1;

@end
