@class NSArray, PKPassShareActivationOptions, PKSharingMesageProprietaryData, NSString;

@interface PKSharingPushProvisioningInvitation : PKSharingMessage

@property (readonly, nonatomic) NSArray *metadatas;
@property (readonly, nonatomic) PKPassShareActivationOptions *activationOptions;
@property (readonly, nonatomic) PKSharingMesageProprietaryData *proprietaryData;
@property (readonly, nonatomic) NSString *provisioningCredentialHash;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithDisplayInformation:(id)a0 provisioningVouchersByOEM:(id)a1 activationOptions:(id)a2 proprietaryData:(id)a3;

@end
