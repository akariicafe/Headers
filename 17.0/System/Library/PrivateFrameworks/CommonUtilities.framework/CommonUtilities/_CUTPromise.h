@class CUTResult, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _CUTPromise : CUTPromise

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;

- (id)initWithQueue:(id)a0;
- (void)_fulfillWithResult:(id)a0;
- (void)registerResultBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
