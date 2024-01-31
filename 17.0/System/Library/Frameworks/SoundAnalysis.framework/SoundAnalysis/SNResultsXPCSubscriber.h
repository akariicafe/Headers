@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol> {
    void /* unknown type, empty encoding */ receiver;
}

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)xpcRequest:(id)a0 didFailWithError:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRequest:(id)a0 didProduceResult:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRequestDidComplete:(id)a0 completionHandler:(id /* block */)a1;

@end
