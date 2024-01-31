@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceSearchHomeTicket;

@interface _MKSearchHomeTicket : NSObject <MKMapServiceSearchHomeTicket> {
    id<GEOMapServiceSearchHomeTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithTicket:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;

@end
