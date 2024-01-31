@class NSMutableArray, AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject {
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    BOOL usingDevice;
    AVCaptureDeviceInput *activeInput;
    NSMutableArray *activeReactions;
}

- (id)init;
- (void)dealloc;

@end
