@class GEOEnrichmentData, NSString, GEOMapServiceTraits, GEOObserverHashTable, MKMapItem;
@protocol MKMapServicePlaceEnrichmentTicket;

@interface MUPlaceEnrichmentAPIController : NSObject <MUPlaceEnrichmentFetcher, MUPlaceEnrichmentDataProvider> {
    GEOObserverHashTable *_observers;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (retain, nonatomic) id<MKMapServicePlaceEnrichmentTicket> ticket;
@property (retain, nonatomic) GEOEnrichmentData *enrichmentData;
@property (nonatomic) long long state;
@property (readonly, nonatomic) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlaceEnrichmentAPIController;

- (void)resetConfiguration;
- (void)registerObserver:(id)a0;
- (id)initInternal;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)cancelFetchingPlaceEnrichment;
- (void)configureWithMapItem:(id)a0 traits:(id)a1;
- (void)fetchPlaceEnrichment:(id /* block */)a0;
- (id)placeEnrichmentData;

@end
