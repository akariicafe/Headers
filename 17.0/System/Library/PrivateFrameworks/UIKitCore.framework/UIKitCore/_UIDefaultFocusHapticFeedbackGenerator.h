@class CARInputDeviceTouchpad, CARSessionStatus, NSString;

@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator>

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (retain, nonatomic) CARInputDeviceTouchpad *currentTouchpad;
@property (nonatomic) unsigned long long currentSenderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (void)performHapticFeedbackForFocusUpdateInContext:(id)a0;

@end
