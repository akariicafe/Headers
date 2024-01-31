@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCScreenCapturePickerDelegate;

@interface AVCScreenCapturePicker : NSObject {
    NSObject<OS_dispatch_queue> *_screenCapturePickerQueue;
    AVConferenceXPCClient *_connection;
    id<AVCScreenCapturePickerDelegate> _delegate;
    BOOL _isValid;
}

@property (nonatomic) BOOL excludeCurrentApplication;

- (void)dealloc;
- (id)delegate;
- (void)show;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)invalidate;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;

@end
