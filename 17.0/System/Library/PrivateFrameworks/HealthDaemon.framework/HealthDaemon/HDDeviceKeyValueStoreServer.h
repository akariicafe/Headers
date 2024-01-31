@class NSString, HKDeviceKeyValueStoreTaskConfiguration;

@interface HDDeviceKeyValueStoreServer : HDStandardTaskServer <HKDeviceKeyValueStoreServerInterface, HDDeviceKeyValueStoreObserver> {
    HKDeviceKeyValueStoreTaskConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_setData:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 completion:(id /* block */)a4;
- (void)remote_fetchEntriesForDomain:(id)a0 key:(id)a1 protectionCategory:(long long)a2 completion:(id /* block */)a3;
- (void)remote_setDate:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 completion:(id /* block */)a4;
- (void)remote_mostRecentEntryForDomain:(id)a0 key:(id)a1 protectionCategory:(long long)a2 completion:(id /* block */)a3;
- (void)remote_setNumber:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 completion:(id /* block */)a4;
- (void)remote_setString:(id)a0 forKey:(id)a1 domainName:(id)a2 protectionCategory:(long long)a3 completion:(id /* block */)a4;
- (void)remote_startObservingDeviceKeyValueStoreWithCompletion:(id /* block */)a0;
- (void)deviceKeyValueStoreDidUpdateForStorageGroup:(id)a0 domain:(id)a1;

@end
