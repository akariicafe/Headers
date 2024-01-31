@class NSString;
@protocol PXActivityItemSourceController;

@interface PUAssignToContactActivity : UIAssignToContactActivity <UINavigationControllerDelegate, PXActivity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;

- (void).cxx_destruct;
- (id)activityViewController;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (id)_systemImageName;
- (id)_embeddedActivityViewController;

@end
