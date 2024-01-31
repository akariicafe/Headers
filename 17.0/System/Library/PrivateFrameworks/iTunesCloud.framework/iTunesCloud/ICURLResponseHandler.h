@interface ICURLResponseHandler : NSObject

- (void)processCompletedResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)processInitialResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
