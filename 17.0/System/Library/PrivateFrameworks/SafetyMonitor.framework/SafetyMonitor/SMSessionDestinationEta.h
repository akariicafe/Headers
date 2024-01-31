@interface SMSessionDestinationEta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) double additionalTravelTime;
@property (readonly, nonatomic) unsigned long long transportType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)etaDate;
- (id)coarseEtaDate;
- (id)initWithExpectedTravelTime:(double)a0 additionalTravelTime:(double)a1 transportType:(unsigned long long)a2;

@end
