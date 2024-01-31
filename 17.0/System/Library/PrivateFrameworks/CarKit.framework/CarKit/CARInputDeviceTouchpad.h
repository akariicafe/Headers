@protocol CARInputDeviceTouchpadDelegate;

@interface CARInputDeviceTouchpad : CARInputDevice

@property (nonatomic) double sensitivity;
@property (weak, nonatomic) id<CARInputDeviceTouchpadDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } physicalSize;
@property (readonly, nonatomic) BOOL characterRecognitionSupported;
@property (readonly, nonatomic) BOOL feedbackSupported;
@property (readonly, nonatomic) unsigned long long supportedFeedbackTypes;

+ (struct CGSize { double x0; double x1; })physicalSizeForTouchpadWithDigitizerProperties:(id)a0;

- (void)_setDelegate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)performFeedbackOfType:(unsigned long long)a0;
- (BOOL)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)_initWithSupportedHapticTypes:(unsigned long long)a0 physicalSize:(struct CGSize { double x0; double x1; })a1 characterRecognitionSupported:(BOOL)a2 senderID:(unsigned long long)a3 UUID:(id)a4;
- (struct CGSize { double x0; double x1; })_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithServiceClient:(struct __IOHIDServiceClient { } *)a0 UUID:(id)a1 settings:(id)a2 delegate:(id)a3;
- (void)updateSettingsWithSettings:(id)a0;

@end
