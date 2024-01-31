@interface FinanceKit.StorableColor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ red;
    void /* unknown type, empty encoding */ green;
    void /* unknown type, empty encoding */ blue;
    void /* unknown type, empty encoding */ alpha;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
