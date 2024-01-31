@class NSDecimalNumber, NSSet, NSString, NSDate;

@interface FHPeerPaymentForecastingSignal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long forecastingType;
@property (copy, nonatomic) NSDecimalNumber *frequency;
@property (copy, nonatomic) NSDate *signalDate;
@property (copy, nonatomic) NSSet *peerPaymentHeuristicIds;
@property (copy, nonatomic) NSString *dayOfWeek;
@property (copy, nonatomic) NSString *periodicCategory;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
