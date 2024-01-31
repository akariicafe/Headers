@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceHikingIntroTipTicket;

@interface _MKPlaceHikingIntroTipTicket : NSObject <MKMapServiceHikingIntroTipTicket> {
    id<GEOMapServiceHikingIntroTipTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
