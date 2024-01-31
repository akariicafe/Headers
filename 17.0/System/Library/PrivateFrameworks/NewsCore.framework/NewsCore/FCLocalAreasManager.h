@class FCOnce, FCAsyncSerialQueue, FCLocalAreasMapping, NSDate;
@protocol FCContentContext;

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain) FCLocalAreasMapping *localAreasMapping;
@property (retain) NSDate *localAreasMappingFetchDate;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;

- (void)_refreshWithQoS:(long long)a0 completion:(id /* block */)a1;
- (id)initWithContentContext:(id)a0;
- (void)fetchLocalAreasProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_loadFromCache;

@end
