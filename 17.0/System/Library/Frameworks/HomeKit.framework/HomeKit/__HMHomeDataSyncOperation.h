@class NSString, HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation <HMFLogging>

@property (readonly, weak) HMHomeManager *manager;
@property (getter=isRefresh) BOOL refresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
