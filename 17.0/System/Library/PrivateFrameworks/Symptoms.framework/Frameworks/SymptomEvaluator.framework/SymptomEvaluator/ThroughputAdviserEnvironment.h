@class NSObject;
@protocol OS_dispatch_queue;

@interface ThroughputAdviserEnvironment : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;

@end
