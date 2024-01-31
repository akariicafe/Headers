@class UIColor, NSString, UIAlertController, UIImage, UIInterfaceAction, UIViewController;
@protocol _UIAlertActionMutablePropertyObservering, _UIAlertActionViewRepresentation;

@interface UIAlertAction : NSObject <NSCopying> {
    long long _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
}

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ simpleHandler;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ shouldDismissHandler;
@property (copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText;
@property (retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController;
@property (copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput;
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) long long keyCommandModifierFlags;
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<_UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation;
@property (setter=_setIsPreferred:) BOOL _isPreferred;
@property (nonatomic, setter=_setAlertController:) UIAlertController *_alertController;
@property (setter=_setRepresenter:) id<_UIAlertActionViewRepresentation> _representer;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)_actionWithContentViewController:(id)a0 style:(long long)a1;
+ (id)_actionWithContentViewController:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)_actionWithTitle:(id)a0 descriptiveText:(id)a1 image:(id)a2 style:(long long)a3 handler:(id /* block */)a4 shouldDismissHandler:(id /* block */)a5;
+ (id)_actionWithTitle:(id)a0 image:(id)a1 style:(long long)a2 handler:(id /* block */)a3 shouldDismissHandler:(id /* block */)a4;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_imageTintColor;
- (id)_titleTextColor;
- (void)_didAddContentViewController;
- (BOOL)_isChecked;
- (void)_setChecked:(BOOL)a0;
- (void)_setImageTintColor:(id)a0;
- (void)_setKeyCommandInput:(id)a0 modifierFlags:(long long)a1;
- (void)_setTitleTextAlignment:(long long)a0;
- (void)_setTitleTextColor:(id)a0;
- (long long)_titleTextAlignment;
- (void)_willAddContentViewController;

@end
