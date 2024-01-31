@class NSString, UIImage, UIViewController;

@interface VKVisualSearchActivity : UIActivity

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) struct CGImage { } *imageToProcess;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithImage:(struct CGImage { } *)a0 presentingViewController:(id)a1;

@end
