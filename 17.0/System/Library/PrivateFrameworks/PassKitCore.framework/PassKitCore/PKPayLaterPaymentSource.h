@class NSString;

@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
