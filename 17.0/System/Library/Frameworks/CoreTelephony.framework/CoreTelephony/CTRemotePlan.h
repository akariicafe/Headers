@class CTRemotePlanIdentifier, CTPlanTransferAttributes, CTPlanSignUpDetails;

@interface CTRemotePlan : CTPlan

@property (retain, nonatomic) CTRemotePlanIdentifier *planID;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;
@property (retain, nonatomic) CTPlanSignUpDetails *signUpDetails;
@property (nonatomic) unsigned long long addOnPurchaseType;
@property (nonatomic) unsigned long long addOnCarrierFlowType;

+ (BOOL)supportsSecureCoding;

- (id)phoneNumber;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)countryCode;
- (id)carrierName;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iccid;

@end
