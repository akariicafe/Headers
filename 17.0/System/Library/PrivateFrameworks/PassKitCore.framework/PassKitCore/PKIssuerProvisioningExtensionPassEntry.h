@class NSString;

@interface PKIssuerProvisioningExtensionPassEntry : NSObject

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct CGImage { } *art;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(long long)a0 identifier:(id)a1 title:(id)a2 art:(struct CGImage { } *)a3;
- (BOOL)_isEqualToEntry:(id)a0;
- (id)paymentPassEntry;

@end
