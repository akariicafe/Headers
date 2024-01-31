@class HMDAppleMediaAccessoriesStateManagerMetricsDispatcher, NSString, NSUUID, HMDAppleMediaAccessoriesStateMessenger;
@protocol HMDAppleMediaAccessoriesStateManagerDataSource;

@interface HMDAppleMediaAccessoriesStateManager : HMFObject <HMDAppleMediaAccessoriesStateMessengerDelegate, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly) HMDAppleMediaAccessoriesStateMessenger *messenger;
@property (readonly) HMDAppleMediaAccessoriesStateManagerMetricsDispatcher *metricsDispatcher;
@property (weak) id<HMDAppleMediaAccessoriesStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)run;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dataSourceAppleMediaAccessories;
- (void)_correctStateForMatchingIdentifier:(id)a0 appleMediaAccessories:(id)a1 sendList:(id)a2;
- (void)appleMediaAccessoriesStateMessenger:(id)a0 didReceiveModelIdentifierRequestMessage:(id)a1 withAccessoryIdentifier:(id)a2;
- (void)correctStateForMatchingAppleMediaAccessories:(id)a0 modelIdentifier:(id)a1;
- (void)correctStateForMatchingIdentifier:(id)a0 appleMediaAccessories:(id)a1;
- (id)initWithIdentifier:(id)a0 messenger:(id)a1 metricsDispatcher:(id)a2;
- (id)remoteAppleMediaAccessories;
- (id)remoteAppleMediaAccessoriesByIdentifier;
- (void)runMultipleIdentifierCorrectionSequence;
- (id)sendModelIdentifierRequestMessageForAppleMediaAccessory:(id)a0 accessoryIdentifier:(id)a1;

@end
