@class UIImage, NSString, UIViewController;
@protocol SUActivityDelegate;

@interface SUActivity : UIActivity {
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property (weak, nonatomic) id<SUActivityDelegate> ITunesStoreDelegate;

- (id)activityType;
- (void)dealloc;
- (void)setActivityType:(id)a0;
- (id)activityTitle;
- (void)setActivityTitle:(id)a0;
- (id)activityViewController;
- (void)setActivityViewController:(id)a0;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)setActivityImage:(id)a0;

@end
