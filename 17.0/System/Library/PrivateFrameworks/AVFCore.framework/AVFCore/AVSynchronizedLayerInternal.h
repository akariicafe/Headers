@class NSMutableSet, AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVSynchronizedLayerInternal : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVPlayerItem *playerItem;
    NSMutableSet *oldPlayerItems;
    BOOL isVisible;
}

@end
