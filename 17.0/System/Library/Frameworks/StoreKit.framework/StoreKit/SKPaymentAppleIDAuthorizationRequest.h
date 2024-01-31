@class NSString;

@interface SKPaymentAppleIDAuthorizationRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;

- (id)initWithClientIdentifier:(id)a0 teamIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
