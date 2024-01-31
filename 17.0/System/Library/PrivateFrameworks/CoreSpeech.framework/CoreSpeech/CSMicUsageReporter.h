@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMicUsageReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)reportMicUsage:(BOOL)a0;

@end
