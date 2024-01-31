@class CNUIIDSContactPropertyResolver, CNContactStore, NSString;
@protocol CNTUCallProviderManager, CNUIUserActionTargetDiscovering, CNUIDefaultUserActionFetcher, CNSchedulerProvider, CNCapabilities, CNLSApplicationWorkspace, CNUIRTTUtilities, CNMCProfileConnection;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment> {
    CNContactStore *_contactStore;
}

@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNTUCallProviderManager> callProviderManager;
@property (readonly, nonatomic) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property (readonly, nonatomic) id<CNMCProfileConnection> profileConnection;
@property (readonly, nonatomic) id<CNCapabilities> capabilities;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNSchedulerProvider> highLatencySchedulerProvider;
@property (readonly, nonatomic) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property (readonly, nonatomic) id<CNUIRTTUtilities> ttyUtilities;
@property (readonly, nonatomic) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)nts_lazyContactStore;
- (void).cxx_destruct;
- (id)initWithIDSAvailabilityProvider:(id)a0 schedulerProvider:(id)a1 capabilities:(id)a2 defaultUserActionFetcher:(id)a3;
- (id)copyWithContactStore:(id)a0;
- (id)initWithApplicationWorkspace:(id)a0 callProviderManager:(id)a1 idsContactPropertyResolver:(id)a2 profileConnection:(id)a3 contactStore:(id)a4 schedulerProvider:(id)a5 highLatencySchedulerProvider:(id)a6 capabilities:(id)a7 defaultUserActionFetcher:(id)a8 ttyUtilities:(id)a9;
- (id)initWithIDSAvailablilityProvider:(id)a0 schedulerProvider:(id)a1 capabilities:(id)a2 defaultUserActionFetcher:(id)a3;

@end
