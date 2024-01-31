@class NSString, VCScreenCapturePicker, NSMutableDictionary, NSObject, SCStream, PAAccessInterval, SCContentFilter, VCScreenShare;
@protocol OS_dispatch_queue;

@interface VCScreenCaptureManager : NSObject <VCScreenCapturePickerDelegate> {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableDictionary *_screenShare;
    PAAccessInterval *_accessInterval;
    VCScreenShare *_pickerClientScreenShare;
}

@property (readonly, nonatomic) VCScreenCapturePicker *picker;
@property (readonly, nonatomic) SCContentFilter *contentFilter;
@property (retain, nonatomic) SCStream *screenStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (BOOL)canScreenSharePrivateContent:(id)a0;
+ (long long)contentTypeForFilter:(id)a0;

- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)startPrivacyAccountingInterval:(id)a0;
- (id)updateScreenCapture:(id)a0 withConfig:(id)a1;
- (id)attributesForContentFilter:(id)a0;
- (void)createPicker;
- (void)endPrivacyAccountingInterval:(id)a0;
- (id)errorForAttributesError:(id)a0;
- (id)getErrorDictionaryFromError:(id)a0;
- (void)invalidatePicker;
- (BOOL)isPickerClientProcessId:(id)a0;
- (id)newCaptureSourceID;
- (id)newScreenShareWithConfig:(id)a0 pid:(id)a1;
- (void)picker:(id)a0 pickedContentFilter:(id)a1 forStream:(id)a2 error:(id)a3;
- (void)removePickerClientScreenShare:(id)a0;
- (void)screenCaptureStartFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (void)screenCaptureStopFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (id)screenShareDictionary:(id)a0;
- (BOOL)shouldUpdateFilter:(id)a0;
- (id)startScreenShare:(id)a0;
- (id)stopScreenShare:(id)a0;
- (id)stopScreenShareAndNotifyDelegate:(id)a0;
- (id)updateCurrentPickerScreenCapture;

@end
