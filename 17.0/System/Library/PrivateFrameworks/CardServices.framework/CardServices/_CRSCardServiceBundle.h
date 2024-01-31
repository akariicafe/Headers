@class NSString;
@protocol CRSCardServing;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing> {
    id<CRSCardServing> _cardService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)underlyingService;
- (BOOL)canSatisfyCardRequest:(id)a0;
- (void)requestCard:(id)a0 reply:(id /* block */)a1;
- (unsigned long long)servicePriorityForRequest:(id)a0;
- (void)_initializeCardServiceWithClass:(Class)a0;

@end
