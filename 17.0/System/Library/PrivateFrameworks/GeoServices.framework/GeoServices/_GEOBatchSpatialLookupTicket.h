@class GEOSpatialLookupBatchRequest, NSString, GEOMapServiceTraits, NSArray, GEOSpatialLookupBatchResponse, NSMapTable;

@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket <GEOMapServiceBatchSpatialLookupTicket> {
    GEOSpatialLookupBatchRequest *_request;
    GEOSpatialLookupBatchResponse *_response;
    NSArray *_parameters;
    NSMapTable *_parametersToMapItems;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void).cxx_destruct;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (id)initWithRequest:(id)a0 forParameters:(id)a1 traits:(id)a2;
- (id)mapItemsForParameters:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2 queue:(id)a3;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1 queue:(id)a2;

@end
