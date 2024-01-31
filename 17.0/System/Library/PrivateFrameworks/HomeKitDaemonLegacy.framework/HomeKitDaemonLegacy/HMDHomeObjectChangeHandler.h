@class HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeObjectChangeHandler : HMFObject

@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)handleObjectAdd:(id)a0 message:(id)a1;
- (void)handleObjectRemove:(id)a0 message:(id)a1;
- (void)handleObjectUpdate:(id)a0 newValues:(id)a1 message:(id)a2;

@end
