@class NSString, HKProxyProvider;

@interface HKEntitlementStore : NSObject <_HKXPCExportable, HKEntitlementStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)a0;

@end
