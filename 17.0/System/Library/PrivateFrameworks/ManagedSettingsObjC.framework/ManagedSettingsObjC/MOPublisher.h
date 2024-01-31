@interface MOPublisher : NSObject

- (void)subscribe:(id)a0;
- (id)sinkWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (id)initPublisher;
- (id)sinkWithReceiveInput:(id /* block */)a0;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
