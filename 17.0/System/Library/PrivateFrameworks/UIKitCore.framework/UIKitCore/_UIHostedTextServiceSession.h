@protocol _UIHostedTextServiceSessionDelegate;

@interface _UIHostedTextServiceSession : _UITextServiceSession

@property (nonatomic) id<_UIHostedTextServiceSessionDelegate> delegate;

+ (id)showServiceForType:(long long)a0 withContext:(id)a1;
+ (id)showServiceForText:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 type:(long long)a2 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inView:(id)a4;
+ (id)showServiceForText:(id)a0 type:(long long)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;

- (void)dismissTextServiceAnimated:(BOOL)a0;
- (void)remoteSessionDidDismiss;

@end
