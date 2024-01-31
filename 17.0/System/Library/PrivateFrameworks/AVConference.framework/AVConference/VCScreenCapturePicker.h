@class SCContentSharingPickerConfiguration, SCContentSharingPicker, NSObject;
@protocol OS_dispatch_queue, VCScreenCapturePickerDelegate;

@interface VCScreenCapturePicker : VCObject {
    SCContentSharingPicker *_picker;
    id<VCScreenCapturePickerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic) BOOL active;
@property (readonly, nonatomic) SCContentSharingPickerConfiguration *pickerConfiguration;

- (void)dealloc;
- (id)delegate;
- (void)invalidate;
- (id)initWithDelegate:(id)a0;
- (void)showWithStream:(id)a0;
- (void)setRepickingAllowed:(BOOL)a0;

@end
