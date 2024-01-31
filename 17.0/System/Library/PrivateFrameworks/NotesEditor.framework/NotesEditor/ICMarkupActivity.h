@class ICAttachment, UIViewController, UIView;

@interface ICMarkupActivity : UIActivity

@property (weak, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) ICAttachment *attachment;
@property (copy, nonatomic) id /* block */ frameBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long inkStyle;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initFromView:(id)a0 presentingViewController:(id)a1 frameBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;

@end
