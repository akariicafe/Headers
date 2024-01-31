@class NSString, NSUUID, HDProfile, HDHealthStoreClient;
@protocol HDTaskServerDelegate;

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface>

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, weak, nonatomic) id<HDTaskServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;

- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_unitTesting_createTaskServerNoOpWithCompletion:(id /* block */)a0;

@end
