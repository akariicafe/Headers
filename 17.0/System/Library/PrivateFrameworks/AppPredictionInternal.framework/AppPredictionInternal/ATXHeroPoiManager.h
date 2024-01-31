@class BMPOICategoryStream;

@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream *_poiCategoryStream;
}

- (id)cachedPoiCategory;
- (void)logCompletion:(id)a0;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 timeIntervalSince1970:(double)a2;
- (id)poiCategoryStream;
- (id)currentPoiCategory;
- (id)poiCategoryStreamPublisher;
- (void).cxx_destruct;
- (id)poiCategoryPublisherBookmark;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (void)donateHeroPoiPredictions:(id)a0;

@end
