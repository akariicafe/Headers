@class NSDecimalNumber, NSString, NSDate, PKCurrencyAmount;
@protocol NSCopying;

@interface PKAccountRewardsTierSummary : NSObject <NSSecureCoding, NSCopying, PKIdentifiable> {
    NSString *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *onePercentTotal;
@property (retain, nonatomic) NSDecimalNumber *twoPercentTotal;
@property (retain, nonatomic) NSDecimalNumber *threePercentTotal;
@property (retain, nonatomic) NSDecimalNumber *specialTotal;
@property (readonly, nonatomic) NSDecimalNumber *totalAmount;
@property (readonly, nonatomic) PKCurrencyAmount *totalCurrencyAmount;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)currencyAmountForRewardsTier:(unsigned long long)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 currencyCode:(id)a2 onePercentTotal:(id)a3 twoPercentTotal:(id)a4 threePercentTotal:(id)a5 specialTotal:(id)a6;
- (BOOL)isEqualToRewardsTierSummary:(id)a0;
- (id)totalForRewardsTier:(unsigned long long)a0;

@end
