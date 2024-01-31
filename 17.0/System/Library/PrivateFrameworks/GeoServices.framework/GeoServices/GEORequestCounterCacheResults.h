@class NSString, NSDate, NSDateInterval;

@interface GEORequestCounterCacheResults : NSObject <GEORequestCounterCacheResults, GEOXPCSerializable>

@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) NSDateInterval *timeRange;
@property (readonly, nonatomic) int requestType;
@property (readonly, nonatomic) unsigned int cacheHitCount;
@property (readonly, nonatomic) unsigned int cacheMissCount;
@property (readonly, nonatomic) unsigned int cacheExpiredCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) int requestKindRaw;
@property (nonatomic) unsigned int cacheHitCount;
@property (nonatomic) unsigned int cacheMissCount;
@property (nonatomic) unsigned int cacheExpiredCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
