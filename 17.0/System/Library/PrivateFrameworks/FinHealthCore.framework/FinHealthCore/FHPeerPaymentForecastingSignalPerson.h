@class NSString;

@interface FHPeerPaymentForecastingSignalPerson : FHPeerPaymentForecastingSignal

@property (copy, nonatomic) NSString *personId;
@property (nonatomic) long long direction;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
