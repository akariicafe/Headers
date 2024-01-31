@class NSString, UIImage;

@interface ActivityPlus : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    id /* block */ _actionHandler;
}

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 type:(id)a2 handler:(id /* block */)a3;

@end
