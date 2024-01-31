@class PKAddCarKeyPassConfiguration;

@interface PKPendingCarKeyProvisioning : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAddCarKeyPassConfiguration *configuration;

+ (id)uniqueIdentifierForBrandIdentifier:(id)a0 pairedReaderIdentifier:(id)a1;
+ (id)uniqueIdentifierForCarKeyConfiguration:(id)a0;
+ (id)uniqueIdentifierForSubcredential:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (id)initWithCoder:(id)a0;
- (BOOL)representsPass:(id)a0;
- (id)initWithCarKeyConfiguration:(id)a0;

@end
