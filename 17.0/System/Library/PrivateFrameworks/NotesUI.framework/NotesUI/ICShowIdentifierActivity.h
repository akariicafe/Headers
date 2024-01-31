@class NSString;

@interface ICShowIdentifierActivity : UIActivity

@property (retain, nonatomic) NSString *identifier;

+ (long long)activityCategory;

- (id)initWithIdentifier:(id)a0;
- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
