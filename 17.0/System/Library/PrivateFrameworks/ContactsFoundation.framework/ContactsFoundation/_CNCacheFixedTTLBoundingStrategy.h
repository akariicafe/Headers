@class NSString, NSMutableDictionary;
@protocol CNTimeProvider;

@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy>

@property (readonly, nonatomic) double ttl;
@property (readonly, nonatomic) unsigned long long renewalOptions;
@property (readonly, nonatomic) id<CNTimeProvider> timeProvider;
@property (readonly, nonatomic) NSMutableDictionary *timestamps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTTL:(double)a0;
- (void).cxx_destruct;
- (BOOL)shouldEvictKey:(id)a0;
- (id)initWithTTL:(double)a0 renewalOptions:(unsigned long long)a1 timeProvider:(id)a2;
- (void)updateTimestampForKey:(id)a0;
- (void)willAccessKey:(id)a0;
- (void)willUpdateCacheBy:(unsigned long long)a0 forKey:(id)a1 keysToEvict:(id *)a2;

@end
