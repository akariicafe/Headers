@class MKMapItemIdentifier;
@protocol MKMapServicePublisherViewTicket;

@interface MKPlacePublisherRefiner : NSObject {
    MKMapItemIdentifier *_publisherIdentifier;
    id<MKMapServicePublisherViewTicket> _ticket;
}

- (void).cxx_destruct;
- (void)fetchWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithPublisherIdentifier:(unsigned long long)a0;
- (id)initWithPublisherIdentifier:(unsigned long long)a0 providerIdentifier:(int)a1;

@end
