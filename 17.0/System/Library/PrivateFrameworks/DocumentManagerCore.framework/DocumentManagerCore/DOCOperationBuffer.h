@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DOCOperationBuffer : NSObject

@property (nonatomic) BOOL locked;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void)signal;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)buffer:(id /* block */)a0;
- (id)initWithLabel:(id)a0 targetQueue:(id)a1;

@end
