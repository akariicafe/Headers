@class NSString, GEOMapServiceTraits;

@interface _GEOPlaceSearchCategoryTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCategoriesTicket>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;

- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;

@end
