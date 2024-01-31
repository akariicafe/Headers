@class UIView;
@protocol CAMPhysicalCaptureNotifierDelegate, BSInvalidatable;

@interface CAMPhysicalCaptureNotifier : NSObject

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (readonly, nonatomic) UIView *_view;
@property (retain, nonatomic) id<BSInvalidatable> _cameraButtonRequest;
@property (weak, nonatomic) id<CAMPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithView:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleVolumeDownButtonDownNotification:(id)a0;
- (void)_handleVolumeDownButtonUpNotification:(id)a0;
- (void)_handleVolumeUpButtonDownNotification:(id)a0;
- (void)_handleVolumeUpButtonUpNotification:(id)a0;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeededForButton:(long long)a0;

@end
