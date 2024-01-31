@class NSString;

@interface CoreIDVShared.IdentityProofingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ country;
    void /* unknown type, empty encoding */ targetDevice;
    void /* unknown type, empty encoding */ actionStatus;
    void /* unknown type, empty encoding */ credentialIdentifier;
    void /* unknown type, empty encoding */ productIdentifier;
    void /* unknown type, empty encoding */ axSettings;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
