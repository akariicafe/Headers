@class NSObject;
@protocol OS_dispatch_queue;

@interface MRPowerLogger : NSObject

@property (class, readonly, nonatomic) MRPowerLogger *sharedLogger;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)logEvent:(id)a0 withInfo:(id)a1;

@end
