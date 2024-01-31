@class NSArray, NSString, CLSBusinessCategoryCache, NSObject;
@protocol OS_os_log, GEOMapServiceBatchSpatialLookupTicket;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol>

@property (class, readonly, nonatomic) NSArray *categories;

@property (readonly, nonatomic) NSArray *locationGeoParameters;
@property (readonly, nonatomic) id<GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, nonatomic) CLSBusinessCategoryCache *cache;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) struct { unsigned long long numberOfLocations; unsigned long long numberOfResolvedLocations; unsigned long long numberOfUnneededLocations; unsigned long long numberOfRequests; unsigned long long batchSize; } statistics;
@property (nonatomic) double precision;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)a0 forRegions:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0;
- (unsigned long long)cacheItems:(id)a0;
- (id)initWithRegions:(id)a0 categories:(id)a1 precision:(double)a2;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)a0;
- (void)logGeoLookupFailureResult;
- (BOOL)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;

@end
