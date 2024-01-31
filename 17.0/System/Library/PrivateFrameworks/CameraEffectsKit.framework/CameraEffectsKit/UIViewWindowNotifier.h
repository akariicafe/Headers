@protocol UIViewWindowListener;

@interface UIViewWindowNotifier : UIView

@property (weak, nonatomic) id<UIViewWindowListener> windowListener;

- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end
