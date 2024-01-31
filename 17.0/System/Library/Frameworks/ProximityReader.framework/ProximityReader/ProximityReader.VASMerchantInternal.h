@interface ProximityReader.VASMerchantInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ merchantIdentifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ sendURLOnly;
    void /* unknown type, empty encoding */ localizedName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
