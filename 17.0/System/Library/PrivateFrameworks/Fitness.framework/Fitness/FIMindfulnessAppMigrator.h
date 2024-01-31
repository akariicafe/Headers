@class NSString;

@interface FIMindfulnessAppMigrator : NSObject {
    NSString *_container;
}

- (id)initWithContainer:(id)a0;
- (id)init;
- (void)_removeObjectForKey:(id)a0;
- (void)migrateIfNeeded;
- (void)_synchronize;
- (void).cxx_destruct;
- (long long)_integerForKey:(id)a0 exists:(BOOL *)a1;
- (void)_setInteger:(long long)a0 key:(id)a1;

@end
