@interface FinanceKit.LocalizedString : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ key;
    void /* unknown type, empty encoding */ localizedStrings;
    void /* unknown type, empty encoding */ developmentLocalization;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
