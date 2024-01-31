@interface ATXPOICategoryStream : NSObject

- (id)publisherForLastNEvents:(id)a0;
- (id)sinkOnScheduler:(id)a0 withCompletion:(id /* block */)a1 receiveInput:(id /* block */)a2;

@end
