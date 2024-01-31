@class NSString;

@interface HDSourceStoreServer : HDStandardTaskServer <HKSourceStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_deleteSourceWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAllSourcesWithCompletion:(id /* block */)a0;
- (void)remote_fetchHasSampleWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchOrderedSourcesForObjectType:(id)a0 completion:(id /* block */)a1;
- (void)remote_updateOrderedSources:(id)a0 forObjectType:(id)a1 completion:(id /* block */)a2;

@end
