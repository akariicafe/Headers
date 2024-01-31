@class NSString;

@interface CIDVUIProofingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) long long target;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *productIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4;
- (id)initWithState:(id)a0 country:(id)a1 target:(long long)a2 status:(long long)a3 credentialIdentifier:(id)a4 productIdentifier:(id)a5;

@end
