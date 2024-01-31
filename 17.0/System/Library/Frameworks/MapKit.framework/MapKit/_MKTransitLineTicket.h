@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceTransitLineTicket;

@interface _MKTransitLineTicket : NSObject <MKMapServiceTransitLineTicket> {
    id<GEOMapServiceTransitLineTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
