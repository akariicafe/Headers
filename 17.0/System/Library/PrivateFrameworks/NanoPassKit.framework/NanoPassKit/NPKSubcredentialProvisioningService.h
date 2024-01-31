@class NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *subcredentialService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subcredentialProvisioningQueue;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)_sendOptions;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)_sendProtobuf:(id)a0 responseExpected:(BOOL)a1 extraOptions:(id)a2;
- (void)_setUpSubcredentialProvisioningQueue;
- (void)_setUpSubcredentialProvisioningService;
- (void)_trackOutstandingRequestWithMessageIdentifier:(id)a0 completionHandler:(id)a1 errorHandler:(id /* block */)a2;
- (BOOL)isPairedDeviceConnected;
- (void)registerProtobufActionsForService:(id)a0;
- (id)sendProtobuf:(id)a0 responseExpected:(BOOL)a1;
- (id)sendProtobuf:(id)a0 responseExpected:(BOOL)a1 extraOptions:(id)a2;
- (void)trackOutstandingRequestWithMessageIdentifier:(id)a0 completionHandler:(id)a1 errorHandler:(id /* block */)a2;

@end
