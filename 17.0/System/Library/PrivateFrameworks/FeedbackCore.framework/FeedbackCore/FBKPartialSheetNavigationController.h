@class NSString;

@interface FBKPartialSheetNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate>

@property (nonatomic) unsigned long long detentBehavior;
@property (nonatomic) double customDetentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detentForCustomHeight:(double)a0;

- (void)viewDidLoad;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (id)detentForPreferredContentSize;

@end
