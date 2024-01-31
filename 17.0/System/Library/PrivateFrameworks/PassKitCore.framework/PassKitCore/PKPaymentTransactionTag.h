@class NSString, NSDecimalNumber;

@interface PKPaymentTransactionTag : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDecimalNumber *rank;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
