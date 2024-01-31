@interface DESServiceAccess : NSObject

+ (BOOL)hasToolEntitlement:(id)a0;
+ (BOOL)hasMLRCtlEntitlement:(id)a0;
+ (BOOL)hasOnDemandLaunchEntitlement:(id)a0;
+ (BOOL)hasRecordAccessToBundleId:(id)a0 connection:(id)a1 error:(id *)a2;

@end
