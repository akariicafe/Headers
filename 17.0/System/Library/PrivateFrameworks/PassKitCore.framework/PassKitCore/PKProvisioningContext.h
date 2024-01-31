@class PKPaymentProvisioningController, PKPeerPaymentWebService, NSString, PKGroupsController;

@interface PKProvisioningContext : NSObject

@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) PKGroupsController *groupsController;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isFollowupProvisioning;
@property (nonatomic) BOOL isFollowupSetupAssistant;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithEnvironment:(long long)a0 provisioningController:(id)a1 groupsController:(id)a2;

@end
