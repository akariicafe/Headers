@class NSString, PUActivityItemSourceController, UIImage;
@protocol PUActivityDataSource;

@interface PUActivity : UIActivity <PUActivity> {
    struct { BOOL respondsToActivityViewControllerForActivity; BOOL respondsToActivityItemsForActivity; } _dataSourceFlags;
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
}

@property (weak, nonatomic) id<PUActivityDataSource> dataSource;
@property (weak, nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createActivityBundleImageConfigurationForBundle:(id)a0 imageNamed:(id)a1 activityCategory:(long long)a2;
- (void)tearDownForCompletion;
- (void)updateActivityViewControllerVisibleShareActions;
- (id)pu_activityImageNamed:(id)a0;
- (id)pu_activitySettingsImageNamed:(id)a0;

@end
