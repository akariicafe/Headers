@class NSString, UIImage;

@interface SeymourUI.RemoveUpNextQueueShareSheetActivity : UIActivity {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ upNextQueueClient;
    void /* unknown type, empty encoding */ workoutIdentifier;
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
