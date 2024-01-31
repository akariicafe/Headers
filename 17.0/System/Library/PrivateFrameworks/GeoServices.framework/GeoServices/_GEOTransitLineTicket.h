@class NSString, GEOMapServiceTraits;

@interface _GEOTransitLineTicket : GEOAbstractRequestResponseTicket <GEOMapServiceTransitLineTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;

@end
