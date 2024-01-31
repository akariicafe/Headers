@class NSDecimalNumber, NSString;

@interface PKCreditInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *itemDescription;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToInstallmentPlanLineItem:(id)a0;

@end
