@class NSArray, NSString, UIImage;

@interface NUArticleActivity : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
}

@property (readonly, copy, nonatomic) id /* block */ performBlock;
@property (retain, nonatomic) NSArray *activityItems;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithActivityType:(id)a0 title:(id)a1 image:(id)a2 performBlock:(id /* block */)a3;

@end
