@class NSString, HDProfile, NSArray, NSObject, NSUserDefaults;
@protocol HDMCSettingsMigrationManagerDelegate, OS_dispatch_queue;

@interface HDMCSettingsMigrationManager : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_migrationSteps;
}

@property (weak, nonatomic) id<HDMCSettingsMigrationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (void)_queue_performMigrationFromCurrentMigrationVersion:(long long)a0;
- (id)initWithProfile:(id)a0 userDefaults:(id)a1 delegate:(id)a2;

@end
