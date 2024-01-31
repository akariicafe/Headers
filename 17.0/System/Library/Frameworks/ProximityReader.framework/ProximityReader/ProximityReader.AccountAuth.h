@interface ProximityReader.AccountAuth : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ partnerToken;
    void /* unknown type, empty encoding */ relink;
    void /* unknown type, empty encoding */ gsToken;
    void /* unknown type, empty encoding */ altDsId;
    void /* unknown type, empty encoding */ deviceLocale;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
