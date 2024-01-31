@class NSString, NSMutableDictionary, NSDictionary, NSArray;

@interface PPSEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _groupId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timeOffset;
@property (copy) NSMutableDictionary *metrics;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) double epochTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSArray *metricValues;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly) double monotonicTimestamp;

+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andDictionary:(id)a2;
+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andValues:(id)a2 forKeys:(id)a3;
+ (id)eventWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2 groupId:(unsigned long long)a3;

- (id)valueForUndefinedKey:(id)a0;
- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)groupId;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andDictionary:(id)a2;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 andValues:(id)a2 forKeys:(id)a3;
- (id)initWithMonotonicTimestamp:(double)a0 timeOffset:(double)a1 dictionary:(id)a2 groupId:(unsigned long long)a3;
- (id)metricValueForKey:(id)a0;
- (id)metricValuesForKeys:(id)a0 notFoundMarker:(id)a1;

@end
