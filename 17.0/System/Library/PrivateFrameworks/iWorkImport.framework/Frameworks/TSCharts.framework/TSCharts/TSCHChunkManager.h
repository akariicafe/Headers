@class TSCHChunkMap, TSCHChartInfo;

@interface TSCHChunkManager : NSObject {
    TSCHChartInfo *_weakChart;
    TSCHChunkMap *_cachedChunkMap;
}

- (void).cxx_destruct;
- (void)updateCache:(unsigned long long)a0;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)a0;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)a0;
- (id)initWithChartInfo:(id)a0;
- (BOOL)p_supportsByWedgeDeliveryStyle:(id)a0;
- (id)p_chart;
- (void)adjustRangeForRep:(id)a0 chunkIndex:(unsigned long long)a1 finalTexture:(BOOL)a2 seriesStart:(long long *)a3 seriesCount:(long long *)a4;
- (void)adjustRangeForRep:(id)a0 seriesIndex:(unsigned long long)a1 chunkIndex:(unsigned long long)a2 finalTexture:(BOOL)a3 outGroupStart:(long long *)a4 outGroupCount:(long long *)a5;
- (id)animationFiltersWithDefaultFilters:(id)a0;
- (unsigned long long)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned long long)a0;
- (unsigned long long)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned long long)a0;
- (unsigned long long)chunkCountForChartDeliveryStyle:(unsigned long long)a0;
- (id)containedTextForChartDeliveryStyle:(unsigned long long)a0 chunkIndex:(unsigned long long)a1 displayName:(id)a2;
- (BOOL)hasBackgroundLayerForPieChart;
- (BOOL)lastChunkForSeriesIndex:(unsigned long long)a0 currentChunk:(unsigned long long)a1 chunkStyle:(unsigned long long)a2;
- (id)p_allChartDeliveryStylesLocalized:(BOOL)a0;
- (id)p_allLocalizedChartDeliveryStyles;
- (id)p_allNonLocalizedChartDeliveryStyles;
- (id)p_backgroundStringForChartWithTitle:(id)a0;
- (id)p_cachedChunkMap;
- (unsigned long long)p_chunkCountForChart:(id)a0 chunkStyle:(unsigned long long)a1 chunkMap:(id)a2;
- (id)p_chunkMapForChart:(id)a0 chunkStyle:(unsigned long long)a1 forceUpdateCache:(BOOL)a2;
- (id)p_createChunkMapForChart:(id)a0 chunkStyle:(unsigned long long)a1;
- (BOOL)p_hasBackgroundFillForChart:(id)a0;
- (BOOL)p_hasBackgroundLayerForPieChartForChart:(id)a0;
- (BOOL)p_isMultiDataForChart:(id)a0;
- (BOOL)p_legendOnForChart:(id)a0;
- (id)p_makeAllChartDeliveryStylesLocalized:(BOOL)a0;
- (id)p_nameForMultiDataSetCategory:(unsigned long long)a0 chart:(id)a1;
- (id)p_seriesNameForSeriesAtIndex:(unsigned long long)a0 withPrefix:(id)a1 chart:(id)a2;
- (BOOL)p_titleOnForChart:(id)a0;

@end
