@class AVDispatchOnce, NSDictionary, NSURL, NSData, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface AVMutableMovieInternal : NSObject {
    struct OpaqueFigMutableMovie { } *figMutableMovie;
    struct OpaqueFigFormatReader { } *formatReader;
    struct OpaqueFigAsset { } *figAsset;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSObject<OS_dispatch_semaphore> *trackWaitingSemaphore;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    NSMutableArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

- (void).cxx_destruct;

@end
