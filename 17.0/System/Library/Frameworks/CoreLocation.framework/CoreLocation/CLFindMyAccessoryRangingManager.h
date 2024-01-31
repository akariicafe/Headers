@class NSObject;
@protocol OS_dispatch_queue, CLFindMyAccessoryRangingManagerDelegate;

@interface CLFindMyAccessoryRangingManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _connection;
}

@property (weak, nonatomic) id<CLFindMyAccessoryRangingManagerDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleInterruption;
- (void)fetchFirmwareVersionFromDevice:(id)a0;
- (void)prepareForStartRangingOnDevice:(id)a0;
- (void)connectToDevice:(id)a0;
- (void)disconnectFromDevice:(id)a0;
- (void)initRoseWithParameters:(id)a0 onDevice:(id)a1;
- (void)setRoseRangingParameters:(id)a0 onDevice:(id)a1;
- (void)startEventCounterOnDevice:(id)a0;
- (void)startRangingWithParameters:(id)a0 onDevice:(id)a1;
- (void)stopEventCounterOnDevice:(id)a0;
- (void)stopRangingOnDevice:(id)a0;
- (void)stopRoseWithParameters:(id)a0 onDevice:(id)a1;

@end
