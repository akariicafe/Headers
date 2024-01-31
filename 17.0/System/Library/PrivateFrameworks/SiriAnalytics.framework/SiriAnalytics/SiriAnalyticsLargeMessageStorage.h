@class NSString, SiriAnalyticsLargeMessageUploadProcessor, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsLargeMessageStorage : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_runtimeQueue;
    NSString *_applicationIdentifier;
    SiriAnalyticsLargeMessageUploadProcessor *_processor;
}

- (void).cxx_destruct;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 messageWrapper:(id)a1 completion:(id /* block */)a2;
- (id)initWithApplicationIdentifier:(id)a0 processor:(id)a1 runtimeQueue:(id)a2;

@end
