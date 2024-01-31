@class MKMapItemIdentifier;
@protocol MKMapServiceCuratedCollectionTicket, MKMapServiceCuratedCollectionItemsTicket;

@interface MKPlaceCuratedCollectionRefiner : NSObject {
    MKMapItemIdentifier *_collectionIdentifier;
    id<MKMapServiceCuratedCollectionTicket> _identifierRefinementTicket;
    id<MKMapServiceCuratedCollectionItemsTicket> _mapItemRefinementTicket;
}

- (id)initWithCollectionIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_resolveMapItemsWithCollection:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithCollectionIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1;

@end
