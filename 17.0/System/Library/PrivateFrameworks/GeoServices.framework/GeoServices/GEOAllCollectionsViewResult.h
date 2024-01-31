@class NSArray, GEOPDAllCollectionsViewResult;

@interface GEOAllCollectionsViewResult : NSObject {
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;
    NSArray *_places;
}

@property (readonly, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic) NSArray *resultFilters;

- (void).cxx_destruct;
- (id)initWithAllCollectionsViewResult:(id)a0;
- (id)initWithAllCollectionsViewResult:(id)a0 withPlaces:(id)a1;

@end
