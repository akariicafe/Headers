@class MPModelRequest, NSArray, NSString, NSError, _MPModelShimRequestMiddleware;

@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <MPMiddlewareOperation>

@property (retain, nonatomic) _MPModelShimRequestMiddleware *middleware;
@property (retain, nonatomic) MPModelRequest *modelRequest;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithMiddleware:(id)a0 modelRequest:(id)a1;

@end
