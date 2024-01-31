@class NSString, NSDate;

@interface PKPaymentCommutePlanDetail : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long planType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppletCommutePlan:(id)a0;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 expiryDate:(id)a2 title:(id)a3 description:(id)a4;
- (id)initWithIdentifier:(id)a0 value:(long long)a1 title:(id)a2 description:(id)a3;
- (id)initWithTransitCommutePlan:(id)a0;

@end
