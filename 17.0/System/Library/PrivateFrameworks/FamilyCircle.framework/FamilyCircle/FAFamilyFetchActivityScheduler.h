@interface FAFamilyFetchActivityScheduler : NSObject {
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityProvider;
    void /* unknown type, empty encoding */ familyCircleFetchBlock;
    void /* unknown type, empty encoding */ cacheLoadBlock;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyCircleFetchBlock:(id /* block */)a0 cacheLoadBlock:(id /* block */)a1;
- (void)reschedule;

@end
