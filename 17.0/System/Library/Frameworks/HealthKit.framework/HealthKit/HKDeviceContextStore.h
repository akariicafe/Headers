@class NSString, HKTaskServerProxyProvider, HKHealthStore;

@interface HKDeviceContextStore : NSObject <_HKXPCExportable>

@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)taskIdentifier;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)fetchEntriesWithCompletion:(id /* block */)a0;
- (void)numberOfDeviceContextsPerDeviceType:(id /* block */)a0;

@end
