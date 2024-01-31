@interface CoreIDVShared.IdentityDocument : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ scanMetrics;
    void /* unknown type, empty encoding */ imageMetrics;
    void /* unknown type, empty encoding */ pdf417Data;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
