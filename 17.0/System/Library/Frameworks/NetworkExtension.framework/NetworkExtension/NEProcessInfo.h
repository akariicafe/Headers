@interface NEProcessInfo : NSObject

+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:(id)a0 uid:(unsigned int)a1;
+ (id)copyUUIDsForExecutable:(id)a0;
+ (id)copyDNSUUIDs;
+ (BOOL)is64bitCapable;
+ (void)clearUUIDCache;

- (id)init;

@end
