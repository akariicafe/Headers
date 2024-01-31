@class NSString;

@interface CTCarrierSpaceAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *authURL;
@property (retain, nonatomic) NSString *tokenURL;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *scope;
@property (nonatomic) BOOL supportsState;
@property (retain, nonatomic) NSString *sourceApplicationAccountIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
