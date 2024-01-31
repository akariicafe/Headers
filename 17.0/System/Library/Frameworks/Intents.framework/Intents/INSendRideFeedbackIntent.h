@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent

@property (readonly, copy, nonatomic) NSString *rideIdentifier;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) INCurrencyAmount *tip;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRideIdentifier:(id)a0;

@end
