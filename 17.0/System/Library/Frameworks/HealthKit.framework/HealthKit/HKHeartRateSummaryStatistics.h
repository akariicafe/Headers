@class NSArray, NSUUID, NSDateInterval, NSMutableArray;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {
    NSMutableArray *_sortedBuckets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) long long numberOfBuckets;
@property (readonly, nonatomic) long long numberOfReadings;
@property (readonly, nonatomic) NSUUID *sessionUUID;

- (id)_dictionaryRepresentation;
- (unsigned long long)hash;
- (id)bucketAtIndex:(long long)a0;
- (id)initFromStatistics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_bucketsDescription;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateBucketsWithBlock:(id /* block */)a0;
- (id)_bucketAtIndex:(long long)a0 createdIfNeeded:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (void)addHeartRateInBeatsPerMinute:(double)a0 forTime:(double)a1;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 sessionUUID:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
