@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTDeviceResourceManager : NSObject <AVTDeviceResourceConsumerDelegate>

@property (readonly, nonatomic) NSMutableArray *consumers;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unregisterConsumer:(id)a0;
- (void).cxx_destruct;
- (void)registerConsumer:(id)a0;
- (void)consumer:(id)a0 willConsumeRenderingResourceForEstimatedDuration:(double)a1;
- (id)initWithLogger:(id)a0 lockProvider:(id /* block */)a1;
- (void)performWorkWithConsumers:(id /* block */)a0;

@end
