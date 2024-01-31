@class NSString, NSURLResponse;

@interface NWURLSessionResponseConsumerDataDelegate : NSObject <NWURLSessionResponseConsumer> {
    NSURLResponse *_currentResponse;
}

@property (readonly) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)task:(id)a0 deliverData:(id)a1 complete:(BOOL)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)task:(id)a0 deliverResponse:(id)a1 completionHandler:(id /* block */)a2;

@end
