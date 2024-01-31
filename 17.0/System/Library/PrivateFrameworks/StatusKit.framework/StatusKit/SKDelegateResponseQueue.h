@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDelegateResponseQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;

@end
