@class NSMutableDictionary;
@protocol HKDateRangeDataSourceDelegate;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate>

@property (readonly, nonatomic) id<HKDateRangeDataSourceDelegate> sourceDelegate;
@property (retain, nonatomic) NSMutableDictionary *pathToDataBlock;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 context:(id)a1;
- (id)_fetchAndCacheDataForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 toPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 priorityDelegate:(id)a2;
- (void)dateRangeDataUpdated;
- (id)initWithSourceDelegate:(id)a0;

@end
