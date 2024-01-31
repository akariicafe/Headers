@class HMFScheduler, NSString;
@protocol HMDAssistantSettingsConnectionDataSource;

@interface HMDAssistantSettingsConnection : HMFObject <HMFLogging, HMDAssistantSettingsConnectionDataSource>

@property (readonly) HMFScheduler *scheduler;
@property (weak) id<HMDAssistantSettingsConnectionDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithScheduler:(id)a0;
- (void).cxx_destruct;
- (id)connectionForEndpointUUID:(id)a0;
- (id)deleteSiriHistoryOperationWithConnection:(id)a0;
- (void)deleteSiriHistoryWithEndpointUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
