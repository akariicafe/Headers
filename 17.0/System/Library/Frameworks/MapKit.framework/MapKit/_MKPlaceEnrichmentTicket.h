@class NSString, GEOMapServiceTraits;
@protocol GEOMapServicePlaceEnrichmentTicket;

@interface _MKPlaceEnrichmentTicket : NSObject <MKMapServicePlaceEnrichmentTicket> {
    id<GEOMapServicePlaceEnrichmentTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
