@class NSString, HKTaskServerProxyProvider;
@protocol HKDeviceKeyValueStoreDelegate;

@interface HKDeviceKeyValueStore : NSObject <HKDeviceKeyValueStoreClientInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HKDeviceKeyValueStoreDelegate> _delegate;
}

@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) long long protectionCategory;
@property (readonly, copy, nonatomic) NSString *domain;
@property (weak, nonatomic) id<HKDeviceKeyValueStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)taskIdentifier;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)setString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)clientRemote_deviceKeyValueStoreDidUpdateForStorageGroup:(id)a0;
- (void)fetchEntriesForKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithProtectionCategory:(long long)a0 domain:(id)a1 healthStore:(id)a2;
- (void)mostRecentEntryForKey:(id)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setDate:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)startObservingDeviceKeyValueStoreWithCompletion:(id /* block */)a0;

@end
