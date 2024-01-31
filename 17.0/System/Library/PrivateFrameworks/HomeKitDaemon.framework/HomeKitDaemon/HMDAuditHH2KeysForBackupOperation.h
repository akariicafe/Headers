@class NSString;

@interface HMDAuditHH2KeysForBackupOperation : HMDBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)persistent;
+ (id)predicate;
+ (id)logCategory;
+ (void)recordCurrentBackupRunToUserDefault;
+ (void)resetHH2KeyBackupOperationFromUserDefault;
+ (BOOL)shouldWeScheduleHH2KeyBackupOperation;

- (id)logIdentifier;
- (BOOL)mainWithError:(id *)a0;

@end
