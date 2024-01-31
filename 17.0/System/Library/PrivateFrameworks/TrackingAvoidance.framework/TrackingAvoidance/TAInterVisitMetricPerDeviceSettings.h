@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double sampledObservationLocationsInterval;
@property (nonatomic) unsigned long long sampledObservationLocationsBufferSize;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampledObservationLocationsInterval:(double)a0 sampledObservationLocationsBufferSize:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;

@end
