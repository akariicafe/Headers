@interface ProximityReader.PINConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ allowPINBypass;
    void /* unknown type, empty encoding */ privacyLock;
    void /* unknown type, empty encoding */ merchantName;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ cardPreferredLanguage;
    void /* unknown type, empty encoding */ terminalPreferredLocaleIdentifier;
    void /* unknown type, empty encoding */ customerPreferredLocaleIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
