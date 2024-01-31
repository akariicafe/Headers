@class NSMeasurement, NSObject;
@protocol CMWaterSubmersionManagerDelegate, OS_dispatch_queue;

@interface CMWaterSubmersionManager : NSObject {
    void *_locationConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (class, readonly, nonatomic) BOOL waterSubmersionAvailable;
@property (class, readonly, nonatomic) long long authorizationStatus;

@property (weak, nonatomic) id<CMWaterSubmersionManagerDelegate> delegate;
@property (readonly, nonatomic) NSMeasurement *maximumDepth;

+ (BOOL)isAuthorizedAndEntitled;

- (void)_setDelegate:(id)a0;
- (void)_disconnect;
- (id)init;
- (void)dealloc;
- (void)_handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (void)_connect;
- (void)notifySubmersionStateProcessingCompleted;

@end
