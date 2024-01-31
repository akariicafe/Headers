@class NSString, UIImage;

@interface SeymourUI.AddUpNextQueueShareSheetActivity : UIActivity {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ upNextQueueClient;
    void /* unknown type, empty encoding */ workoutActivityType;
    void /* unknown type, empty encoding */ upNextQueueItems;
    void /* unknown type, empty encoding */ workoutDetail;
}

@property (class, nonatomic, readonly) long long activityCategory;

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) UIImage *activityImage;

- (id)init;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
