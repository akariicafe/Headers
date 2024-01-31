@class NSString, PKAppletSubcredential;

@interface PKCarShareAcceptanceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAppletSubcredential *subcredential;
@property (retain, nonatomic) NSString *passUniqueIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCarShareAcceptanceResponse:(id)a0;

@end
