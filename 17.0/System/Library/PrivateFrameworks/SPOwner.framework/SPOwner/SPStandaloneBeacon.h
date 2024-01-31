@class NSUUID, NSString, NSData, NSDate;

@interface SPStandaloneBeacon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *macAddress;
@property (copy, nonatomic) NSData *classicMacAddress;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSDate *pairingDate;
@property (copy, nonatomic) NSData *productData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 macAddress:(id)a1 classicMacAddress:(id)a2 serialNumber:(id)a3 pairingDate:(id)a4 productData:(id)a5;

@end
