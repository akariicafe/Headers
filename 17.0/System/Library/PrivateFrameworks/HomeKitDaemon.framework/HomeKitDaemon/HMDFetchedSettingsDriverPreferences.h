@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, HMDFetchedSettingsDriverDelegate;

@interface HMDFetchedSettingsDriverPreferences : NSObject <HMFLogging, HMDFetchedSettingsDriver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSString *_prefix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDFetchedSettingsDriverDelegate> delegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchSettingsForKeyPaths:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 userDefaults:(id)a1 prefix:(id)a2 defaultValues:(id)a3;
- (void)languageValueListWithCompletion:(id /* block */)a0;
- (void)startWithKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)updateSettingWithKeyPath:(id)a0 boolSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 integerSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 languageSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 primaryUserInfo:(id)a1 completion:(id /* block */)a2;

@end
