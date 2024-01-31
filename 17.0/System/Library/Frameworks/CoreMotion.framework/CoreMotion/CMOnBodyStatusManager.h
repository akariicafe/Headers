@class NSObject;
@protocol OS_dispatch_queue;

@interface CMOnBodyStatusManager : NSObject {
    void *fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

+ (id)sharedOnBodyStatusManager;
+ (BOOL)isOnBodyStatusDetectionAvailable;

- (void)disconnect;
- (id)init;
- (void)stopOnBodyStatusDetection;
- (void)dealloc;
- (void)startOnBodyStatusDetectionToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;
- (void)connect;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)setPropertiesWithDictionary:(id)a0;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)a0 withParameters:(id)a1 handler:(id /* block */)a2;

@end
