@interface ProximityReader.PINData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isPINBypass;
    void /* unknown type, empty encoding */ pinBlockBase64;
    void /* unknown type, empty encoding */ pinKekId;
    void /* unknown type, empty encoding */ seAttestationBase64;
    void /* unknown type, empty encoding */ casdCertificateHex;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
