@class RTLocation, NSDateInterval;

@interface RTFamiliarityIndexOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long spatialGranularity;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) BOOL referenceLocationSummary;
@property (readonly, nonatomic) double distance;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 spatialGranularity:(unsigned long long)a1;
- (id)initWithDateInterval:(id)a0 spatialGranularity:(unsigned long long)a1 referenceLocation:(id)a2 referenceLocationSummary:(BOOL)a3 distance:(double)a4;

@end
