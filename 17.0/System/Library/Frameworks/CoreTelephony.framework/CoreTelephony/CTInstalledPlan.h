@class CTPlanIdentifier, CTPlanTransferAttributes;

@interface CTInstalledPlan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTPlanIdentifier *planID;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes;

- (id)phoneNumber;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)carrierName;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iccid;

@end
