@class NSString;
@protocol MKMapServiceTicket;

@interface _BSUIMapServiceTicket : NSObject <BSUIMapServiceTicket> {
    id<MKMapServiceTicket> _serviceTicket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0;

@end
