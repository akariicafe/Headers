@class AVDepthData;

@interface AVCaptureSynchronizedDepthDataInternal : NSObject {
    AVDepthData *depthData;
    BOOL depthDataWasDropped;
    long long droppedReason;
}

@end
