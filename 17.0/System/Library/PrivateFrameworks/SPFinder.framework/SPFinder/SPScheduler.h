@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPSchedulerXPCProtocol;

@interface SPScheduler : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPSchedulerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)remoteInterface;
- (void)dealloc;
- (void).cxx_destruct;
- (void)publishImmediatelyWithCompletion:(id /* block */)a0;
- (void)schedulePublishWakeWithInformation:(id)a0 completion:(id /* block */)a1;

@end
