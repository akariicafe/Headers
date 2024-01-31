@class NSString;

@interface HMDHomePrimaryResidentInitialReachabilityManagerDataSource : NSObject <HMDHomePrimaryResidentInitialReachabilityManagerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataValueFromNoBackupStoreWithKey:(id)a0;
- (void)persistDataValueToNoBackupStore:(id)a0 withKey:(id)a1;

@end
