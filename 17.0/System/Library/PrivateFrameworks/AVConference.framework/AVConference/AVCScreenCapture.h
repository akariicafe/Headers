@class AVConferenceXPCClient, VCScreenShare, NSObject;
@protocol OS_dispatch_queue;

@interface AVCScreenCapture : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceScreenCaptureQueue;
    BOOL _isInProcess;
    VCScreenShare *_screenShare;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) long long captureSourceID;

+ (unsigned char)capabilities;
+ (unsigned char)captureCapabilities;

- (void)dealloc;
- (void)stopCapture;
- (void)startCapture;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)a0 withConfig:(id)a1;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)registerBlocksForNotifications;
- (void)reportScreenShareIsStarting:(BOOL)a0;
- (id)updateScreenCaptureWithConfig:(id)a0;

@end
