@class IDSIDQueryController, NSString, IMAccountController, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface SMEligibilityChecker : NSObject <IDSIDQueryControllerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSIDQueryController *idsIDQueryController;
@property (retain, nonatomic) IMAccountController *iMAccountController;
@property (retain, nonatomic) IDSService *iCloudIDSService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertEligibilityTypeToString:(long long)a0;
+ (id)convertToPushTokenMap:(id)a0;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)checkReceiverEligibility:(id)a0 handler:(id /* block */)a1;
- (void)addDelegateForService:(id)a0;
- (BOOL)checkRecipientAccountIsUnique:(id)a0;
- (id)initWithQueue:(id)a0 IDSIDQueryController:(id)a1 IMAccountController:(id)a2 iCloudIDSService:(id)a3;
- (long long)reportedEligibilityWithiMessageEligibility:(long long)a0 iCloudEligibility:(long long)a1;
- (void)resolveEndpointsForDestinations:(id)a0 service:(id)a1 requiredCapabilities:(id)a2 completionBlock:(id /* block */)a3;

@end
