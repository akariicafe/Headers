@interface CoreIDVShared.IdentityProofingUnorderedUIElementOption : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ bullets;
    void /* unknown type, empty encoding */ assessments;
    void /* unknown type, empty encoding */ accessibility;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
