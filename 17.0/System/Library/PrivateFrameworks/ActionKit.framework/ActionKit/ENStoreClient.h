@class NSObject;
@protocol OS_dispatch_queue;

@interface ENStoreClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (void)invokeAsyncBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncBoolBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncInt32Block:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncObjectBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
