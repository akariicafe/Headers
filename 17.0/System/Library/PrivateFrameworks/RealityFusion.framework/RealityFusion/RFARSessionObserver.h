@class NSString, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface RFARSessionObserver : NSObject <ARInternalSessionObserver> {
    struct function<void (rf::data_flow::provider::InputData &&)> { struct __value_func<void (rf::data_flow::provider::InputData &&)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_callback;
    BOOL isUsingV1;
}

@property (nonatomic) struct function<void (rf::data_flow::provider::InputData &&)> { struct __value_func<void (rf::data_flow::provider::InputData &&)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } callback;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundComputeQueue;
@property (readonly, nonatomic) BOOL pinchLeft;
@property (readonly, nonatomic) BOOL pinchRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)session:(id)a0 didAddAnchors:(id)a1;
- (void)session:(id)a0 didRemoveAnchors:(id)a1;
- (void)processAddedAnchors:(id)a0;
- (void)processRemovedAnchors:(id)a0;
- (void)processUpdatedAnchors:(id)a0;
- (void)updateSession:(id)a0 withTime:(double)a1;

@end
