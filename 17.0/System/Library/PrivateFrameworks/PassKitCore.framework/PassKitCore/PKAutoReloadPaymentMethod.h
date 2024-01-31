@class NSString, NSURL;

@interface PKAutoReloadPaymentMethod : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSString *fpanIdentifier;
@property (retain, nonatomic) NSString *merchantTokenIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSURL *managementURL;
@property (nonatomic) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
