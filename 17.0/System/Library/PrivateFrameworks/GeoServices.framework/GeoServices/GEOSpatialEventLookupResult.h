@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMapTable:(id)a0;
- (id)poiEventsForSpatialLookupParameters:(id)a0;

@end
