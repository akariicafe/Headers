@class NSString;

@interface _UIDICActionActivity : UIActivity {
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
}

@property (copy, nonatomic) id /* block */ activityPerformingHandler;
@property (copy, nonatomic) id /* block */ activityFinishedPerformingHandler;

+ (long long)activityCategory;
+ (id)newLegacyDelegationActionActivityForCopy;
+ (id)newLegacyDelegationActionActivityForPrint;
+ (id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+ (id)newPreviewActionActivity;

- (void)_cleanup;
- (id)activityType;
- (id)activityTitle;
- (id)description;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithActivityType:(id)a0 activityImageName:(id)a1 localizedTitle:(id)a2;

@end
