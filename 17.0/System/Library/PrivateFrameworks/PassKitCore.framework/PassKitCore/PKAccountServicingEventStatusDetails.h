@class NSArray, NSString, NSDate, PKCurrencyAmount;

@interface PKAccountServicingEventStatusDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *statusReasons;
@property (copy, nonatomic) NSDate *customerResponseByDate;
@property (copy, nonatomic) NSDate *merchantResponseByDate;
@property (copy, nonatomic) NSArray *evidenceDocumentTypes;
@property (copy, nonatomic) NSString *resolutionReason;
@property (copy, nonatomic) PKCurrencyAmount *partiallyApprovedAmount;
@property (copy, nonatomic) NSDate *resolutionDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithDictionary:(id)a0 currencyCode:(id)a1;
- (id)initWithRecord:(id)a0 currencyCode:(id)a1;

@end
