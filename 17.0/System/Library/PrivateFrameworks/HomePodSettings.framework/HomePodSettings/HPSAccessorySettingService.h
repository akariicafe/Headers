@class NSDictionary, NSXPCConnection;
@protocol HPSAccessorySettingServiceDelegate, HPSAccessorySettingServiceConnectionProvider;

@interface HPSAccessorySettingService : NSObject

@property (readonly, nonatomic) id<HPSAccessorySettingServiceConnectionProvider> provider;
@property (weak, nonatomic) id<HPSAccessorySettingServiceDelegate> delegate;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int notifyRegisterToken;
@property (readonly, nonatomic) NSDictionary *keyPaths;
@property (readonly, nonatomic) NSDictionary *heldAssertions;
@property (readonly, nonatomic, getter=hasOptedToHH2) BOOL optedToHH2;
@property (nonatomic, getter=isMigrationToHH2Complete) BOOL migrationToHH2Complete;

- (id)init;
- (void)dealloc;
- (void)_handleConnectionInterrupted;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)settingForKeyPath:(id)a0;
- (void)startXPCConnection;
- (void)settingsForKeyPaths:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateSettingForKeyPath:(id)a0 setting:(id)a1 completionHandler:(id /* block */)a2;
- (void)aggregateAllSettingsInScope:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)aggregateAllSettingsWithCompletionHandler:(id /* block */)a0;
- (void)fetchAllSettingsWithCompletionHandler:(id /* block */)a0;
- (void)getAllSettingsWithCompletionHandler:(id /* block */)a0;
- (void)getKeyPathsAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)getKeyPathsWithCompletionHandler:(id /* block */)a0;
- (void)heldAssertionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithConnectionProvider:(id)a0 delegate:(id)a1;
- (void)isSettingAvailableForKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)keyPathsAvailability;
- (void)mergeSettingsInScope:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)notifyDidUpdateSetting:(id)a0 forKeyPath:(id)a1;
- (void)optedToHH2WithCompletionHandler:(id /* block */)a0;
- (void)overrideOptedToHH2State:(BOOL)a0;
- (void)reconcileSettingsInScope:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)settingForKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)updateSettingForKeyPath:(id)a0 setting:(id)a1;
- (id)updateSettingWithoutSynchronizationForKeyPath:(id)a0 setting:(id)a1;
- (void)updateSettingWithoutSynchronizationForKeyPath:(id)a0 setting:(id)a1 completionHandler:(id /* block */)a2;

@end
