@class NSString;

@interface HMEEventMetadata : NSObject

@property (readonly) unsigned long long rawCombineType;
@property (readonly) unsigned long long rawCachePolicy;
@property (readonly) unsigned long long rawQOS;
@property (readonly, copy) NSString *source;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) unsigned long long combineType;
@property (readonly) double intervalSinceReferenceDate;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 cachePolicy:(unsigned long long)a1 combineType:(unsigned long long)a2 timestamp:(double)a3;
- (id)_initWithSource:(id)a0 rawCachePolicy:(unsigned long long)a1 rawCombineType:(unsigned long long)a2 rawQos:(unsigned long long)a3 timestamp:(double)a4;
- (id)initDefaultMetadata;

@end
