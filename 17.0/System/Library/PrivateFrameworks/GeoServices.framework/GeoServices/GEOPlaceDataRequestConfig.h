@class NSNumber, GEOPDPlaceRequest;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
    GEOPDPlaceRequest *_placeRequest;
    BOOL _usesBackgroundURL;
    BOOL _supportsOffline;
}

- (unsigned long long)urlType;
- (id)initWithTimeout:(double)a0 request:(id)a1 traits:(id)a2;
- (id)additionalHTTPHeaders;
- (id)serviceTypeNumber;
- (BOOL)supportsOffline;
- (void).cxx_destruct;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (BOOL)usesBackgroundURL;
- (double)timeout;
- (unsigned long long)multipathServiceType;
- (id)additionalStatesForNetworkEvent;

@end
