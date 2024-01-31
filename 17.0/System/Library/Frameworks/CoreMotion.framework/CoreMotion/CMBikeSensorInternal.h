@class NSObject;
@protocol OS_dispatch_queue;

@interface CMBikeSensorInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_feedBikeSensorData:(id)a0;

@end
