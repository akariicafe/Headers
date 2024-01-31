@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL answered;
@property (nonatomic) BOOL answeredOnThisDevice;
@property (readonly, nonatomic) NSArray *allowedAnswers;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToQuestion:(id)a0;

@end
