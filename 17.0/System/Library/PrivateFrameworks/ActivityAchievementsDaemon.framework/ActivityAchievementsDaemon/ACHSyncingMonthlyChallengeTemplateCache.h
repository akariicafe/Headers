@class NSCalendar, HKHealthStore, HKKeyValueDomain, HDProfile, HDKeyValueDomain, HDDatabaseTransactionContext;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKKeyValueDomain *kvDomain;
@property (copy, nonatomic) NSCalendar *gregorianCalendar;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (id)_daemon_allCachedTemplatesWithError:(id *)a0;
- (id)initWithProfile:(id)a0;
- (BOOL)_store_cacheTemplate:(id)a0 error:(id *)a1;
- (id)_daemon_templateForDateComponents:(id)a0 error:(id *)a1;
- (id)initWithHealthStore:(id)a0;
- (BOOL)cacheTemplate:(id)a0 error:(id *)a1;
- (id)allCachedTemplatesWithError:(id *)a0;
- (BOOL)_daemon_cacheTemplate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_store_templateForDateComponents:(id)a0 error:(id *)a1;
- (id)templateForDateComponents:(id)a0 error:(id *)a1;
- (id)_store_allCachedTemplatesWithError:(id *)a0;

@end
