@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AVMovieTrackInternal : NSObject {
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
}

- (void).cxx_destruct;

@end
