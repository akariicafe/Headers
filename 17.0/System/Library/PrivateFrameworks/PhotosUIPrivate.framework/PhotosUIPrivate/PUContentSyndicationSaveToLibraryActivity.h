@class NSString;
@protocol PXActivityItemSourceController;

@interface PUContentSyndicationSaveToLibraryActivity : UIActivity <PXActivity>

@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
