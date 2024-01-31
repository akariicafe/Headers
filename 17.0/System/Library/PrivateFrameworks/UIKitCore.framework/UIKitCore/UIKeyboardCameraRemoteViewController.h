@class NSString;
@protocol UIKeyboardCameraRemoteViewControllerHost;

@interface UIKeyboardCameraRemoteViewController : _UIRemoteViewController <UIKeyboardCameraRemoteViewControllerHost>

@property (weak, nonatomic) id<UIKeyboardCameraRemoteViewControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)a0;

@end
