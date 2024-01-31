@interface ProximityReader.VASReadEntry : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mobileToken;
    void /* unknown type, empty encoding */ customerVASData;
    void /* unknown type, empty encoding */ merchantIdentifier;
    void /* unknown type, empty encoding */ resultCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
