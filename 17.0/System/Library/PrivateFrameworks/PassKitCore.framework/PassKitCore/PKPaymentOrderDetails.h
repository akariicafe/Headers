@class NSString, NSURL;

@interface PKPaymentOrderDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *orderTypeIdentifier;
@property (copy, nonatomic) NSString *orderIdentifier;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOrderTypeIdentifier:(id)a0 orderIdentifier:(id)a1 webServiceURL:(id)a2 authenticationToken:(id)a3;

@end
