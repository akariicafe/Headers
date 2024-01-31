@interface TPSSecureArchivingUtilities : NSObject

+ (id)syncQueue;
+ (void)archivedDataWithRootObject:(id)a0 forKey:(id)a1;
+ (id)unarchivedObjectOfClass:(Class)a0 forKey:(id)a1 userDefaults:(id)a2;
+ (id)unarchivedObjectOfClasses:(id)a0 forKey:(id)a1 userDefaults:(id)a2;
+ (id)unarchivedObjectOfClass:(Class)a0 forKey:(id)a1;
+ (id)unarchivedObjectOfClasses:(id)a0 forKey:(id)a1;
+ (void)archivedDataWithRootObject:(id)a0 forKey:(id)a1 userDefaults:(id)a2;

@end
