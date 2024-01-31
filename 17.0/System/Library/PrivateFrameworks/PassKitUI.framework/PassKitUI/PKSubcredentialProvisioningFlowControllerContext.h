@class NSError, PKPaymentWebService, PKPaymentPass;

@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long flowType;
@property (retain, nonatomic) PKPaymentWebService *localDeviceWebService;
@property (retain, nonatomic) PKPaymentWebService *remoteDeviceWebService;
@property (retain, nonatomic) PKPaymentPass *provisionedPass;
@property (retain, nonatomic) PKPaymentPass *provisionedRemotePass;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL shouldExitFlowOnError;
@property (readonly, nonatomic) long long setupContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlowType:(long long)a0;

@end
