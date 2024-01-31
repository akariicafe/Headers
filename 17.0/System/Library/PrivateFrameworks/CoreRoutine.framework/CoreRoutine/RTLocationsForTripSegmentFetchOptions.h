@class CLLocation, NSDateInterval;

@interface RTLocationsForTripSegmentFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) unsigned long long offset;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) long long preferredDownsamplingLevel;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 preferredDownsamplingLevel:(long long)a1 boundingBoxLocation:(id)a2 batchSize:(unsigned long long)a3 offset:(unsigned long long)a4;
- (id)initWithTripSegment:(id)a0;
- (id)initWithTripSegment:(id)a0 preferredDownsamplingLevel:(long long)a1;
- (id)initWithTripSegment:(id)a0 preferredDownsamplingLevel:(long long)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3;
- (id)initWithTripSegment:(id)a0 preferredDownsamplingLevel:(long long)a1 boundingBoxLocation:(id)a2 batchSize:(unsigned long long)a3 offset:(unsigned long long)a4;

@end
