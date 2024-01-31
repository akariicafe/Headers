@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *mcc;
@property (retain, nonatomic) NSString *mnc;
@property (retain, nonatomic) NSString *gid1;
@property (retain, nonatomic) NSString *gid2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIccid:(id)a0 carrierName:(id)a1 phoneNumber:(id)a2 countryCode:(id)a3 label:(id)a4 mcc:(id)a5 mnc:(id)a6 gid1:(id)a7 gid2:(id)a8;

@end
