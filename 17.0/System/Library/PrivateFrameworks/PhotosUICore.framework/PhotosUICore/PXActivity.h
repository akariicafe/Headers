@class NSString, UIImage;
@protocol PXActivityItemSourceController, PXActivityActionDelegate, PXActivityDataSource;

@interface PXActivity : UIActivity <PXActivity> {
    struct { BOOL respondsToActivityViewControllerForActivity; BOOL respondsToActivityItemsForActivity; } _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    NSString *_internalActivityType;
}

@property (readonly, nonatomic) NSString *_systemImageName;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) id /* block */ performActivityActionHandler;
@property (copy, nonatomic) id /* block */ canPerformActivityActionHandler;
@property (weak, nonatomic) id<PXActivityActionDelegate> actionDelegate;
@property (weak, nonatomic) id<PXActivityDataSource> dataSource;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_destructiveActivities;
+ (id)activityWithActionTitle:(id)a0 actionType:(id)a1 activityType:(id)a2 systemImageName:(id)a3;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)createActivityBundleImageConfigurationForBundle:(id)a0 imageNamed:(id)a1 activityCategory:(long long)a2;
- (id)initWithActionTitle:(id)a0 actionType:(id)a1 activityType:(id)a2 systemImageName:(id)a3;
- (id)px_activityImageNamed:(id)a0;
- (id)px_activitySettingsImageNamed:(id)a0;
- (void)tearDownForCompletion;
- (void)updateActivityViewControllerVisibleShareActions;

@end
