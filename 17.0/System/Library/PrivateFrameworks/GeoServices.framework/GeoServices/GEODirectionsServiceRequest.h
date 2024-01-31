@class GEODirectionsRequest, GEODirectionsRequester;

@interface GEODirectionsServiceRequest : NSObject {
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsRequester *_directionsRequester;
    BOOL _isCancelled;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDirectionsRequest:(id)a0 directionsRequester:(id)a1;

@end
