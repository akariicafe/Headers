@class UIKeyboardSceneDelegate, NSString, UIView, UIResponder, UIViewController;

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {
    long long _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    UIKeyboardSceneDelegate *_keyboardSceneDelegate;
    BOOL _dismissed;
}

@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showServiceForType:(long long)a0 withContext:(id)a1;
+ (BOOL)_canShowTextServiceForType:(long long)a0;
+ (BOOL)_canShowTextServices;
+ (long long)availableTextServices;
+ (BOOL)shouldPresentServiceInSameWindowAsView:(id)a0;
+ (id)showServiceForText:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(long long)a2 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inView:(id)a4;
+ (id)showServiceForText:(id)a0 type:(long long)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
+ (BOOL)textServiceIsDisplaying;
+ (id)textServiceSessionForType:(long long)a0;

- (id)init;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)_endSession;
- (long long)type;
- (void)dismissTextServiceAnimated:(BOOL)a0;
- (BOOL)isDisplaying;
- (void)sessionDidDismiss;

@end
