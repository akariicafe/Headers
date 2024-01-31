@interface ProximityReader.IdentityInformation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ portraitData;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ age;
    void /* unknown type, empty encoding */ ageAtLeastElements;
    void /* unknown type, empty encoding */ issuer;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
