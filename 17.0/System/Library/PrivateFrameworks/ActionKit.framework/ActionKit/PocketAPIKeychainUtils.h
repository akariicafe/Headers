@interface PocketAPIKeychainUtils : NSObject

+ (BOOL)deleteItemForUsername:(id)a0 andServiceName:(id)a1 error:(id *)a2;
+ (id)getPasswordForUsername:(id)a0 andServiceName:(id)a1 error:(id *)a2;
+ (BOOL)storeUsername:(id)a0 andPassword:(id)a1 forServiceName:(id)a2 updateExisting:(BOOL)a3 error:(id *)a4;

@end
