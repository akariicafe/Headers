@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceRefreshEVChargerTicket;

@interface _MKPlaceEVChargerTicket : NSObject <MKMapServiceRefreshEVChargerTicket> {
    id<GEOMapServiceRefreshEVChargerTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
