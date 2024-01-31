@interface CoreODIEssentials.IdentityProofingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ country;
    void /* unknown type, empty encoding */ targetDevice;
    void /* unknown type, empty encoding */ actionStatus;
    void /* unknown type, empty encoding */ credentialIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
